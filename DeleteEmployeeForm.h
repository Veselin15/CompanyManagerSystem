#pragma once

namespace CompanyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteEmployeeForm
	/// </summary>
	public ref class DeleteEmployeeForm : public System::Windows::Forms::Form
	{
	public:
		DeleteEmployeeForm(void)
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
		~DeleteEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ department_label;
	protected:
	private: System::Windows::Forms::ComboBox^ department_combo_box;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	private: System::Windows::Forms::Label^ hire_date_label;
	private: System::Windows::Forms::TextBox^ address_txt_box;
	private: System::Windows::Forms::Label^ edit_employee_label;
	private: System::Windows::Forms::Label^ address_label;
	private: System::Windows::Forms::MaskedTextBox^ email_txt_box;
	private: System::Windows::Forms::TextBox^ name_txt_box;
	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ delete_btn;
	private: System::Windows::Forms::Label^ email_label;
	private: System::Windows::Forms::Label^ name_label;

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
			this->department_label = (gcnew System::Windows::Forms::Label());
			this->department_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->hire_date_label = (gcnew System::Windows::Forms::Label());
			this->address_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->edit_employee_label = (gcnew System::Windows::Forms::Label());
			this->address_label = (gcnew System::Windows::Forms::Label());
			this->email_txt_box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->name_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->email_label = (gcnew System::Windows::Forms::Label());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// department_label
			// 
			this->department_label->AutoSize = true;
			this->department_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->department_label->Location = System::Drawing::Point(14, 273);
			this->department_label->Name = L"department_label";
			this->department_label->Size = System::Drawing::Size(98, 20);
			this->department_label->TabIndex = 62;
			this->department_label->Text = L"Department:";
			// 
			// department_combo_box
			// 
			this->department_combo_box->Enabled = false;
			this->department_combo_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->department_combo_box->FormattingEnabled = true;
			this->department_combo_box->Location = System::Drawing::Point(206, 270);
			this->department_combo_box->Name = L"department_combo_box";
			this->department_combo_box->Size = System::Drawing::Size(279, 28);
			this->department_combo_box->TabIndex = 61;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Enabled = false;
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker->Location = System::Drawing::Point(206, 218);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(279, 26);
			this->dateTimePicker->TabIndex = 60;
			// 
			// hire_date_label
			// 
			this->hire_date_label->AutoSize = true;
			this->hire_date_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hire_date_label->Location = System::Drawing::Point(14, 219);
			this->hire_date_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->hire_date_label->Name = L"hire_date_label";
			this->hire_date_label->Size = System::Drawing::Size(81, 20);
			this->hire_date_label->TabIndex = 59;
			this->hire_date_label->Text = L"Hire Date:";
			// 
			// address_txt_box
			// 
			this->address_txt_box->Enabled = false;
			this->address_txt_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address_txt_box->Location = System::Drawing::Point(206, 168);
			this->address_txt_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->address_txt_box->Name = L"address_txt_box";
			this->address_txt_box->Size = System::Drawing::Size(279, 26);
			this->address_txt_box->TabIndex = 58;
			// 
			// edit_employee_label
			// 
			this->edit_employee_label->AutoSize = true;
			this->edit_employee_label->Enabled = false;
			this->edit_employee_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->edit_employee_label->Location = System::Drawing::Point(224, 20);
			this->edit_employee_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_employee_label->Name = L"edit_employee_label";
			this->edit_employee_label->Size = System::Drawing::Size(256, 37);
			this->edit_employee_label->TabIndex = 57;
			this->edit_employee_label->Text = L"Delete Employee";
			this->edit_employee_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// address_label
			// 
			this->address_label->AutoSize = true;
			this->address_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address_label->Location = System::Drawing::Point(14, 171);
			this->address_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->address_label->Name = L"address_label";
			this->address_label->Size = System::Drawing::Size(68, 20);
			this->address_label->TabIndex = 56;
			this->address_label->Text = L"Address";
			// 
			// email_txt_box
			// 
			this->email_txt_box->Enabled = false;
			this->email_txt_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_txt_box->Location = System::Drawing::Point(206, 115);
			this->email_txt_box->Name = L"email_txt_box";
			this->email_txt_box->Size = System::Drawing::Size(279, 26);
			this->email_txt_box->TabIndex = 55;
			// 
			// name_txt_box
			// 
			this->name_txt_box->Enabled = false;
			this->name_txt_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_txt_box->Location = System::Drawing::Point(206, 67);
			this->name_txt_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->name_txt_box->Name = L"name_txt_box";
			this->name_txt_box->Size = System::Drawing::Size(279, 26);
			this->name_txt_box->TabIndex = 54;
			// 
			// cancel_btn
			// 
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->Location = System::Drawing::Point(373, 416);
			this->cancel_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(112, 49);
			this->cancel_btn->TabIndex = 53;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = true;
			// 
			// delete_btn
			// 
			this->delete_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_btn->Location = System::Drawing::Point(206, 416);
			this->delete_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(112, 49);
			this->delete_btn->TabIndex = 52;
			this->delete_btn->Text = L"Delete";
			this->delete_btn->UseVisualStyleBackColor = true;
			// 
			// email_label
			// 
			this->email_label->AutoSize = true;
			this->email_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_label->Location = System::Drawing::Point(14, 118);
			this->email_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->email_label->Name = L"email_label";
			this->email_label->Size = System::Drawing::Size(52, 20);
			this->email_label->TabIndex = 51;
			this->email_label->Text = L"Email:";
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label->Location = System::Drawing::Point(14, 70);
			this->name_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(158, 20);
			this->name_label->TabIndex = 50;
			this->name_label->Text = L"Employee Full Name:";
			// 
			// DeleteEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 489);
			this->Controls->Add(this->department_label);
			this->Controls->Add(this->department_combo_box);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->hire_date_label);
			this->Controls->Add(this->address_txt_box);
			this->Controls->Add(this->edit_employee_label);
			this->Controls->Add(this->address_label);
			this->Controls->Add(this->email_txt_box);
			this->Controls->Add(this->name_txt_box);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->delete_btn);
			this->Controls->Add(this->email_label);
			this->Controls->Add(this->name_label);
			this->Name = L"DeleteEmployeeForm";
			this->Text = L"DeleteEmployeeForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
