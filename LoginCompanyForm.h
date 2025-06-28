#pragma once

namespace CompanyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginCompanyForm
	/// </summary>
	public ref class LoginCompanyForm : public System::Windows::Forms::Form
	{
	public:
		LoginCompanyForm(void)
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
		~LoginCompanyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name_label;
	private: System::Windows::Forms::Label^ password_label;
	protected:



	private: System::Windows::Forms::Label^ LoginText;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::TextBox^ name_txt_box;
	private: System::Windows::Forms::LinkLabel^ register_link;




	private: System::Windows::Forms::MaskedTextBox^ password_txt_box;


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
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->LoginText = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->name_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->register_link = (gcnew System::Windows::Forms::LinkLabel());
			this->password_txt_box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label->Location = System::Drawing::Point(47, 78);
			this->name_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(124, 20);
			this->name_label->TabIndex = 0;
			this->name_label->Text = L"Company name:";
			this->name_label->Click += gcnew System::EventHandler(this, &LoginCompanyForm::name_label_Click);
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->Location = System::Drawing::Point(47, 126);
			this->password_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(82, 20);
			this->password_label->TabIndex = 1;
			this->password_label->Text = L"Password:";
			// 
			// LoginText
			// 
			this->LoginText->AutoSize = true;
			this->LoginText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginText->Location = System::Drawing::Point(367, 9);
			this->LoginText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LoginText->Name = L"LoginText";
			this->LoginText->Size = System::Drawing::Size(278, 37);
			this->LoginText->TabIndex = 3;
			this->LoginText->Text = L"Login to Company";
			this->LoginText->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->LoginText->Click += gcnew System::EventHandler(this, &LoginCompanyForm::label4_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(199, 213);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 49);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// cancel_btn
			// 
			this->cancel_btn->Location = System::Drawing::Point(365, 213);
			this->cancel_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(112, 49);
			this->cancel_btn->TabIndex = 5;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = true;
			// 
			// name_txt_box
			// 
			this->name_txt_box->Location = System::Drawing::Point(198, 75);
			this->name_txt_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->name_txt_box->Name = L"name_txt_box";
			this->name_txt_box->Size = System::Drawing::Size(279, 26);
			this->name_txt_box->TabIndex = 6;
			// 
			// register_link
			// 
			this->register_link->AutoSize = true;
			this->register_link->Location = System::Drawing::Point(47, 172);
			this->register_link->Name = L"register_link";
			this->register_link->Size = System::Drawing::Size(163, 20);
			this->register_link->TabIndex = 8;
			this->register_link->TabStop = true;
			this->register_link->Text = L"register company now";
			// 
			// password_txt_box
			// 
			this->password_txt_box->Location = System::Drawing::Point(198, 126);
			this->password_txt_box->Name = L"password_txt_box";
			this->password_txt_box->Size = System::Drawing::Size(279, 26);
			this->password_txt_box->TabIndex = 9;
			// 
			// LoginCompanyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(964, 594);
			this->Controls->Add(this->password_txt_box);
			this->Controls->Add(this->register_link);
			this->Controls->Add(this->name_txt_box);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LoginText);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->name_label);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"LoginCompanyForm";
			this->Text = L"LoginCompanyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void name_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
