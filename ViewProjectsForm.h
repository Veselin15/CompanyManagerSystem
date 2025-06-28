#pragma once

namespace CompanyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewProjectsForm
	/// </summary>
	public ref class ViewProjectsForm : public System::Windows::Forms::Form
	{
	public:
		ViewProjectsForm(void)
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
		~ViewProjectsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ edit_project_label;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->edit_project_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(30, 109);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(651, 311);
			this->dataGridView1->TabIndex = 46;
			// 
			// edit_project_label
			// 
			this->edit_project_label->AutoSize = true;
			this->edit_project_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_project_label->Location = System::Drawing::Point(243, 25);
			this->edit_project_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_project_label->Name = L"edit_project_label";
			this->edit_project_label->Size = System::Drawing::Size(210, 37);
			this->edit_project_label->TabIndex = 72;
			this->edit_project_label->Text = L"View Projects";
			this->edit_project_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ViewProjectsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 531);
			this->Controls->Add(this->edit_project_label);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ViewProjectsForm";
			this->Text = L"ViewProjectsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
