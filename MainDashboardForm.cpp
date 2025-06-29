#include "MainDashboardForm.h"
#include "AddProjectForm.h"
#include "AddEmployeeForm.h"
#include "ViewEmployeesForm.h"
#include "ViewProjectsForm.h"
#include "EditEmployeeForm.h"
#include "EditProjectForm.h"
#include "LoginCompanyForm.h"

System::Void CompanyManager::MainDashboardForm::add_project_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    AddProjectForm^ addProjectForm = gcnew AddProjectForm();
    addProjectForm->ShowDialog();

}
System::Void CompanyManager::MainDashboardForm::edit_project_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    EditProjectForm^ editProjectForm = gcnew EditProjectForm();
    editProjectForm->ShowDialog(); 
}
System::Void CompanyManager::MainDashboardForm::view_project_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    ViewProjectsForm^ viewProjectForm= gcnew ViewProjectsForm();
    viewProjectForm->ShowDialog(); 
}
System::Void CompanyManager::MainDashboardForm::add_employee_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    AddEmployeeForm^ addEmployeeForm = gcnew AddEmployeeForm();
    addEmployeeForm->ShowDialog(); 
}
System::Void CompanyManager::MainDashboardForm::edit_employee_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    EditEmployeeForm^ editEmployeeForm = gcnew EditEmployeeForm();
    editEmployeeForm->ShowDialog();
}
System::Void CompanyManager::MainDashboardForm::view_employees_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    ViewEmployeesForm^ viewEmployeesForm = gcnew ViewEmployeesForm();
    viewEmployeesForm->ShowDialog();
}
System::Void CompanyManager::MainDashboardForm::log_out_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    LoginCompanyForm^ loginCompanyForm = gcnew LoginCompanyForm();
    loginCompanyForm->Show();
    this->Close();
}