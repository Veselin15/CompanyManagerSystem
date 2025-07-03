#include "ViewEmployeesForm.h"
using namespace System::Data;
using namespace System::Data::SqlClient;

System::Void CompanyManager::ViewEmployeesForm::ViewEmployeesForm_Load(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=CompanyManagerDB;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		String^ query = "SELECT e.id, e.full_name, e.email, e.phone, e.hire_date, d.name AS department" \
			" FROM Employees e" \
			" JOIN Departments d ON e.department_id = d.id" \
			" WHERE e.company_id = @companyId";

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, connection);
		adapter->SelectCommand->Parameters->AddWithValue("@companyId", companyId);

		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);

		dataGridView->DataSource = table;
		dataGridView->ReadOnly = true;

		connection->Close();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to load employees: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}