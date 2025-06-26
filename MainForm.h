#pragma once

namespace CompanyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::TextBox^ txt_mobilenum;


	private: System::Windows::Forms::TextBox^ txt_email;
	private: System::Windows::Forms::Button^ btnreset;
	private: System::Windows::Forms::Button^ btnsubmit;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_mobilenum = (gcnew System::Windows::Forms::TextBox());
			this->txt_email = (gcnew System::Windows::Forms::TextBox());
			this->btnreset = (gcnew System::Windows::Forms::Button());
			this->btnsubmit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Full Name:";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Mobile Num:";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(131, 33);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(154, 20);
			this->txt_name->TabIndex = 5;
			// 
			// txt_mobilenum
			// 
			this->txt_mobilenum->Location = System::Drawing::Point(131, 98);
			this->txt_mobilenum->Name = L"txt_mobilenum";
			this->txt_mobilenum->Size = System::Drawing::Size(154, 20);
			this->txt_mobilenum->TabIndex = 6;
			// 
			// txt_email
			// 
			this->txt_email->Location = System::Drawing::Point(131, 64);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(154, 20);
			this->txt_email->TabIndex = 7;
			// 
			// btnreset
			// 
			this->btnreset->Location = System::Drawing::Point(211, 130);
			this->btnreset->Name = L"btnreset";
			this->btnreset->Size = System::Drawing::Size(74, 32);
			this->btnreset->TabIndex = 8;
			this->btnreset->Text = L"reset";
			this->btnreset->UseVisualStyleBackColor = true;
			this->btnreset->Click += gcnew System::EventHandler(this, &MainForm::btnreset_Click); // <-- Add this line
			// 
			// btnsubmit
			this->btnsubmit->Location = System::Drawing::Point(131, 130);
			this->btnsubmit->Name = L"btnsubmit";
			this->btnsubmit->Size = System::Drawing::Size(74, 32);
			this->btnsubmit->TabIndex = 9;
			this->btnsubmit->Text = L"submit";
			this->btnsubmit->UseVisualStyleBackColor = true;
			this->btnsubmit->Click += gcnew System::EventHandler(this, &MainForm::btnsubmit_Click); 
			// ...
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(421, 250);
			this->Controls->Add(this->btnsubmit);
			this->Controls->Add(this->btnreset);
			this->Controls->Add(this->txt_email);
			this->Controls->Add(this->txt_mobilenum);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void btnreset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txt_name->Text = "";
		this->txt_email->Text = "";
		this->txt_mobilenum->Text = "";

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btnsubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->txt_name->Text->Trim() == "") {
			MessageBox::Show("Please Enter Name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->txt_email->Text->Trim() == "") {
			MessageBox::Show("Please Enter Email", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->txt_mobilenum->Text->Trim() == "") {
			MessageBox::Show("Please Enter Mobile Num", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("Datat submitted succesfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	};
}
