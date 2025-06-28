#pragma once

namespace CompanyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterComapnyForm
	/// </summary>
	public ref class RegisterComapnyForm : public System::Windows::Forms::Form
	{
	public:
		RegisterComapnyForm(void)
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
		~RegisterComapnyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^ password_txt_box;
	private: System::Windows::Forms::LinkLabel^ login_link;
	protected:

	private: System::Windows::Forms::TextBox^ name_txt_box;
	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ LoginText;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::Label^ name_label;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Label^ address_label;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Label^ description_label;


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
			this->password_txt_box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->login_link = (gcnew System::Windows::Forms::LinkLabel());
			this->name_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->LoginText = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->address_label = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->description_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// password_txt_box
			// 
			this->password_txt_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_txt_box->Location = System::Drawing::Point(164, 128);
			this->password_txt_box->Name = L"password_txt_box";
			this->password_txt_box->Size = System::Drawing::Size(279, 26);
			this->password_txt_box->TabIndex = 17;
			// 
			// login_link
			// 
			this->login_link->AutoSize = true;
			this->login_link->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_link->Location = System::Drawing::Point(8, 287);
			this->login_link->Name = L"login_link";
			this->login_link->Size = System::Drawing::Size(98, 20);
			this->login_link->TabIndex = 16;
			this->login_link->TabStop = true;
			this->login_link->Text = L"back to login";
			// 
			// name_txt_box
			// 
			this->name_txt_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_txt_box->Location = System::Drawing::Point(164, 80);
			this->name_txt_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->name_txt_box->Name = L"name_txt_box";
			this->name_txt_box->Size = System::Drawing::Size(279, 26);
			this->name_txt_box->TabIndex = 15;
			// 
			// cancel_btn
			// 
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->Location = System::Drawing::Point(331, 316);
			this->cancel_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(112, 49);
			this->cancel_btn->TabIndex = 14;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(164, 316);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 49);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// LoginText
			// 
			this->LoginText->AutoSize = true;
			this->LoginText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginText->Location = System::Drawing::Point(328, 9);
			this->LoginText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LoginText->Name = L"LoginText";
			this->LoginText->Size = System::Drawing::Size(280, 37);
			this->LoginText->TabIndex = 12;
			this->LoginText->Text = L"Register Company";
			this->LoginText->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->Location = System::Drawing::Point(8, 126);
			this->password_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(82, 20);
			this->password_label->TabIndex = 11;
			this->password_label->Text = L"Password:";
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label->Location = System::Drawing::Point(8, 78);
			this->name_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(124, 20);
			this->name_label->TabIndex = 10;
			this->name_label->Text = L"Company name:";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox1->Location = System::Drawing::Point(164, 181);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(279, 26);
			this->maskedTextBox1->TabIndex = 19;
			// 
			// address_label
			// 
			this->address_label->AutoSize = true;
			this->address_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address_label->Location = System::Drawing::Point(8, 179);
			this->address_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->address_label->Name = L"address_label";
			this->address_label->Size = System::Drawing::Size(68, 20);
			this->address_label->TabIndex = 18;
			this->address_label->Text = L"Address";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox2->Location = System::Drawing::Point(164, 235);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(279, 26);
			this->maskedTextBox2->TabIndex = 21;
			// 
			// description_label
			// 
			this->description_label->AutoSize = true;
			this->description_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_label->Location = System::Drawing::Point(8, 233);
			this->description_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->description_label->Name = L"description_label";
			this->description_label->Size = System::Drawing::Size(89, 20);
			this->description_label->TabIndex = 20;
			this->description_label->Text = L"Description";
			// 
			// RegisterComapnyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 458);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->description_label);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->address_label);
			this->Controls->Add(this->password_txt_box);
			this->Controls->Add(this->login_link);
			this->Controls->Add(this->name_txt_box);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LoginText);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->name_label);
			this->Name = L"RegisterComapnyForm";
			this->Text = L"RegisterComapnyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
