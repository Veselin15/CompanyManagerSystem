#include "RegisterCompanyForm.h"
#include "LoginCompanyForm.h"

using namespace System;
using namespace System::Windows::Forms;

System::Void CompanyManager::RegisterCompanyForm::login_link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    LoginCompanyForm^ loginForm = gcnew LoginCompanyForm();
    loginForm->Show();
    this->Hide();
}

void main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // Create the register company form and run the application
    CompanyManager::RegisterCompanyForm form;
    Application::Run(% form);
}