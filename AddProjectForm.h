#pragma once

namespace CompanyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddProjectForm
	/// </summary>
	public ref class AddProjectForm : public System::Windows::Forms::Form
	{
	public:
		AddProjectForm(void)
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
		~AddProjectForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::DateTimePicker^ end_date_picker;

	private: System::Windows::Forms::Label^ end_date_label;
	private: System::Windows::Forms::Label^ add_project_label;



	private: System::Windows::Forms::Label^ start_date_label;

	private: System::Windows::Forms::MaskedTextBox^ description_txt_box;

	private: System::Windows::Forms::TextBox^ name_txt_box;
	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ description_label;

	private: System::Windows::Forms::Label^ name_label;
	private: System::Windows::Forms::DateTimePicker^ start_date_picker;

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
			this->end_date_picker = (gcnew System::Windows::Forms::DateTimePicker());
			this->end_date_label = (gcnew System::Windows::Forms::Label());
			this->add_project_label = (gcnew System::Windows::Forms::Label());
			this->start_date_label = (gcnew System::Windows::Forms::Label());
			this->description_txt_box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->name_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->description_label = (gcnew System::Windows::Forms::Label());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->start_date_picker = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// end_date_picker
			// 
			this->end_date_picker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->end_date_picker->Location = System::Drawing::Point(209, 207);
			this->end_date_picker->Name = L"end_date_picker";
			this->end_date_picker->Size = System::Drawing::Size(279, 26);
			this->end_date_picker->TabIndex = 60;
			this->end_date_picker->ValueChanged += gcnew System::EventHandler(this, &AddProjectForm::end_date_picker_ValueChanged);
			// 
			// end_date_label
			// 
			this->end_date_label->AutoSize = true;
			this->end_date_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->end_date_label->Location = System::Drawing::Point(17, 208);
			this->end_date_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->end_date_label->Name = L"end_date_label";
			this->end_date_label->Size = System::Drawing::Size(81, 20);
			this->end_date_label->TabIndex = 59;
			this->end_date_label->Text = L"End Date:";
			this->end_date_label->Click += gcnew System::EventHandler(this, &AddProjectForm::end_date_label_Click);
			// 
			// add_project_label
			// 
			this->add_project_label->AutoSize = true;
			this->add_project_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_project_label->Location = System::Drawing::Point(227, 9);
			this->add_project_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_project_label->Name = L"add_project_label";
			this->add_project_label->Size = System::Drawing::Size(183, 37);
			this->add_project_label->TabIndex = 57;
			this->add_project_label->Text = L"Add Project";
			this->add_project_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->add_project_label->Click += gcnew System::EventHandler(this, &AddProjectForm::edit_employee_label_Click);
			// 
			// start_date_label
			// 
			this->start_date_label->AutoSize = true;
			this->start_date_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start_date_label->Location = System::Drawing::Point(17, 160);
			this->start_date_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->start_date_label->Name = L"start_date_label";
			this->start_date_label->Size = System::Drawing::Size(87, 20);
			this->start_date_label->TabIndex = 56;
			this->start_date_label->Text = L"Start Date:";
			this->start_date_label->Click += gcnew System::EventHandler(this, &AddProjectForm::start_date_label_Click);
			// 
			// description_txt_box
			// 
			this->description_txt_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->description_txt_box->Location = System::Drawing::Point(209, 104);
			this->description_txt_box->Name = L"description_txt_box";
			this->description_txt_box->Size = System::Drawing::Size(279, 26);
			this->description_txt_box->TabIndex = 55;
			this->description_txt_box->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &AddProjectForm::description_txt_box_MaskInputRejected);
			// 
			// name_txt_box
			// 
			this->name_txt_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_txt_box->Location = System::Drawing::Point(209, 56);
			this->name_txt_box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->name_txt_box->Name = L"name_txt_box";
			this->name_txt_box->Size = System::Drawing::Size(279, 26);
			this->name_txt_box->TabIndex = 54;
			this->name_txt_box->TextChanged += gcnew System::EventHandler(this, &AddProjectForm::name_txt_box_TextChanged);
			// 
			// cancel_btn
			// 
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->Location = System::Drawing::Point(376, 405);
			this->cancel_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(112, 49);
			this->cancel_btn->TabIndex = 53;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = true;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &AddProjectForm::cancel_btn_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(209, 405);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 49);
			this->button1->TabIndex = 52;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddProjectForm::button1_Click);
			// 
			// description_label
			// 
			this->description_label->AutoSize = true;
			this->description_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_label->Location = System::Drawing::Point(17, 107);
			this->description_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->description_label->Name = L"description_label";
			this->description_label->Size = System::Drawing::Size(89, 20);
			this->description_label->TabIndex = 51;
			this->description_label->Text = L"Description";
			this->description_label->Click += gcnew System::EventHandler(this, &AddProjectForm::description_label_Click);
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label->Location = System::Drawing::Point(17, 59);
			this->name_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(104, 20);
			this->name_label->TabIndex = 50;
			this->name_label->Text = L"Project Name";
			this->name_label->Click += gcnew System::EventHandler(this, &AddProjectForm::name_label_Click);
			// 
			// start_date_picker
			// 
			this->start_date_picker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start_date_picker->Location = System::Drawing::Point(209, 155);
			this->start_date_picker->Name = L"start_date_picker";
			this->start_date_picker->Size = System::Drawing::Size(279, 26);
			this->start_date_picker->TabIndex = 63;
			this->start_date_picker->ValueChanged += gcnew System::EventHandler(this, &AddProjectForm::start_date_picker_ValueChanged);
			// 
			// AddProjectForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 555);
			this->Controls->Add(this->start_date_picker);
			this->Controls->Add(this->end_date_picker);
			this->Controls->Add(this->end_date_label);
			this->Controls->Add(this->add_project_label);
			this->Controls->Add(this->start_date_label);
			this->Controls->Add(this->description_txt_box);
			this->Controls->Add(this->name_txt_box);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->description_label);
			this->Controls->Add(this->name_label);
			this->Name = L"AddProjectForm";
			this->Text = L"AddProjectForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void edit_employee_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void end_date_picker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void end_date_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void start_date_picker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void start_date_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void description_txt_box_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
private: System::Void name_txt_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cancel_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void description_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void name_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
