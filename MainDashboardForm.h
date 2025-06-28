#pragma once

namespace CompanyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainDashboardForm
	/// </summary>
	public ref class MainDashboardForm : public System::Windows::Forms::Form
	{
	public:
		MainDashboardForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainDashboardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ welcome_label;


	private: System::Windows::Forms::Button^ log_out_btn;
	private: System::Windows::Forms::Button^ add_employee_btn;
	private: System::Windows::Forms::Button^ view_employees_btn;
	private: System::Windows::Forms::Button^ edit_employee_btn;

	private: System::Windows::Forms::Button^ del_employee_btn;





	private: System::Windows::Forms::Button^ del_project_btn;
	private: System::Windows::Forms::Button^ edit_project_btn;

	private: System::Windows::Forms::Button^ view_project_btn;
	private: System::Windows::Forms::Button^ add_project_btn;





	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->welcome_label = (gcnew System::Windows::Forms::Label());
			this->log_out_btn = (gcnew System::Windows::Forms::Button());
			this->add_employee_btn = (gcnew System::Windows::Forms::Button());
			this->view_employees_btn = (gcnew System::Windows::Forms::Button());
			this->edit_employee_btn = (gcnew System::Windows::Forms::Button());
			this->del_employee_btn = (gcnew System::Windows::Forms::Button());
			this->del_project_btn = (gcnew System::Windows::Forms::Button());
			this->edit_project_btn = (gcnew System::Windows::Forms::Button());
			this->view_project_btn = (gcnew System::Windows::Forms::Button());
			this->add_project_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// welcome_label
			// 
			this->welcome_label->AutoSize = true;
			this->welcome_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcome_label->Location = System::Drawing::Point(207, 40);
			this->welcome_label->Name = L"welcome_label";
			this->welcome_label->Size = System::Drawing::Size(150, 37);
			this->welcome_label->TabIndex = 0;
			this->welcome_label->Text = L"Welcome";
			// 
			// log_out_btn
			// 
			this->log_out_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log_out_btn->Location = System::Drawing::Point(490, 396);
			this->log_out_btn->Name = L"log_out_btn";
			this->log_out_btn->Size = System::Drawing::Size(87, 47);
			this->log_out_btn->TabIndex = 3;
			this->log_out_btn->Text = L"Log out";
			this->log_out_btn->UseVisualStyleBackColor = true;
			// 
			// add_employee_btn
			// 
			this->add_employee_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_employee_btn->Location = System::Drawing::Point(44, 94);
			this->add_employee_btn->Name = L"add_employee_btn";
			this->add_employee_btn->Size = System::Drawing::Size(116, 55);
			this->add_employee_btn->TabIndex = 1;
			this->add_employee_btn->Text = L"Add Employee";
			this->add_employee_btn->UseMnemonic = false;
			this->add_employee_btn->UseVisualStyleBackColor = true;
			this->add_employee_btn->Click += gcnew System::EventHandler(this, &MainDashboardForm::employee_btn_Click);
			// 
			// view_employees_btn
			// 
			this->view_employees_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_employees_btn->Location = System::Drawing::Point(44, 165);
			this->view_employees_btn->Name = L"view_employees_btn";
			this->view_employees_btn->Size = System::Drawing::Size(116, 55);
			this->view_employees_btn->TabIndex = 4;
			this->view_employees_btn->Text = L"View Employees";
			this->view_employees_btn->UseMnemonic = false;
			this->view_employees_btn->UseVisualStyleBackColor = true;
			// 
			// edit_employee_btn
			// 
			this->edit_employee_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_employee_btn->Location = System::Drawing::Point(44, 236);
			this->edit_employee_btn->Name = L"edit_employee_btn";
			this->edit_employee_btn->Size = System::Drawing::Size(116, 55);
			this->edit_employee_btn->TabIndex = 5;
			this->edit_employee_btn->Text = L"Edit Employee";
			this->edit_employee_btn->UseMnemonic = false;
			this->edit_employee_btn->UseVisualStyleBackColor = true;
			// 
			// del_employee_btn
			// 
			this->del_employee_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_employee_btn->Location = System::Drawing::Point(44, 308);
			this->del_employee_btn->Name = L"del_employee_btn";
			this->del_employee_btn->Size = System::Drawing::Size(116, 55);
			this->del_employee_btn->TabIndex = 6;
			this->del_employee_btn->Text = L"Delete Employee";
			this->del_employee_btn->UseMnemonic = false;
			this->del_employee_btn->UseVisualStyleBackColor = true;
			// 
			// del_project_btn
			// 
			this->del_project_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_project_btn->Location = System::Drawing::Point(390, 308);
			this->del_project_btn->Name = L"del_project_btn";
			this->del_project_btn->Size = System::Drawing::Size(116, 55);
			this->del_project_btn->TabIndex = 13;
			this->del_project_btn->Text = L"Delete Project";
			this->del_project_btn->UseMnemonic = false;
			this->del_project_btn->UseVisualStyleBackColor = true;
			// 
			// edit_project_btn
			// 
			this->edit_project_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_project_btn->Location = System::Drawing::Point(390, 236);
			this->edit_project_btn->Name = L"edit_project_btn";
			this->edit_project_btn->Size = System::Drawing::Size(116, 55);
			this->edit_project_btn->TabIndex = 12;
			this->edit_project_btn->Text = L"Edit Project";
			this->edit_project_btn->UseMnemonic = false;
			this->edit_project_btn->UseVisualStyleBackColor = true;
			// 
			// view_project_btn
			// 
			this->view_project_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_project_btn->Location = System::Drawing::Point(390, 165);
			this->view_project_btn->Name = L"view_project_btn";
			this->view_project_btn->Size = System::Drawing::Size(116, 55);
			this->view_project_btn->TabIndex = 11;
			this->view_project_btn->Text = L"View Projects";
			this->view_project_btn->UseMnemonic = false;
			this->view_project_btn->UseVisualStyleBackColor = true;
			// 
			// add_project_btn
			// 
			this->add_project_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_project_btn->Location = System::Drawing::Point(390, 94);
			this->add_project_btn->Name = L"add_project_btn";
			this->add_project_btn->Size = System::Drawing::Size(116, 55);
			this->add_project_btn->TabIndex = 10;
			this->add_project_btn->Text = L"Add Project";
			this->add_project_btn->UseMnemonic = false;
			this->add_project_btn->UseVisualStyleBackColor = true;
			// 
			// MainDashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(589, 455);
			this->Controls->Add(this->del_project_btn);
			this->Controls->Add(this->edit_project_btn);
			this->Controls->Add(this->view_project_btn);
			this->Controls->Add(this->add_project_btn);
			this->Controls->Add(this->del_employee_btn);
			this->Controls->Add(this->edit_employee_btn);
			this->Controls->Add(this->view_employees_btn);
			this->Controls->Add(this->log_out_btn);
			this->Controls->Add(this->add_employee_btn);
			this->Controls->Add(this->welcome_label);
			this->Name = L"MainDashboardForm";
			this->Text = L"MainDashboardForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void employee_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
