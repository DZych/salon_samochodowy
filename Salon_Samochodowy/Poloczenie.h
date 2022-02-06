#pragma once
namespace SalonSamochodowy {

	using namespace System;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Windows::Forms;
	using namespace System::Data;

	public ref class Poloczenie
	{
	public:
		static String^ konfiguracja = L"datasource=sql11.freesqldatabase.com; port=3306; username=sql11469083; password=drcZgnw8y5; database=sql11469083";

		static void odswiez_datagird(DataGridView^ dg, String^ zapytanie) {
			MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
			MySqlCommand^ komenda = gcnew MySqlCommand(zapytanie, polaczenie);


			try {
				// wype³nienie datagrida danymi z tabeli
				polaczenie->Open();
				MySqlDataAdapter^ adapter_danych = gcnew MySqlDataAdapter();
				adapter_danych->SelectCommand = komenda;
				DataTable^ tabela = gcnew DataTable();
				adapter_danych->Fill(tabela);
				BindingSource^ zrodloSalon = gcnew BindingSource();
				zrodloSalon->DataSource = tabela;
				dg->DataSource = zrodloSalon;
				polaczenie->Close();
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
			}

			dg->Columns[0]->Visible = false;
			dg->ClearSelection();
		}
	};
}

