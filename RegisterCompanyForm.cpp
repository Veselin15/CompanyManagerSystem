#include "RegisterCompanyForm.h"
#include "LoginCompanyForm.h"

using namespace System;
using namespace System::Windows::Forms;

System::Void CompanyManager::RegisterCompanyForm::login_link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    LoginCompanyForm^ loginForm = gcnew LoginCompanyForm();
    loginForm->Show();
    this->Hide();
}
System::Void CompanyManager::RegisterCompanyForm::submit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = name_txt_box->Text->Trim();
	String^ password = password_txt_box->Text->Trim();
	String^ address = maskedTextBox1->Text->Trim();
	String^ description = maskedTextBox2->Text->Trim();
	if (name->Length == 0 || password->Length == 0) {
		MessageBox::Show("Company name and password are required.", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=CompanyManagerDB;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();
		String^ query = "INSERT INTO Companies (name, password, address, description) VALUES (@name, @password, @address, @description)";
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		command->Parameters->AddWithValue("@name", name);
		command->Parameters->AddWithValue("@password", password);
		if (address == "")
			command->Parameters->AddWithValue("@address", DBNull::Value);
		else
			command->Parameters->AddWithValue("@address", address);
		if (description == "")
			command->Parameters->AddWithValue("@description", DBNull::Value);
		else
			command->Parameters->AddWithValue("@description", description);

		command->ExecuteNonQuery();
		connection->Close();

		MessageBox::Show("Company registered successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred while registering the company: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CompanyManager::RegisterCompanyForm form;
	Application::Run(% form);
	return 0;
}
