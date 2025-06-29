#pragma once

namespace CompanyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditProjectForm
	/// </summary>
	public ref class EditProjectForm : public System::Windows::Forms::Form
	{
	public:
		EditProjectForm(void)
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
		~EditProjectForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^ edit_project_label;



	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



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
			this->edit_project_label = (gcnew System::Windows::Forms::Label());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// edit_project_label
			// 
			this->edit_project_label->AutoSize = true;
			this->edit_project_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_project_label->Location = System::Drawing::Point(244, 9);
			this->edit_project_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_project_label->Name = L"edit_project_label";
			this->edit_project_label->Size = System::Drawing::Size(180, 37);
			this->edit_project_label->TabIndex = 71;
			this->edit_project_label->Text = L"Edit Project";
			this->edit_project_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// cancel_btn
			// 
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->Location = System::Drawing::Point(393, 405);
			this->cancel_btn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(112, 49);
			this->cancel_btn->TabIndex = 67;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(226, 405);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 49);
			this->button1->TabIndex = 66;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(651, 311);
			this->dataGridView1->TabIndex = 72;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EditProjectForm::dataGridView1_CellContentClick);
			// 
			// EditProjectForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 536);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->edit_project_label);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->button1);
			this->Name = L"EditProjectForm";
			this->Text = L"EditProjectForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
