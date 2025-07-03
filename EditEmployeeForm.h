#pragma once

namespace CompanyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditEmployeeForm
	/// </summary>
	public ref class EditEmployeeForm : public System::Windows::Forms::Form
	{
	public:
		EditEmployeeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private:
		int companyId;
	public:
		EditEmployeeForm(int companyId)
		{
			InitializeComponent();
			this->companyId = companyId;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ edit_employee_label;





	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ submit_btn;

	private: System::Windows::Forms::DataGridView^ dataGridView;








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
			this->edit_employee_label = (gcnew System::Windows::Forms::Label());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->submit_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// edit_employee_label
			// 
			this->edit_employee_label->AutoSize = true;
			this->edit_employee_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->edit_employee_label->Location = System::Drawing::Point(241, 9);
			this->edit_employee_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_employee_label->Name = L"edit_employee_label";
			this->edit_employee_label->Size = System::Drawing::Size(221, 37);
			this->edit_employee_label->TabIndex = 44;
			this->edit_employee_label->Text = L"Edit Employee";
			this->edit_employee_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// cancel_btn
			// 
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->Location = System::Drawing::Point(390, 405);
			this->cancel_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(112, 49);
			this->cancel_btn->TabIndex = 39;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = true;
			// 
			// submit_btn
			// 
			this->submit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit_btn->Location = System::Drawing::Point(223, 405);
			this->submit_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->submit_btn->Name = L"submit_btn";
			this->submit_btn->Size = System::Drawing::Size(112, 49);
			this->submit_btn->TabIndex = 38;
			this->submit_btn->Text = L"Submit";
			this->submit_btn->UseVisualStyleBackColor = true;
			this->submit_btn->Click += gcnew System::EventHandler(this, &EditEmployeeForm::submit_btn_Click);
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(12, 68);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(651, 311);
			this->dataGridView->TabIndex = 45;
			// 
			// EditEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 497);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->edit_employee_label);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->submit_btn);
			this->Name = L"EditEmployeeForm";
			this->Text = L"EditEmployeeForm";
			this->Load += gcnew System::EventHandler(this, &EditEmployeeForm::EditEmployeeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void department_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EditEmployeeForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void submit_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
