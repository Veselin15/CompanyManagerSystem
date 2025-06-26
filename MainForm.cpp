#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main form and run the application
	CompanyManager::MainForm form;
	Application::Run(%form);
}