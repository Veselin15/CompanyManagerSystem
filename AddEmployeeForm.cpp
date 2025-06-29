#include "AddEmployeeForm.h"
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

System::Void CompanyManager::AddEmployeeForm::AddEmployeeForm_Load(System::Object^ sender, System::EventArgs^ e) {
    department_combo_box->Items->Clear();
    try {
        String^ connectionString = "Data Source=localhost;Initial Catalog=CompanyManagerDB;Integrated Security=True";
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        connection->Open();
        String^ query = "SELECT id, name FROM departments";
        SqlCommand^ command = gcnew SqlCommand(query, connection);
        SqlDataReader^ reader = command->ExecuteReader();
        while (reader->Read()) {
            int id = reader->GetInt32(0);
            System::String^ name = reader->GetString(1);
            department_combo_box->Items->Add(
                gcnew System::Collections::Generic::KeyValuePair<int, System::String^>(id, name)
            );
        }
        connection->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Failed to load departments: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    department_combo_box->DisplayMember = "Value";
    department_combo_box->ValueMember = "Key";
}

System::Void CompanyManager::AddEmployeeForm::submit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ name = name_txt_box->Text->Trim();
    String^ email = email_txt_box->Text->Trim();
    String^ phone = phone_txt_box->Text->Trim();
    String^ hireDate = dateTimePicker->Value.ToString("yyyy-MM-dd");
    int departmentId = -1;
    if (department_combo_box->SelectedItem != nullptr) {
        departmentId = safe_cast<System::Collections::Generic::KeyValuePair<int, System::String^>^>(department_combo_box->SelectedItem)->Key;
    }

    if (name->Length == 0 || email->Length == 0 || departmentId == -1) {
        MessageBox::Show("Please fill in all required fields (Name, Email, Hire Date, Department).", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    try {
        String^ connectionString = "Data Source=localhost;Initial Catalog=CompanyManagerDB;Integrated Security=True";
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        connection->Open();

        String^ query = "INSERT INTO employees (full_name, email, phone, hire_date, department_id, company_id) VALUES (@name, @email, @phone, @hireDate, @departmentId, @companyId)";
        SqlCommand^ command = gcnew SqlCommand(query, connection);

        command->Parameters->AddWithValue("@name", name);
        command->Parameters->AddWithValue("@email", email);
        if (phone->Length == 0)
            command->Parameters->AddWithValue("@phone", DBNull::Value);
        else
            command->Parameters->AddWithValue("@phone", phone);
        command->Parameters->AddWithValue("@hireDate", hireDate);
        command->Parameters->AddWithValue("@departmentId", departmentId);
        command->Parameters->AddWithValue("@companyId", id);

        command->ExecuteNonQuery();
        connection->Close();

        MessageBox::Show("Employee added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        this->Close();
    }
    catch (SqlException^ ex) {
        if (ex->Number == 2627) { // Unique constraint error (duplicate email)
            MessageBox::Show("This email is already used by another employee.", "Duplicate Email", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            MessageBox::Show("An error occurred while adding the employee: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show("An error occurred while adding the employee: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}