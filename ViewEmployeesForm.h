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
	/// Summary for ViewEmployeesForm
	/// </summary>
	public ref class ViewEmployeesForm : public System::Windows::Forms::Form
	{
	public:
		ViewEmployeesForm(void)
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
		~ViewEmployeesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		int companyId;
	public:
		ViewEmployeesForm(int companyId)
		{
			InitializeComponent();
			this->companyId = companyId;
		}
	private: System::Windows::Forms::Label^ edit_employee_label;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	protected:


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
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// edit_employee_label
			// 
			this->edit_employee_label->AutoSize = true;
			this->edit_employee_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->edit_employee_label->Location = System::Drawing::Point(196, 9);
			this->edit_employee_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_employee_label->Name = L"edit_employee_label";
			this->edit_employee_label->Size = System::Drawing::Size(251, 37);
			this->edit_employee_label->TabIndex = 45;
			this->edit_employee_label->Text = L"View Employees";
			this->edit_employee_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToOrderColumns = true;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(12, 99);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->Size = System::Drawing::Size(629, 357);
			this->dataGridView->TabIndex = 46;
			// 
			// ViewEmployeesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 466);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->edit_employee_label);
			this->Name = L"ViewEmployeesForm";
			this->Text = L"ViewEmployeesForm";
			this->Load += gcnew System::EventHandler(this, &ViewEmployeesForm::ViewEmployeesForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ViewEmployeesForm_Load(System::Object^ sender, System::EventArgs^ e);

	};
}
