#pragma once

namespace CompanyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AddEmployeeForm
	/// </summary>
	public ref class AddEmployeeForm : public System::Windows::Forms::Form
	{

	public:
		AddEmployeeForm(void)
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
		~AddEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		int id;
	public:
		AddEmployeeForm(int id) {
			InitializeComponent();
			this->id = id;
		}
	private: System::Windows::Forms::Label^ hire_date_label;
	private: System::Windows::Forms::Label^ phone_label;
	protected:

	protected:

	protected:




	private: System::Windows::Forms::MaskedTextBox^ email_txt_box;


	private: System::Windows::Forms::TextBox^ name_txt_box;
	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ submit_btn;

	private: System::Windows::Forms::Label^ email_label;

	private: System::Windows::Forms::Label^ name_label;
	private: System::Windows::Forms::Label^ add_employee_label;
	private: System::Windows::Forms::TextBox^ phone_txt_box;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	private: System::Windows::Forms::ComboBox^ department_combo_box;
	private: System::Windows::Forms::Label^ department_label;



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
			this->hire_date_label = (gcnew System::Windows::Forms::Label());
			this->phone_label = (gcnew System::Windows::Forms::Label());
			this->email_txt_box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->name_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->submit_btn = (gcnew System::Windows::Forms::Button());
			this->email_label = (gcnew System::Windows::Forms::Label());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->add_employee_label = (gcnew System::Windows::Forms::Label());
			this->phone_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->department_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->department_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// hire_date_label
			// 
			this->hire_date_label->AutoSize = true;
			this->hire_date_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hire_date_label->Location = System::Drawing::Point(14, 214);
			this->hire_date_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->hire_date_label->Name = L"hire_date_label";
			this->hire_date_label->Size = System::Drawing::Size(81, 20);
			this->hire_date_label->TabIndex = 31;
			this->hire_date_label->Text = L"Hire Date:";
			this->hire_date_label->Click += gcnew System::EventHandler(this, &AddEmployeeForm::description_label_Click);
			// 
			// phone_label
			// 
			this->phone_label->AutoSize = true;
			this->phone_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone_label->Location = System::Drawing::Point(14, 160);
			this->phone_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->phone_label->Name = L"phone_label";
			this->phone_label->Size = System::Drawing::Size(119, 20);
			this->phone_label->TabIndex = 29;
			this->phone_label->Text = L"Phone Number:";
			this->phone_label->Click += gcnew System::EventHandler(this, &AddEmployeeForm::phone_label_Click);
			// 
			// email_txt_box
			// 
			this->email_txt_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_txt_box->Location = System::Drawing::Point(206, 104);
			this->email_txt_box->Name = L"email_txt_box";
			this->email_txt_box->Size = System::Drawing::Size(279, 26);
			this->email_txt_box->TabIndex = 28;
			this->email_txt_box->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &AddEmployeeForm::email_txt_box_MaskInputRejected);
			// 
			// name_txt_box
			// 
			this->name_txt_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_txt_box->Location = System::Drawing::Point(206, 56);
			this->name_txt_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->name_txt_box->Name = L"name_txt_box";
			this->name_txt_box->Size = System::Drawing::Size(279, 26);
			this->name_txt_box->TabIndex = 26;
			this->name_txt_box->TextChanged += gcnew System::EventHandler(this, &AddEmployeeForm::name_txt_box_TextChanged);
			// 
			// cancel_btn
			// 
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->Location = System::Drawing::Point(373, 405);
			this->cancel_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(112, 49);
			this->cancel_btn->TabIndex = 25;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = true;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &AddEmployeeForm::cancel_btn_Click);
			// 
			// submit_btn
			// 
			this->submit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit_btn->Location = System::Drawing::Point(206, 405);
			this->submit_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->submit_btn->Name = L"submit_btn";
			this->submit_btn->Size = System::Drawing::Size(112, 49);
			this->submit_btn->TabIndex = 24;
			this->submit_btn->Text = L"Submit";
			this->submit_btn->UseVisualStyleBackColor = true;
			this->submit_btn->Click += gcnew System::EventHandler(this, &AddEmployeeForm::submit_btn_Click);
			// 
			// email_label
			// 
			this->email_label->AutoSize = true;
			this->email_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_label->Location = System::Drawing::Point(14, 107);
			this->email_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->email_label->Name = L"email_label";
			this->email_label->Size = System::Drawing::Size(52, 20);
			this->email_label->TabIndex = 23;
			this->email_label->Text = L"Email:";
			this->email_label->Click += gcnew System::EventHandler(this, &AddEmployeeForm::email_label_Click);
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label->Location = System::Drawing::Point(14, 59);
			this->name_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(158, 20);
			this->name_label->TabIndex = 22;
			this->name_label->Text = L"Employee Full Name:";
			this->name_label->Click += gcnew System::EventHandler(this, &AddEmployeeForm::name_label_Click);
			// 
			// add_employee_label
			// 
			this->add_employee_label->AutoSize = true;
			this->add_employee_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_employee_label->Location = System::Drawing::Point(224, 9);
			this->add_employee_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_employee_label->Name = L"add_employee_label";
			this->add_employee_label->Size = System::Drawing::Size(224, 37);
			this->add_employee_label->TabIndex = 33;
			this->add_employee_label->Text = L"Add Employee";
			this->add_employee_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->add_employee_label->Click += gcnew System::EventHandler(this, &AddEmployeeForm::LoginText_Click);
			// 
			// phone_txt_box
			// 
			this->phone_txt_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone_txt_box->Location = System::Drawing::Point(206, 157);
			this->phone_txt_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->phone_txt_box->Name = L"phone_txt_box";
			this->phone_txt_box->Size = System::Drawing::Size(279, 26);
			this->phone_txt_box->TabIndex = 34;
			this->phone_txt_box->TextChanged += gcnew System::EventHandler(this, &AddEmployeeForm::phone_txt_box_TextChanged);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker->Location = System::Drawing::Point(206, 213);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(279, 26);
			this->dateTimePicker->TabIndex = 35;
			// 
			// department_combo_box
			// 
			this->department_combo_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->department_combo_box->FormattingEnabled = true;
			this->department_combo_box->Location = System::Drawing::Point(206, 267);
			this->department_combo_box->Name = L"department_combo_box";
			this->department_combo_box->Size = System::Drawing::Size(279, 28);
			this->department_combo_box->TabIndex = 36;
			// 
			// department_label
			// 
			this->department_label->AutoSize = true;
			this->department_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->department_label->Location = System::Drawing::Point(15, 275);
			this->department_label->Name = L"department_label";
			this->department_label->Size = System::Drawing::Size(98, 20);
			this->department_label->TabIndex = 37;
			this->department_label->Text = L"Department:";
			// 
			// AddEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(733, 494);
			this->Controls->Add(this->department_label);
			this->Controls->Add(this->department_combo_box);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->phone_txt_box);
			this->Controls->Add(this->add_employee_label);
			this->Controls->Add(this->hire_date_label);
			this->Controls->Add(this->phone_label);
			this->Controls->Add(this->email_txt_box);
			this->Controls->Add(this->name_txt_box);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->submit_btn);
			this->Controls->Add(this->email_label);
			this->Controls->Add(this->name_label);
			this->Name = L"AddEmployeeForm";
			this->Text = L"AddEmployeeForm";
			this->Load += gcnew System::EventHandler(this, &AddEmployeeForm::AddEmployeeForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginText_Click(System::Object^ sender, System::EventArgs^ e){}
private: System::Void phone_txt_box_TextChanged(System::Object^ sender, System::EventArgs^ e){}
private: System::Void description_txt_box_TextChanged(System::Object^ sender, System::EventArgs^ e){}
private: System::Void description_label_Click(System::Object^ sender, System::EventArgs^ e){}
private: System::Void phone_label_Click(System::Object^ sender, System::EventArgs^ e){}
private: System::Void email_txt_box_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e){}
private: System::Void name_txt_box_TextChanged(System::Object^ sender, System::EventArgs^ e){}
private: System::Void cancel_btn_Click(System::Object^ sender, System::EventArgs^ e){}
private: System::Void submit_btn_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void email_label_Click(System::Object^ sender, System::EventArgs^ e){}
private: System::Void name_label_Click(System::Object^ sender, System::EventArgs^ e){}
private: System::Void AddEmployeeForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
