#pragma once

namespace CompanyManager {
	ref class RegisterCompanyForm;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


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
	private: System::Windows::Forms::Button^ submit_btn;

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
			this->submit_btn = (gcnew System::Windows::Forms::Button());
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
			// submit_btn
			// 
			this->submit_btn->Location = System::Drawing::Point(199, 213);
			this->submit_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->submit_btn->Name = L"submit_btn";
			this->submit_btn->Size = System::Drawing::Size(112, 49);
			this->submit_btn->TabIndex = 4;
			this->submit_btn->Text = L"Submit";
			this->submit_btn->UseVisualStyleBackColor = true;
			this->submit_btn->Click += gcnew System::EventHandler(this, &LoginCompanyForm::submit_btn_Click);
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
			this->register_link->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginCompanyForm::register_link_LinkClicked);
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
			this->Controls->Add(this->submit_btn);
			this->Controls->Add(this->LoginText);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->name_label);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"LoginCompanyForm";
			this->Text = L"LoginCompanyForm";
			this->Load += gcnew System::EventHandler(this, &LoginCompanyForm::LoginCompanyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void name_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LoginCompanyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void register_link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: System::Void submit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = name_txt_box->Text->Trim();
		String^ password = password_txt_box->Text->Trim();
		if (name->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please fill in all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		try {
			String^ connectionString = "Data Source=localhost;Initial Catalog=CompanyManagerDB;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();

			String^ query = "SELECT COUNT(*) FROM Companies WHERE name = @name AND password = @password";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@name", name);
			command->Parameters->AddWithValue("@password", password);

			int count = (int)command->ExecuteScalar();
			connection->Close();

			if (count > 0) {
				MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				// TODO: Proceed to the next form or functionality
				this->Close();
			}
			else {
				MessageBox::Show("Invalid company name or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while logging in: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
