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
	private: System::Windows::Forms::GroupBox^ gb_godzinyPracy;
	private: System::Windows::Forms::TextBox^ txt_niedz_do;
	public:

	public:

	private: System::Windows::Forms::TextBox^ txt_niedz_od;

	private: System::Windows::Forms::TextBox^ txt_sob_do;

	private: System::Windows::Forms::TextBox^ txt_sob_od;

	private: System::Windows::Forms::TextBox^ txt_pt_do;

	private: System::Windows::Forms::TextBox^ txt_pt_od;

	private: System::Windows::Forms::TextBox^ txt_czw_do;

	private: System::Windows::Forms::TextBox^ txt_czw_od;

	private: System::Windows::Forms::TextBox^ txt_sr_do;

	private: System::Windows::Forms::TextBox^ txt_sr_od;

	private: System::Windows::Forms::TextBox^ txt_wt_do;


	private: System::Windows::Forms::TextBox^ txt_wt_od;

	private: System::Windows::Forms::TextBox^ txt_pon_do;

	private: System::Windows::Forms::TextBox^ txt_pon_od;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btn_11_19;

	private: System::Windows::Forms::Button^ btn_10_18;

	private: System::Windows::Forms::Button^ btn_9_17;

	private: System::Windows::Forms::Button^ btn_8_16;

	private: System::Windows::Forms::Button^ btn_7_15;

		   int rodzaj_pracownika;

	public:  Okno_uzytkownicy(int uzytkownik)
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
			this->gb_godzinyPracy = (gcnew System::Windows::Forms::GroupBox());
			this->btn_11_19 = (gcnew System::Windows::Forms::Button());
			this->btn_10_18 = (gcnew System::Windows::Forms::Button());
			this->btn_9_17 = (gcnew System::Windows::Forms::Button());
			this->btn_8_16 = (gcnew System::Windows::Forms::Button());
			this->btn_7_15 = (gcnew System::Windows::Forms::Button());
			this->txt_niedz_do = (gcnew System::Windows::Forms::TextBox());
			this->txt_niedz_od = (gcnew System::Windows::Forms::TextBox());
			this->txt_sob_do = (gcnew System::Windows::Forms::TextBox());
			this->txt_sob_od = (gcnew System::Windows::Forms::TextBox());
			this->txt_pt_do = (gcnew System::Windows::Forms::TextBox());
			this->txt_pt_od = (gcnew System::Windows::Forms::TextBox());
			this->txt_czw_do = (gcnew System::Windows::Forms::TextBox());
			this->txt_czw_od = (gcnew System::Windows::Forms::TextBox());
			this->txt_sr_do = (gcnew System::Windows::Forms::TextBox());
			this->txt_sr_od = (gcnew System::Windows::Forms::TextBox());
			this->txt_wt_do = (gcnew System::Windows::Forms::TextBox());
			this->txt_wt_od = (gcnew System::Windows::Forms::TextBox());
			this->txt_pon_do = (gcnew System::Windows::Forms::TextBox());
			this->txt_pon_od = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_uzytkownicy))->BeginInit();
			this->gb_godzinyPracy->SuspendLayout();
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
			this->txt_imie->Location = System::Drawing::Point(12, 77);
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
			this->txt_nazwisko->Location = System::Drawing::Point(12, 142);
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
			this->txt_login->Location = System::Drawing::Point(12, 207);
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
			this->label1->Location = System::Drawing::Point(7, 46);
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
			this->label2->Location = System::Drawing::Point(8, 111);
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
			this->label3->Location = System::Drawing::Point(8, 176);
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
			this->chb_pracownik->Location = System::Drawing::Point(143, 244);
			this->chb_pracownik->Name = L"chb_pracownik";
			this->chb_pracownik->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->chb_pracownik->Size = System::Drawing::Size(112, 32);
			this->chb_pracownik->TabIndex = 19;
			this->chb_pracownik->Text = L"Pracownik";
			this->chb_pracownik->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chb_pracownik->UseVisualStyleBackColor = true;
			this->chb_pracownik->CheckedChanged += gcnew System::EventHandler(this, &Okno_uzytkownicy::chb_pracownik_CheckedChanged);
			// 
			// gb_godzinyPracy
			// 
			this->gb_godzinyPracy->Controls->Add(this->btn_11_19);
			this->gb_godzinyPracy->Controls->Add(this->btn_10_18);
			this->gb_godzinyPracy->Controls->Add(this->btn_9_17);
			this->gb_godzinyPracy->Controls->Add(this->btn_8_16);
			this->gb_godzinyPracy->Controls->Add(this->btn_7_15);
			this->gb_godzinyPracy->Controls->Add(this->txt_niedz_do);
			this->gb_godzinyPracy->Controls->Add(this->txt_niedz_od);
			this->gb_godzinyPracy->Controls->Add(this->txt_sob_do);
			this->gb_godzinyPracy->Controls->Add(this->txt_sob_od);
			this->gb_godzinyPracy->Controls->Add(this->txt_pt_do);
			this->gb_godzinyPracy->Controls->Add(this->txt_pt_od);
			this->gb_godzinyPracy->Controls->Add(this->txt_czw_do);
			this->gb_godzinyPracy->Controls->Add(this->txt_czw_od);
			this->gb_godzinyPracy->Controls->Add(this->txt_sr_do);
			this->gb_godzinyPracy->Controls->Add(this->txt_sr_od);
			this->gb_godzinyPracy->Controls->Add(this->txt_wt_do);
			this->gb_godzinyPracy->Controls->Add(this->txt_wt_od);
			this->gb_godzinyPracy->Controls->Add(this->txt_pon_do);
			this->gb_godzinyPracy->Controls->Add(this->txt_pon_od);
			this->gb_godzinyPracy->Controls->Add(this->label4);
			this->gb_godzinyPracy->Controls->Add(this->label15);
			this->gb_godzinyPracy->Controls->Add(this->label14);
			this->gb_godzinyPracy->Controls->Add(this->label12);
			this->gb_godzinyPracy->Controls->Add(this->label13);
			this->gb_godzinyPracy->Controls->Add(this->label10);
			this->gb_godzinyPracy->Controls->Add(this->label11);
			this->gb_godzinyPracy->Controls->Add(this->label9);
			this->gb_godzinyPracy->Controls->Add(this->label8);
			this->gb_godzinyPracy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gb_godzinyPracy->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->gb_godzinyPracy->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->gb_godzinyPracy->Location = System::Drawing::Point(12, 282);
			this->gb_godzinyPracy->Name = L"gb_godzinyPracy";
			this->gb_godzinyPracy->Size = System::Drawing::Size(331, 221);
			this->gb_godzinyPracy->TabIndex = 20;
			this->gb_godzinyPracy->TabStop = false;
			this->gb_godzinyPracy->Text = L"Godziny Pracy";
			this->gb_godzinyPracy->Visible = false;
			// 
			// btn_11_19
			// 
			this->btn_11_19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_11_19->FlatAppearance->BorderSize = 0;
			this->btn_11_19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_11_19->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->btn_11_19->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_11_19->Location = System::Drawing::Point(226, 180);
			this->btn_11_19->Name = L"btn_11_19";
			this->btn_11_19->Size = System::Drawing::Size(99, 29);
			this->btn_11_19->TabIndex = 45;
			this->btn_11_19->Text = L"11:00 - 19:00";
			this->btn_11_19->UseVisualStyleBackColor = false;
			this->btn_11_19->Click += gcnew System::EventHandler(this, &Okno_uzytkownicy::btn_11_19_Click);
			// 
			// btn_10_18
			// 
			this->btn_10_18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_10_18->FlatAppearance->BorderSize = 0;
			this->btn_10_18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_10_18->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->btn_10_18->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_10_18->Location = System::Drawing::Point(226, 145);
			this->btn_10_18->Name = L"btn_10_18";
			this->btn_10_18->Size = System::Drawing::Size(99, 29);
			this->btn_10_18->TabIndex = 44;
			this->btn_10_18->Text = L"10:00 - 18:00";
			this->btn_10_18->UseVisualStyleBackColor = false;
			this->btn_10_18->Click += gcnew System::EventHandler(this, &Okno_uzytkownicy::btn_10_18_Click);
			// 
			// btn_9_17
			// 
			this->btn_9_17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_9_17->FlatAppearance->BorderSize = 0;
			this->btn_9_17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_9_17->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->btn_9_17->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_9_17->Location = System::Drawing::Point(226, 110);
			this->btn_9_17->Name = L"btn_9_17";
			this->btn_9_17->Size = System::Drawing::Size(99, 29);
			this->btn_9_17->TabIndex = 43;
			this->btn_9_17->Text = L"9:00 - 17:00";
			this->btn_9_17->UseVisualStyleBackColor = false;
			this->btn_9_17->Click += gcnew System::EventHandler(this, &Okno_uzytkownicy::btn_9_17_Click);
			// 
			// btn_8_16
			// 
			this->btn_8_16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_8_16->FlatAppearance->BorderSize = 0;
			this->btn_8_16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_8_16->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->btn_8_16->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_8_16->Location = System::Drawing::Point(226, 77);
			this->btn_8_16->Name = L"btn_8_16";
			this->btn_8_16->Size = System::Drawing::Size(99, 29);
			this->btn_8_16->TabIndex = 42;
			this->btn_8_16->Text = L"8:00 - 16:00";
			this->btn_8_16->UseVisualStyleBackColor = false;
			this->btn_8_16->Click += gcnew System::EventHandler(this, &Okno_uzytkownicy::btn_8_16_Click);
			// 
			// btn_7_15
			// 
			this->btn_7_15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_7_15->FlatAppearance->BorderSize = 0;
			this->btn_7_15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_7_15->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->btn_7_15->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_7_15->Location = System::Drawing::Point(226, 42);
			this->btn_7_15->Name = L"btn_7_15";
			this->btn_7_15->Size = System::Drawing::Size(99, 29);
			this->btn_7_15->TabIndex = 21;
			this->btn_7_15->Text = L"7:00 - 15:00";
			this->btn_7_15->UseVisualStyleBackColor = false;
			this->btn_7_15->Click += gcnew System::EventHandler(this, &Okno_uzytkownicy::btn_7_15_Click);
			// 
			// txt_niedz_do
			// 
			this->txt_niedz_do->BackColor = System::Drawing::SystemColors::Window;
			this->txt_niedz_do->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_niedz_do->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_niedz_do->Location = System::Drawing::Point(170, 186);
			this->txt_niedz_do->Name = L"txt_niedz_do";
			this->txt_niedz_do->Size = System::Drawing::Size(50, 25);
			this->txt_niedz_do->TabIndex = 41;
			// 
			// txt_niedz_od
			// 
			this->txt_niedz_od->BackColor = System::Drawing::SystemColors::Window;
			this->txt_niedz_od->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_niedz_od->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_niedz_od->Location = System::Drawing::Point(109, 186);
			this->txt_niedz_od->Name = L"txt_niedz_od";
			this->txt_niedz_od->Size = System::Drawing::Size(50, 25);
			this->txt_niedz_od->TabIndex = 40;
			// 
			// txt_sob_do
			// 
			this->txt_sob_do->BackColor = System::Drawing::SystemColors::Window;
			this->txt_sob_do->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_sob_do->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_sob_do->Location = System::Drawing::Point(170, 162);
			this->txt_sob_do->Name = L"txt_sob_do";
			this->txt_sob_do->Size = System::Drawing::Size(50, 25);
			this->txt_sob_do->TabIndex = 39;
			// 
			// txt_sob_od
			// 
			this->txt_sob_od->BackColor = System::Drawing::SystemColors::Window;
			this->txt_sob_od->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_sob_od->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_sob_od->Location = System::Drawing::Point(109, 162);
			this->txt_sob_od->Name = L"txt_sob_od";
			this->txt_sob_od->Size = System::Drawing::Size(50, 25);
			this->txt_sob_od->TabIndex = 38;
			// 
			// txt_pt_do
			// 
			this->txt_pt_do->BackColor = System::Drawing::SystemColors::Window;
			this->txt_pt_do->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_pt_do->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_pt_do->Location = System::Drawing::Point(170, 138);
			this->txt_pt_do->Name = L"txt_pt_do";
			this->txt_pt_do->Size = System::Drawing::Size(50, 25);
			this->txt_pt_do->TabIndex = 37;
			// 
			// txt_pt_od
			// 
			this->txt_pt_od->BackColor = System::Drawing::SystemColors::Window;
			this->txt_pt_od->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_pt_od->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_pt_od->Location = System::Drawing::Point(109, 138);
			this->txt_pt_od->Name = L"txt_pt_od";
			this->txt_pt_od->Size = System::Drawing::Size(50, 25);
			this->txt_pt_od->TabIndex = 36;
			// 
			// txt_czw_do
			// 
			this->txt_czw_do->BackColor = System::Drawing::SystemColors::Window;
			this->txt_czw_do->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_czw_do->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_czw_do->Location = System::Drawing::Point(170, 114);
			this->txt_czw_do->Name = L"txt_czw_do";
			this->txt_czw_do->Size = System::Drawing::Size(50, 25);
			this->txt_czw_do->TabIndex = 35;
			// 
			// txt_czw_od
			// 
			this->txt_czw_od->BackColor = System::Drawing::SystemColors::Window;
			this->txt_czw_od->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_czw_od->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_czw_od->Location = System::Drawing::Point(109, 114);
			this->txt_czw_od->Name = L"txt_czw_od";
			this->txt_czw_od->Size = System::Drawing::Size(50, 25);
			this->txt_czw_od->TabIndex = 34;
			// 
			// txt_sr_do
			// 
			this->txt_sr_do->BackColor = System::Drawing::SystemColors::Window;
			this->txt_sr_do->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_sr_do->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_sr_do->Location = System::Drawing::Point(170, 90);
			this->txt_sr_do->Name = L"txt_sr_do";
			this->txt_sr_do->Size = System::Drawing::Size(50, 25);
			this->txt_sr_do->TabIndex = 33;
			// 
			// txt_sr_od
			// 
			this->txt_sr_od->BackColor = System::Drawing::SystemColors::Window;
			this->txt_sr_od->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_sr_od->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_sr_od->Location = System::Drawing::Point(109, 90);
			this->txt_sr_od->Name = L"txt_sr_od";
			this->txt_sr_od->Size = System::Drawing::Size(50, 25);
			this->txt_sr_od->TabIndex = 32;
			// 
			// txt_wt_do
			// 
			this->txt_wt_do->BackColor = System::Drawing::SystemColors::Window;
			this->txt_wt_do->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_wt_do->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_wt_do->Location = System::Drawing::Point(170, 66);
			this->txt_wt_do->Name = L"txt_wt_do";
			this->txt_wt_do->Size = System::Drawing::Size(50, 25);
			this->txt_wt_do->TabIndex = 31;
			// 
			// txt_wt_od
			// 
			this->txt_wt_od->BackColor = System::Drawing::SystemColors::Window;
			this->txt_wt_od->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_wt_od->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_wt_od->Location = System::Drawing::Point(109, 66);
			this->txt_wt_od->Name = L"txt_wt_od";
			this->txt_wt_od->Size = System::Drawing::Size(50, 25);
			this->txt_wt_od->TabIndex = 30;
			// 
			// txt_pon_do
			// 
			this->txt_pon_do->BackColor = System::Drawing::SystemColors::Window;
			this->txt_pon_do->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_pon_do->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_pon_do->Location = System::Drawing::Point(170, 42);
			this->txt_pon_do->Name = L"txt_pon_do";
			this->txt_pon_do->Size = System::Drawing::Size(50, 25);
			this->txt_pon_do->TabIndex = 29;
			// 
			// txt_pon_od
			// 
			this->txt_pon_od->BackColor = System::Drawing::SystemColors::Window;
			this->txt_pon_od->Font = (gcnew System::Drawing::Font(L"Poppins", 9));
			this->txt_pon_od->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_pon_od->Location = System::Drawing::Point(109, 42);
			this->txt_pon_od->Name = L"txt_pon_od";
			this->txt_pon_od->Size = System::Drawing::Size(50, 25);
			this->txt_pon_od->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->label4->Location = System::Drawing::Point(6, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 25);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Niedziela";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->label15->Location = System::Drawing::Point(178, 20);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(31, 25);
			this->label15->TabIndex = 27;
			this->label15->Text = L"Do";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->label14->Location = System::Drawing::Point(110, 20);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(32, 25);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Od";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->label12->Location = System::Drawing::Point(5, 162);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(61, 25);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Sobota";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->label13->Location = System::Drawing::Point(6, 138);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 25);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Pi¹tek";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->label10->Location = System::Drawing::Point(6, 114);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 25);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Czwartek";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->label11->Location = System::Drawing::Point(6, 90);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 25);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Œroda";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->label9->Location = System::Drawing::Point(6, 66);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 25);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Wtorek";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->label8->Location = System::Drawing::Point(5, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 25);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Poniedzia³ek";
			// 
			// Okno_uzytkownicy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(834, 561);
			this->Controls->Add(this->gb_godzinyPracy);
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
			this->gb_godzinyPracy->ResumeLayout(false);
			this->gb_godzinyPracy->PerformLayout();
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

	private: void uzupelnij_czas_pracy(int czasPoczatkowy) {
		array<TextBox^>^ czas_pocz = { txt_pon_od, txt_wt_od, txt_sr_od, txt_czw_od, txt_pt_od, txt_sob_od, txt_niedz_od };
		array<TextBox^>^ czas_kon = { txt_pon_do, txt_wt_do, txt_sr_do, txt_czw_do, txt_pt_do, txt_sob_do, txt_niedz_do };

		for (int i = 0; i < 7; i++) {
			czas_pocz[i]->Text = czasPoczatkowy + ":00";
			czas_kon[i]->Text = czasPoczatkowy + 8 + ":00";
		}
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
		dg_uzytkownicy->ClearSelection();
	}

	private: System::Void dg_uzytkownicy_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			id_rekordu = Convert::ToUInt32(dg_uzytkownicy->Rows[e->RowIndex]->Cells[0]->Value);
			txt_imie->Text = dg_uzytkownicy->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
			txt_nazwisko->Text = dg_uzytkownicy->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
			txt_login->Text = dg_uzytkownicy->Rows[e->RowIndex]->Cells["login"]->Value->ToString();
			chb_pracownik->Checked = Convert::ToBoolean(dg_uzytkownicy->Rows[e->RowIndex]->Cells["pracownik"]->Value);

			if (chb_pracownik->Checked == true) {
				gb_godzinyPracy->Visible = true;

				MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
				MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT pon_od, pon_do, wt_od, wt_do, sr_od, sr_do, czw_od, czw_do, pt_od, pt_do, sob_od, sob_do, niedz_od, niedz_do FROM godziny WHERE uzytkownik_id = " + id_rekordu + ";", polaczenie);

				MySqlDataReader^ odczyt;

				try {
					polaczenie->Open();
					odczyt = zapytanie->ExecuteReader();
					if (odczyt->Read() == true) {
						txt_pon_od->Text = odczyt->GetString(0);
						txt_pon_do->Text = odczyt->GetString(1);
						txt_wt_od->Text = odczyt->GetString(2);
						txt_wt_do->Text = odczyt->GetString(3);
						txt_sr_od->Text = odczyt->GetString(4);
						txt_sr_do->Text = odczyt->GetString(5);
						txt_czw_od->Text = odczyt->GetString(6);
						txt_czw_do->Text = odczyt->GetString(7);
						txt_pt_od->Text = odczyt->GetString(8);
						txt_pt_do->Text = odczyt->GetString(9);
						txt_sob_od->Text = odczyt->GetString(10);
						txt_sob_do->Text = odczyt->GetString(11);
						txt_niedz_od->Text = odczyt->GetString(12);
						txt_niedz_do->Text = odczyt->GetString(13);
					}
					else {
						Narzedzia::wyczysc_textboxy_groupBox(gb_godzinyPracy);
					}
					polaczenie->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}

			}
			else {
				gb_godzinyPracy->Visible = false;
			}
		}

		btn_edytuj->Visible = true;
		btn_usun->Visible = true;
	}

	private: System::Void btn_usun_Click(System::Object^ sender, System::EventArgs^ e) {
		if (id_rekordu == 1) {
			MessageBox::Show("Nie mo¿na usun¹æ u¿ytkownika admin");
			return;
		}
		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = polaczenie->CreateCommand();
		MySqlTransaction^ transkacja;
		polaczenie->Open();
		transkacja = polaczenie->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = polaczenie;
		polecenie->Transaction = transkacja;

		try {
			if (MessageBox::Show("Czy na pewno usun¹æ u¿ytkownika " + txt_login->Text + "?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {



				polecenie->CommandText = "DELETE FROM godziny WHERE uzytkownik_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();

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
		polaczenie->Close();
		Poloczenie::odswiez_datagird(dg_uzytkownicy, "SELECT uzytkownik_id, imie, nazwisko, login, pracownik FROM uzytkownicy ;");
		Narzedzia::wyczysc_textboxy(this);
		Narzedzia::wyczysc_textboxy_groupBox(gb_godzinyPracy);
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

		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = polaczenie->CreateCommand();
		MySqlTransaction^ transkacja;
		polaczenie->Open();
		transkacja = polaczenie->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = polaczenie;
		polecenie->Transaction = transkacja;

		try {
			polecenie->CommandText = "SELECT * FROM godziny WHERE uzytkownik_id = " + id_rekordu + ";";
			MySqlDataReader^ wynik = polecenie->ExecuteReader();

			bool rezultat = wynik->HasRows;
			wynik->Close();

			polecenie->CommandText = "Update uzytkownicy SET imie='" + txt_imie->Text + "', nazwisko='" + txt_nazwisko->Text + "', login = '" + txt_login->Text + "', haslo = '" + txt_login->Text + "', pracownik = " + rodzaj_pracownika + " WHERE uzytkownik_id = '" + id_rekordu + "';";
			polecenie->ExecuteNonQuery();

			if (rezultat == true && chb_pracownik->Checked == true) {
				polecenie->CommandText = "UPDATE godziny SET pon_od='" + txt_pon_od->Text + "', pon_do='" + txt_pon_do->Text + "', wt_od='" + txt_wt_od->Text + "', wt_do='" + txt_wt_do->Text + "', sr_od='" + txt_sr_od->Text + "', sr_do='" + txt_sr_do->Text + "', czw_od='" + txt_czw_od->Text + "', czw_do='" + txt_czw_do->Text + "', pt_od='" + txt_pt_od->Text + "', pt_do='" + txt_pt_do->Text + "', sob_od='" + txt_sob_od->Text + "', sob_do='" + txt_sob_do->Text + "', niedz_od='" + txt_niedz_od->Text + "', niedz_do='" + txt_niedz_do + "' WHERE uzytkownik_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();
			}
			else if (rezultat == false && chb_pracownik->Checked == true) {
				polecenie->CommandText = "INSERT INTO godziny SET uzytkownik_id=" + id_rekordu + ", pon_od='" + txt_pon_od->Text + "', pon_do='" + txt_pon_do->Text + "', wt_od='" + txt_wt_od->Text + "', wt_do='" + txt_wt_do->Text + "', sr_od='" + txt_sr_od->Text + "', sr_do='" + txt_sr_do->Text + "', czw_od='" + txt_czw_od->Text + "', czw_do='" + txt_czw_do->Text + "', pt_od='" + txt_pt_od->Text + "', pt_do='" + txt_pt_do->Text + "', sob_od='" + txt_sob_od->Text + "', sob_do='" + txt_sob_do->Text + "', niedz_od='" + txt_niedz_od->Text + "', niedz_do='" + txt_niedz_do + "';";
				polecenie->ExecuteNonQuery();
			}

			MessageBox::Show("U¿tykownika " + txt_login->Text + " zosta³ zmodyfikowany");
			transkacja->Commit();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transkacja->Rollback();
		}
		polaczenie->Close();
		Poloczenie::odswiez_datagird(dg_uzytkownicy, "SELECT uzytkownik_id, imie, nazwisko, login, pracownik FROM uzytkownicy ;");
		Narzedzia::wyczysc_textboxy(this);
		Narzedzia::wyczysc_textboxy_groupBox(gb_godzinyPracy);
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

		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = polaczenie->CreateCommand();
		MySqlTransaction^ transkacja;
		polaczenie->Open();
		transkacja = polaczenie->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = polaczenie;
		polecenie->Transaction = transkacja;

		try {
			polecenie->CommandText = "INSERT INTO uzytkownicy SET imie='" + txt_imie->Text + "', nazwisko='" + txt_nazwisko->Text + "', login='" + txt_login->Text + "', haslo='" + txt_login->Text + "', pracownik=" + rodzaj_pracownika + ";";
			polecenie->ExecuteNonQuery();

			if (chb_pracownik->Checked) {
				polecenie->CommandText = "INSERT INTO godziny SET uzytkownik_id=last_insert_id(), pon_od='" + txt_pon_od->Text + "', pon_do='" + txt_pon_do->Text + "', wt_od='" + txt_wt_od->Text + "', wt_do='" + txt_wt_do->Text + "', sr_od='" + txt_sr_od->Text + "', sr_do='" + txt_sr_do->Text + "', czw_od='" + txt_czw_od->Text + "', czw_do='" + txt_czw_do->Text + "', pt_od='" + txt_pt_od->Text + "', pt_do='" + txt_pt_do->Text + "', sob_od='" + txt_sob_od->Text + "', sob_do='" + txt_sob_do->Text + "', niedz_od='" + txt_niedz_od->Text + "', niedz_do='" + txt_niedz_do + "';";
				polecenie->ExecuteNonQuery();
				MessageBox::Show("U¿ytkownik " + txt_login->Text + " zosta³ dodany od bazy danych");
			}
			else {
				MessageBox::Show("U¿ytkownik " + txt_login->Text + " zosta³ dodany od bazy danych");
			}
			transkacja->Commit();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transkacja->Rollback();
		}
		polaczenie->Close();
		Poloczenie::odswiez_datagird(dg_uzytkownicy, "SELECT uzytkownik_id, imie, nazwisko, login, pracownik FROM uzytkownicy ;");
		Narzedzia::wyczysc_textboxy(this);
		Narzedzia::wyczysc_textboxy_groupBox(gb_godzinyPracy);
		ukryj_przyciski();
	}

	private: System::Void chb_pracownik_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chb_pracownik->Checked == true) {
			gb_godzinyPracy->Visible = true;
		}
		if (chb_pracownik->Checked == false) {
			gb_godzinyPracy->Visible = false;
		}
	}
	private: System::Void btn_7_15_Click(System::Object^ sender, System::EventArgs^ e) {
		uzupelnij_czas_pracy(7);
	}
	private: System::Void btn_8_16_Click(System::Object^ sender, System::EventArgs^ e) {
		uzupelnij_czas_pracy(8);
	}
	private: System::Void btn_9_17_Click(System::Object^ sender, System::EventArgs^ e) {
		uzupelnij_czas_pracy(9);
	}
	private: System::Void btn_10_18_Click(System::Object^ sender, System::EventArgs^ e) {
		uzupelnij_czas_pracy(10);
	}
	private: System::Void btn_11_19_Click(System::Object^ sender, System::EventArgs^ e) {
		uzupelnij_czas_pracy(11);
	}
	};
}