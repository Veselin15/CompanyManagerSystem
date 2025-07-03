#include "EditEmployeeForm.h"

using namespace System::Data;
using namespace System::Data::SqlClient;

System::Void CompanyManager::EditEmployeeForm::EditEmployeeForm_Load(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show(companyId.ToString());
    try {
        String^ connectionString = "Data Source=localhost;Initial Catalog=CompanyManagerDB;Integrated Security=True";
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        connection->Open();


        String^ query = "SELECT e.id, e.full_name, e.email, e.phone, e.hire_date, d.name AS department(not editable)"
            " FROM Employees e"
            " JOIN Departments d ON e.department_id = d.id"
            " WHERE e.company_id = @companyId";


        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, connection);
        adapter->SelectCommand->Parameters->AddWithValue("@companyId", companyId);

        DataTable^ table = gcnew DataTable();
        adapter->Fill(table);

        dataGridView->DataSource = table;
        dataGridView->ReadOnly = false; 
        dataGridView->AllowUserToAddRows = false; 


        connection->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Failed to load employees: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

System::Void CompanyManager::EditEmployeeForm::submit_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        String^ connectionString = "Data Source=localhost;Initial Catalog=CompanyManagerDB;Integrated Security=True";
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        connection->Open();

        DataTable^ table = dynamic_cast<DataTable^>(dataGridView->DataSource);

        for each (DataRow ^ row in table->Rows) {
            if (row->RowState == DataRowState::Modified) {
                int id = safe_cast<int>(row["id"]);
                String^ fullName = safe_cast<String^>(row["full_name"]);
                String^ email = safe_cast<String^>(row["email"]);
                String^ phone = safe_cast<String^>(row["phone"]);
                String^ hireDate = safe_cast<System::DateTime>(row["hire_date"]).ToString("yyyy-MM-dd");

                String^ updateQuery = "UPDATE Employees SET full_name=@fullName, email=@email, phone=@phone, hire_date=@hireDate WHERE id=@id";
                SqlCommand^ cmd = gcnew SqlCommand(updateQuery, connection);
                cmd->Parameters->AddWithValue("@fullName", fullName);
                cmd->Parameters->AddWithValue("@email", email);
                cmd->Parameters->AddWithValue("@phone", phone);
                cmd->Parameters->AddWithValue("@hireDate", hireDate);
                cmd->Parameters->AddWithValue("@id", id);

                cmd->ExecuteNonQuery();
            }
        }

        connection->Close();
        MessageBox::Show("Changes saved successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ ex) {
        MessageBox::Show("Failed to save changes: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}