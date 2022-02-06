#pragma once
#include "Narzedzia.h"
#include "Poloczenie.h"

namespace SalonSamochodowy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Okno_uzytkownicy
	/// </summary>
	public ref class Okno_uzytkownicy : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::TextBox^ txt_imie;
	private: System::Windows::Forms::TextBox^ txt_nazwisko;
	private: System::Windows::Forms::TextBox^ txt_login;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ chb_pracownik;

	public:
		int id_rekordu;
		int id_uzytkownika;
		int rodzaj_pracownika;

		Okno_uzytkownicy(int uzytkownik)
		{
			InitializeComponent();
			id_uzytkownika = uzytkownik;

			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
	private: System::Windows::Forms::TextBox^ txt_szukaj;
	public:


	private: System::Windows::Forms::Button^ btn_szukaj;


	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Okno_uzytkownicy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dg_uzytkownicy;
	protected:

	private: System::Windows::Forms::Button^ btn_dodaj;
	private: System::Windows::Forms::Button^ btn_usun;
	protected:





	private: System::Windows::Forms::Button^ btn_edytuj;


	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dg_uzytkownicy = (gcnew System::Windows::Forms::DataGridView());
			this->btn_dodaj = (gcnew System::Windows::Forms::Button());
			this->btn_usun = (gcnew System::Windows::Forms::Button());
			this->btn_edytuj = (gcnew System::Windows::Forms::Button());
			this->txt_szukaj = (gcnew System::Windows::Forms::TextBox());
			this->btn_szukaj = (gcnew System::Windows::Forms::Button());
			this->txt_imie = (gcnew System::Windows::Forms::TextBox());
			this->txt_nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->txt_login = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->chb_pracownik = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_uzytkownicy))->BeginInit();
			this->SuspendLayout();
			// 
			// dg_uzytkownicy
			// 
			this->dg_uzytkownicy->AllowUserToAddRows = false;
			this->dg_uzytkownicy->AllowUserToDeleteRows = false;
			this->dg_uzytkownicy->AllowUserToResizeRows = false;
			this->dg_uzytkownicy->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dg_uzytkownicy->BackgroundColor = System::Drawing::Color::White;
			this->dg_uzytkownicy->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_uzytkownicy->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_uzytkownicy->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_uzytkownicy->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dg_uzytkownicy->ColumnHeadersHeight = 30;
			this->dg_uzytkownicy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Poppins", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(249)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dg_uzytkownicy->DefaultCellStyle = dataGridViewCellStyle2;
			this->dg_uzytkownicy->EnableHeadersVisualStyles = false;
			this->dg_uzytkownicy->GridColor = System::Drawing::Color::White;
			this->dg_uzytkownicy->Location = System::Drawing::Point(359, 12);
			this->dg_uzytkownicy->Name = L"dg_uzytkownicy";
			this->dg_uzytkownicy->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_uzytkownicy->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dg_uzytkownicy->RowHeadersVisible = false;
			this->dg_uzytkownicy->RowHeadersWidth = 40;
			this->dg_uzytkownicy->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dg_uzytkownicy->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dg_uzytkownicy->Size = System::Drawing::Size(463, 537);
			this->dg_uzytkownicy->TabIndex = 0;
			this->dg_uzytkownicy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_uzytkownicy::dg_uzytkownicy_CellClick);
			// 
			// btn_dodaj
			// 
			this->btn_dodaj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_dodaj->FlatAppearance->BorderSize = 0;
			this->btn_dodaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_dodaj->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_dodaj->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_dodaj->Location = System::Drawing::Point(16, 509);
			this->btn_dodaj->Name = L"btn_dodaj";
			this->btn_dodaj->Size = System::Drawing::Size(105, 40);
			this->btn_dodaj->TabIndex = 6;
			this->btn_dodaj->Text = L"Dodaj";
			this->btn_dodaj->UseVisualStyleBackColor = false;
			this->btn_dodaj->Click += gcnew System::EventHandler(this, &Okno_uzytkownicy::btn_dodaj_Click);
			// 
			// btn_usun
			// 
			this->btn_usun->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->btn_usun->FlatAppearance->BorderSize = 0;
			this->btn_usun->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_usun->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_usun->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_usun->Location = System::Drawing::Point(238, 509);
			this->btn_usun->Name = L"btn_usun";
			this->btn_usun->Size = System::Drawing::Size(105, 40);
			this->btn_usun->TabIndex = 8;
			this->btn_usun->Text = L"Usuñ";
			this->btn_usun->UseVisualStyleBackColor = false;
			this->btn_usun->Visible = false;
			this->btn_usun->Click += gcnew System::EventHandler(this, &Okno_uzytkownicy::btn_usun_Click);
			// 
			// btn_edytuj
			// 
			this->btn_edytuj->BackColor = System::Drawing::Color::White;
			this->btn_edytuj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_edytuj->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->btn_edytuj->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_edytuj->Location = System::Drawing::Point(127, 509);
			this->btn_edytuj->Name = L"btn_edytuj";
			this->btn_edytuj->Size = System::Drawing::Size(105, 40);
			this->btn_edytuj->TabIndex = 9;
			this->btn_edytuj->Text = L"Edytuj";
			this->btn_edytuj->UseVisualStyleBackColor = false;
			this->btn_edytuj->Visible = false;
			this->btn_edytuj->Click += gcnew System::EventHandler(this, &Okno_uzytkownicy::btn_edytuj_Click);
			// 
			// txt_szukaj
			// 
			this->txt_szukaj->BackColor = System::Drawing::SystemColors::Window;
			this->txt_szukaj->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_szukaj->ForeColor = System::Drawing::Color::Gray;
			this->txt_szukaj->Location = System::Drawing::Point(12, 12);
			this->txt_szukaj->Name = L"txt_szukaj";
			this->txt_szukaj->Size = System::Drawing::Size(243, 31);
			this->txt_szukaj->TabIndex = 10;
			this->txt_szukaj->Text = L"Wpisz dane u¿ytkownika";
			this->txt_szukaj->Enter += gcnew System::EventHandler(this, &Okno_uzytkownicy::txt_szukaj_Enter);
			// 
			// btn_szukaj
			// 
			this->btn_szukaj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_szukaj->FlatAppearance->BorderSize = 0;
			this->btn_szukaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_szukaj->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_szukaj->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_szukaj->Location = System::Drawing::Point(261, 13);
			this->btn_szukaj->Name = L"btn_szukaj";
			this->btn_szukaj->Size = System::Drawing::Size(90, 30);
			this->btn_szukaj->TabIndex = 11;
			this->btn_szukaj->Text = L"Szukaj";
			this->btn_szukaj->UseVisualStyleBackColor = false;
			this->btn_szukaj->Click += gcnew System::EventHandler(this, &Okno_uzytkownicy::btn_szukaj_Click);
			// 
			// txt_imie
			// 
			this->txt_imie->BackColor = System::Drawing::SystemColors::Window;
			this->txt_imie->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_imie->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_imie->Location = System::Drawing::Point(12, 86);
			this->txt_imie->Name = L"txt_imie";
			this->txt_imie->Size = System::Drawing::Size(243, 31);
			this->txt_imie->TabIndex = 12;
			// 
			// txt_nazwisko
			// 
			this->txt_nazwisko->BackColor = System::Drawing::SystemColors::Window;
			this->txt_nazwisko->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_nazwisko->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_nazwisko->Location = System::Drawing::Point(13, 150);
			this->txt_nazwisko->Name = L"txt_nazwisko";
			this->txt_nazwisko->Size = System::Drawing::Size(243, 31);
			this->txt_nazwisko->TabIndex = 13;
			// 
			// txt_login
			// 
			this->txt_login->BackColor = System::Drawing::SystemColors::Window;
			this->txt_login->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_login->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_login->Location = System::Drawing::Point(12, 215);
			this->txt_login->Name = L"txt_login";
			this->txt_login->Size = System::Drawing::Size(243, 31);
			this->txt_login->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(8, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 28);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Imie";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(8, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 28);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Nazwisko";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(8, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 28);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Login";
			// 
			// chb_pracownik
			// 
			this->chb_pracownik->AutoSize = true;
			this->chb_pracownik->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->chb_pracownik->FlatAppearance->BorderSize = 0;
			this->chb_pracownik->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->chb_pracownik->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->chb_pracownik->Location = System::Drawing::Point(144, 252);
			this->chb_pracownik->Name = L"chb_pracownik";
			this->chb_pracownik->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->chb_pracownik->Size = System::Drawing::Size(112, 32);
			this->chb_pracownik->TabIndex = 19;
			this->chb_pracownik->Text = L"Pracownik";
			this->chb_pracownik->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chb_pracownik->UseVisualStyleBackColor = true;
			// 
			// Okno_uzytkownicy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(834, 561);
			this->Controls->Add(this->chb_pracownik);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_login);
			this->Controls->Add(this->txt_nazwisko);
			this->Controls->Add(this->txt_imie);
			this->Controls->Add(this->btn_szukaj);
			this->Controls->Add(this->txt_szukaj);
			this->Controls->Add(this->btn_edytuj);
			this->Controls->Add(this->btn_usun);
			this->Controls->Add(this->btn_dodaj);
			this->Controls->Add(this->dg_uzytkownicy);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Okno_uzytkownicy";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Okno_uzytkownicy";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_uzytkownicy))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void uzytkownik_rodzaj() {
		if (chb_pracownik->Checked) {
			rodzaj_pracownika = 1;
		}
		else {
			rodzaj_pracownika = 0;
		}
	}

	private: void ukryj_przyciski() {
		chb_pracownik->Checked = false;
		btn_edytuj->Visible = false;
		btn_usun->Visible = false;

		txt_szukaj->ForeColor = Color::Gray;
		txt_szukaj->Text = "Wpisz dane u¿ytkownika";
	}

	private: void odœwie¿_dataGrid() {
		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, login, pracownik FROM uzytkownicy ;", polaczenie);

		try {
			// wype³nienie datagrida danymi z tabeli uzytkownicy
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_uzytkownicy->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}

		dg_uzytkownicy->Columns[0]->Visible = false;
		dg_uzytkownicy->ClearSelection();
	}

	private: System::Void txt_szukaj_Enter(System::Object^ sender, System::EventArgs^ e) {
		txt_szukaj->ForeColor = Color::FromArgb(64, 64, 64);
		txt_szukaj->Text = "";
	}

	private: System::Void btn_szukaj_Click(System::Object^ sender, System::EventArgs^ e) {


		if (txt_szukaj->Text == "Wpisz dane u¿ytkownika")
			txt_szukaj->Text = "";

		// Mo¿na tutaj wstawiæ funkcje odœwie¿ dataGrid() z opcjonalnym argumentem, który by³bym zapytaniem. 

		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, login, pracownik FROM uzytkownicy WHERE concat (imie, nazwisko, login) LIKE '%" + txt_szukaj->Text + "%';", polaczenie);

		try {
			// wype³nienie datagrida danymi z tabeli uzytkownicy
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_uzytkownicy->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		polaczenie->Close();
		dg_uzytkownicy->Columns[0]->Visible = false;
	}

	private: System::Void dg_uzytkownicy_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			id_rekordu = Convert::ToUInt32(dg_uzytkownicy->Rows[e->RowIndex]->Cells[0]->Value);
			txt_imie->Text = dg_uzytkownicy->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
			txt_nazwisko->Text = dg_uzytkownicy->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
			txt_login->Text = dg_uzytkownicy->Rows[e->RowIndex]->Cells["login"]->Value->ToString();
			chb_pracownik->Checked = Convert::ToBoolean(dg_uzytkownicy->Rows[e->RowIndex]->Cells["pracownik"]->Value);
		}

		btn_edytuj->Visible = true;
		btn_usun->Visible = true;
	}

	private: System::Void btn_usun_Click(System::Object^ sender, System::EventArgs^ e) {
		if (id_rekordu == 1) {
			MessageBox::Show("Nie mo¿na usun¹æ u¿ytkownika admin");
			return;
		}
		MySqlConnection^ laczBaze = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transkacja;
		laczBaze->Open();
		transkacja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;
		polecenie->Transaction = transkacja;

		try {
			if (MessageBox::Show("Czy na pewno usun¹æ u¿ytkownika " + txt_login->Text + "?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

				polecenie->CommandText = "DELETE FROM uzytkownicy WHERE uzytkownik_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();


				transkacja->Commit();
				MessageBox::Show("U¿ytkownik " + txt_login->Text + " zosta³ usuniêty z bazy danych");
			}

		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transkacja->Rollback();
			transkacja->Rollback();
		}
		odœwie¿_dataGrid();
		Narzedzia::wyczysc_textboxy(this);
		ukryj_przyciski();
	}

	private: System::Void btn_edytuj_Click(System::Object^ sender, System::EventArgs^ e) {
		if (id_rekordu == 1) {
			MessageBox::Show("Nie mo¿na zmieniæ u¿ytkownika admin");
			return;
		}

		if (txt_imie->Text->Length < 3 || txt_nazwisko->Text->Length < 3 || txt_login->Text->Length <= 4) {
			MessageBox::Show("WprowadŸ dane poprawnie!");
			return;
		}
		else {
			MessageBox::Show("Dane wprowadzone poprawnie");
			uzytkownik_rodzaj();
		}

		MySqlConnection^ laczBaze = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transkacja;
		laczBaze->Open();
		transkacja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;
		polecenie->Transaction = transkacja;

		try {
			polecenie->CommandText = "Update uzytkownicy SET imie='" + txt_imie->Text + "', nazwisko='" + txt_nazwisko->Text + "', login = '" + txt_login->Text + "', haslo = '" + txt_login->Text + "', pracownik = " + rodzaj_pracownika + " WHERE uzytkownik_id = '" + id_rekordu + "';";
			polecenie->ExecuteNonQuery();
			MessageBox::Show("U¿tykownika " + txt_login->Text + " zosta³ zmodyfikowany");
			transkacja->Commit();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transkacja->Rollback();
		}
		laczBaze->Close();
		odœwie¿_dataGrid();
		Narzedzia::wyczysc_textboxy(this);
		ukryj_przyciski();

	}

	private: System::Void btn_dodaj_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_imie->Text->Length < 3 || txt_nazwisko->Text->Length < 3 || txt_login->Text->Length <= 3) {
			MessageBox::Show("WprowadŸ dane poprawnie!");
			return;
		}
		else {
			MessageBox::Show("Dane wprowadzone poprawnie");
			uzytkownik_rodzaj();
		}

		MySqlConnection^ laczBaze = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transkacja;
		laczBaze->Open();
		transkacja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;
		polecenie->Transaction = transkacja;

		try {
			polecenie->CommandText = "INSERT INTO uzytkownicy SET imie='" + txt_imie->Text + "', nazwisko='" + txt_nazwisko->Text + "', login='" + txt_login->Text + "', haslo='" + txt_login->Text + "', pracownik=" + rodzaj_pracownika + ";";
			polecenie->ExecuteNonQuery();
			MessageBox::Show("U¿ytkownik " + txt_login->Text + " zosta³ dodany od bazy danych");
			transkacja->Commit();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transkacja->Rollback();
		}
		laczBaze->Close();

		odœwie¿_dataGrid();
		Narzedzia::wyczysc_textboxy(this);
		ukryj_przyciski();
	}

	};
}