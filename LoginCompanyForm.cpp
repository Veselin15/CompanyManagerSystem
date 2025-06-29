#include "LoginCompanyForm.h"
#include "RegisterCompanyForm.h"
#include "MainDashboardForm.h"

System::Void CompanyManager::LoginCompanyForm::register_link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    RegisterCompanyForm^ regForm = gcnew RegisterCompanyForm();
    regForm->Show();
    this->Hide();
}
System::Void CompanyManager::LoginCompanyForm::submit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = name_txt_box->Text->Trim();
	String^ password = password_txt_box->Text->Trim();
	int id = 0; // 
	if (name->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please fill in all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=CompanyManagerDB;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		String^ query = "SELECT id FROM Companies WHERE name = @name AND password = @password";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@name", name);
		command->Parameters->AddWithValue("@password", password);

		Object^ result = command->ExecuteScalar();
		connection->Close();

		if (result != nullptr) {
			int id = safe_cast<int>(result);
			MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			MainDashboardForm^ dashboard = gcnew MainDashboardForm(id);
			dashboard->Show();
			this->Hide();
		}
		else {
			MessageBox::Show("Invalid company name or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred while logging in: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}