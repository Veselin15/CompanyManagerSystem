#include "LoginCompanyForm.h"
#include "RegisterCompanyForm.h"

System::Void CompanyManager::LoginCompanyForm::register_link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    RegisterCompanyForm^ regForm = gcnew RegisterCompanyForm();
    regForm->Show();
    this->Hide();
}