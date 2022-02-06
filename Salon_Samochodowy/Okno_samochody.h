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
	/// Podsumowanie informacji o Okno_samochody
	/// </summary>
	public ref class Okno_samochody : public System::Windows::Forms::Form
	{
	public:

		int id_rekordu;

		Okno_samochody(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Okno_samochody()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_szukaj;
	protected:
	private: System::Windows::Forms::TextBox^ txt_szukaj;
	private: System::Windows::Forms::DataGridView^ dg_samochody;

	private: System::Windows::Forms::Button^ btn_edytuj;
	private: System::Windows::Forms::Button^ btn_usun;
	private: System::Windows::Forms::Button^ btn_dodaj;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_iloscSztuk;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_opis;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_wyposazenie;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_kolor;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_nrVin;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_silnik;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_model;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_marka;

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
			this->btn_szukaj = (gcnew System::Windows::Forms::Button());
			this->txt_szukaj = (gcnew System::Windows::Forms::TextBox());
			this->dg_samochody = (gcnew System::Windows::Forms::DataGridView());
			this->btn_edytuj = (gcnew System::Windows::Forms::Button());
			this->btn_usun = (gcnew System::Windows::Forms::Button());
			this->btn_dodaj = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_iloscSztuk = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_opis = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_wyposazenie = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_kolor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_nrVin = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_silnik = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_model = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_marka = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_samochody))->BeginInit();
			this->SuspendLayout();
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
			this->btn_szukaj->Location = System::Drawing::Point(672, 12);
			this->btn_szukaj->Name = L"btn_szukaj";
			this->btn_szukaj->Size = System::Drawing::Size(150, 31);
			this->btn_szukaj->TabIndex = 59;
			this->btn_szukaj->Text = L"Szukaj";
			this->btn_szukaj->UseVisualStyleBackColor = false;
			this->btn_szukaj->Click += gcnew System::EventHandler(this, &Okno_samochody::btn_szukaj_Click);
			// 
			// txt_szukaj
			// 
			this->txt_szukaj->BackColor = System::Drawing::SystemColors::Window;
			this->txt_szukaj->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_szukaj->ForeColor = System::Drawing::Color::Gray;
			this->txt_szukaj->Location = System::Drawing::Point(12, 12);
			this->txt_szukaj->Name = L"txt_szukaj";
			this->txt_szukaj->Size = System::Drawing::Size(651, 31);
			this->txt_szukaj->TabIndex = 58;
			this->txt_szukaj->Text = L"Wpisz dane samochodu";
			// 
			// dg_samochody
			// 
			this->dg_samochody->AllowUserToAddRows = false;
			this->dg_samochody->AllowUserToDeleteRows = false;
			this->dg_samochody->AllowUserToResizeRows = false;
			this->dg_samochody->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dg_samochody->BackgroundColor = System::Drawing::Color::White;
			this->dg_samochody->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_samochody->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_samochody->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
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
			this->dg_samochody->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dg_samochody->ColumnHeadersHeight = 30;
			this->dg_samochody->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
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
			this->dg_samochody->DefaultCellStyle = dataGridViewCellStyle2;
			this->dg_samochody->EnableHeadersVisualStyles = false;
			this->dg_samochody->GridColor = System::Drawing::Color::White;
			this->dg_samochody->Location = System::Drawing::Point(12, 49);
			this->dg_samochody->Name = L"dg_samochody";
			this->dg_samochody->ReadOnly = true;
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
			this->dg_samochody->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dg_samochody->RowHeadersVisible = false;
			this->dg_samochody->RowHeadersWidth = 40;
			this->dg_samochody->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dg_samochody->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dg_samochody->Size = System::Drawing::Size(807, 328);
			this->dg_samochody->TabIndex = 57;
			this->dg_samochody->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_samochody::dg_samochody_CellClick);
			// 
			// btn_edytuj
			// 
			this->btn_edytuj->BackColor = System::Drawing::Color::White;
			this->btn_edytuj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_edytuj->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->btn_edytuj->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_edytuj->Location = System::Drawing::Point(317, 509);
			this->btn_edytuj->Name = L"btn_edytuj";
			this->btn_edytuj->Size = System::Drawing::Size(200, 40);
			this->btn_edytuj->TabIndex = 56;
			this->btn_edytuj->Text = L"Edytuj";
			this->btn_edytuj->UseVisualStyleBackColor = false;
			this->btn_edytuj->Visible = false;
			this->btn_edytuj->Click += gcnew System::EventHandler(this, &Okno_samochody::btn_edytuj_Click);
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
			this->btn_usun->Location = System::Drawing::Point(523, 509);
			this->btn_usun->Name = L"btn_usun";
			this->btn_usun->Size = System::Drawing::Size(200, 40);
			this->btn_usun->TabIndex = 55;
			this->btn_usun->Text = L"Usuñ";
			this->btn_usun->UseVisualStyleBackColor = false;
			this->btn_usun->Visible = false;
			this->btn_usun->Click += gcnew System::EventHandler(this, &Okno_samochody::btn_usun_Click);
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
			this->btn_dodaj->Location = System::Drawing::Point(111, 509);
			this->btn_dodaj->Name = L"btn_dodaj";
			this->btn_dodaj->Size = System::Drawing::Size(200, 40);
			this->btn_dodaj->TabIndex = 54;
			this->btn_dodaj->Text = L"Dodaj";
			this->btn_dodaj->UseVisualStyleBackColor = false;
			this->btn_dodaj->Click += gcnew System::EventHandler(this, &Okno_samochody::btn_dodaj_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(550, 460);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 28);
			this->label8->TabIndex = 53;
			this->label8->Text = L"Iloœæ sztuk";
			// 
			// txt_iloscSztuk
			// 
			this->txt_iloscSztuk->BackColor = System::Drawing::SystemColors::Window;
			this->txt_iloscSztuk->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_iloscSztuk->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_iloscSztuk->Location = System::Drawing::Point(647, 457);
			this->txt_iloscSztuk->Name = L"txt_iloscSztuk";
			this->txt_iloscSztuk->Size = System::Drawing::Size(160, 31);
			this->txt_iloscSztuk->TabIndex = 52;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(593, 386);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 28);
			this->label7->TabIndex = 51;
			this->label7->Text = L"Opis";
			// 
			// txt_opis
			// 
			this->txt_opis->BackColor = System::Drawing::SystemColors::Window;
			this->txt_opis->Font = (gcnew System::Drawing::Font(L"Poppins", 8));
			this->txt_opis->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_opis->Location = System::Drawing::Point(647, 383);
			this->txt_opis->Multiline = true;
			this->txt_opis->Name = L"txt_opis";
			this->txt_opis->Size = System::Drawing::Size(160, 68);
			this->txt_opis->TabIndex = 50;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(262, 460);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 28);
			this->label6->TabIndex = 49;
			this->label6->Text = L"Wyposa¿enie";
			// 
			// txt_wyposazenie
			// 
			this->txt_wyposazenie->BackColor = System::Drawing::SystemColors::Window;
			this->txt_wyposazenie->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_wyposazenie->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_wyposazenie->Location = System::Drawing::Point(384, 457);
			this->txt_wyposazenie->Name = L"txt_wyposazenie";
			this->txt_wyposazenie->Size = System::Drawing::Size(160, 31);
			this->txt_wyposazenie->TabIndex = 48;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(326, 423);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 28);
			this->label5->TabIndex = 47;
			this->label5->Text = L"Kolor";
			// 
			// txt_kolor
			// 
			this->txt_kolor->BackColor = System::Drawing::SystemColors::Window;
			this->txt_kolor->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_kolor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_kolor->Location = System::Drawing::Point(384, 420);
			this->txt_kolor->Name = L"txt_kolor";
			this->txt_kolor->Size = System::Drawing::Size(160, 31);
			this->txt_kolor->TabIndex = 46;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(316, 386);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 28);
			this->label4->TabIndex = 45;
			this->label4->Text = L"Nr. VIN";
			// 
			// txt_nrVin
			// 
			this->txt_nrVin->BackColor = System::Drawing::SystemColors::Window;
			this->txt_nrVin->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_nrVin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_nrVin->Location = System::Drawing::Point(384, 383);
			this->txt_nrVin->Name = L"txt_nrVin";
			this->txt_nrVin->Size = System::Drawing::Size(160, 31);
			this->txt_nrVin->TabIndex = 44;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(39, 460);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 28);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Silnik";
			// 
			// txt_silnik
			// 
			this->txt_silnik->BackColor = System::Drawing::SystemColors::Window;
			this->txt_silnik->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_silnik->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_silnik->Location = System::Drawing::Point(96, 457);
			this->txt_silnik->Name = L"txt_silnik";
			this->txt_silnik->Size = System::Drawing::Size(160, 31);
			this->txt_silnik->TabIndex = 42;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(29, 423);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 28);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Model";
			// 
			// txt_model
			// 
			this->txt_model->BackColor = System::Drawing::SystemColors::Window;
			this->txt_model->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_model->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_model->Location = System::Drawing::Point(96, 420);
			this->txt_model->Name = L"txt_model";
			this->txt_model->Size = System::Drawing::Size(160, 31);
			this->txt_model->TabIndex = 40;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(28, 386);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 28);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Marka";
			// 
			// txt_marka
			// 
			this->txt_marka->BackColor = System::Drawing::SystemColors::Window;
			this->txt_marka->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_marka->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_marka->Location = System::Drawing::Point(96, 383);
			this->txt_marka->Name = L"txt_marka";
			this->txt_marka->Size = System::Drawing::Size(160, 31);
			this->txt_marka->TabIndex = 38;
			// 
			// Okno_samochody
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(834, 561);
			this->Controls->Add(this->btn_szukaj);
			this->Controls->Add(this->txt_szukaj);
			this->Controls->Add(this->dg_samochody);
			this->Controls->Add(this->btn_edytuj);
			this->Controls->Add(this->btn_usun);
			this->Controls->Add(this->btn_dodaj);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_iloscSztuk);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_opis);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_wyposazenie);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_kolor);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_nrVin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_silnik);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_model);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_marka);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Okno_samochody";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Okno_samochody";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_samochody))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	void ukryj_przyciski() {
			btn_edytuj->Visible = false;
			btn_usun->Visible = false;
		}

	private: System::Void btn_szukaj_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txt_szukaj->Text == "Wpisz dane samochodu")
			txt_szukaj->Text = "";

		// Mo¿na tutaj wstawiæ funkcje odœwie¿ dataGrid() z opcjonalnym argumentem, który by³bym zapytaniem. 

		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT samochody_id, marka, model, silnik, numer_VIN, kolor, wyposazenie, opis, ilosc_sztuk FROM samochody WHERE concat (marka, model, silnik, numer_VIN, kolor, wyposazenie, ilosc_sztuk) LIKE '%" + txt_szukaj->Text + "%';", polaczenie);

		try {
			// wype³nienie datagrida danymi z tabeli klienci
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_samochody->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		polaczenie->Close();
		dg_samochody->Columns[0]->Visible = false;
		ukryj_przyciski();
		dg_samochody->ClearSelection();
	}

	private: System::Void dg_samochody_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			id_rekordu = Convert::ToUInt32(dg_samochody->Rows[e->RowIndex]->Cells[0]->Value);
			txt_marka->Text = dg_samochody->Rows[e->RowIndex]->Cells["marka"]->Value->ToString();
			txt_model->Text = dg_samochody->Rows[e->RowIndex]->Cells["model"]->Value->ToString();
			txt_silnik->Text = dg_samochody->Rows[e->RowIndex]->Cells["silnik"]->Value->ToString();
			txt_nrVin->Text = dg_samochody->Rows[e->RowIndex]->Cells["numer_VIN"]->Value->ToString();
			txt_kolor->Text = dg_samochody->Rows[e->RowIndex]->Cells["kolor"]->Value->ToString();
			txt_wyposazenie->Text = dg_samochody->Rows[e->RowIndex]->Cells["wyposazenie"]->Value->ToString();
			txt_opis->Text = dg_samochody->Rows[e->RowIndex]->Cells["opis"]->Value->ToString();
			txt_iloscSztuk->Text = dg_samochody->Rows[e->RowIndex]->Cells["ilosc_sztuk"]->Value->ToString();
		}

		btn_edytuj->Visible = true;
		btn_usun->Visible = true;
	}

	private: System::Void btn_dodaj_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_marka->Text->Length < 3 || txt_model->Text->Length < 3 || txt_kolor->Text->Length <= 3 || txt_silnik->Text->Length <= 1 || txt_nrVin->Text->Length < 17 || txt_wyposazenie->Text->Length <= 3 || txt_iloscSztuk->Text->Length <= 0) {
			MessageBox::Show("WprowadŸ dane poprawnie!");
			return;
		}
		else {
			MessageBox::Show("Dane wprowadzone poprawnie");
		}

		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = polaczenie->CreateCommand();
		MySqlTransaction^ transkacja;
		polaczenie->Open();
		transkacja = polaczenie->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = polaczenie;
		polecenie->Transaction = transkacja;

		try {
			polecenie->CommandText = "INSERT INTO samochody SET marka='" + txt_marka->Text + "', model='" + txt_model->Text + "', silnik='" + txt_silnik->Text + "', numer_VIN='" + txt_nrVin->Text + "', kolor='" + txt_kolor->Text + "', wyposazenie='" + txt_wyposazenie->Text + "', opis='" + txt_opis->Text + "', ilosc_sztuk='" + txt_iloscSztuk->Text + "';";
			polecenie->ExecuteNonQuery();
			MessageBox::Show(txt_marka->Text + " " + txt_model->Text + " zosta³ dodany od bazy danych");
			transkacja->Commit();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transkacja->Rollback();
		}
		polaczenie->Close();
		Poloczenie::odswiez_datagird(dg_samochody, "SELECT * FROM samochody;");
		Narzedzia::wyczysc_textboxy(this);
		ukryj_przyciski();
	}

	private: System::Void btn_usun_Click(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = polaczenie->CreateCommand();
		MySqlTransaction^ transkacja;
		polaczenie->Open();
		transkacja = polaczenie->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = polaczenie;
		polecenie->Transaction = transkacja;

		try {
			if (MessageBox::Show("Czy na pewno usun¹æ samochód " + txt_marka->Text + " " + txt_model->Text + "?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

				polecenie->CommandText = "DELETE FROM samochody WHERE samochody_id = " + id_rekordu + ";";
				polecenie->ExecuteNonQuery();


				transkacja->Commit();
				MessageBox::Show(txt_marka->Text + " " + txt_model->Text + " zosta³ usuniêty z bazy danych");
			}

		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transkacja->Rollback();
			transkacja->Rollback();
		}
		polaczenie->Close();
		Poloczenie::odswiez_datagird(dg_samochody, "SELECT * FROM samochody;");
		Narzedzia::wyczysc_textboxy(this);
		ukryj_przyciski();
	}

	private: System::Void btn_edytuj_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txt_marka->Text->Length < 3 || txt_model->Text->Length < 3 || txt_kolor->Text->Length <= 3 || txt_silnik->Text->Length <= 1 || txt_nrVin->Text->Length < 17 || txt_wyposazenie->Text->Length <= 3 || txt_iloscSztuk->Text->Length <= 0) {
			MessageBox::Show("WprowadŸ dane poprawnie!");
			return;
		}
		else {
			MessageBox::Show("Dane wprowadzone poprawnie");
		}

		MySqlConnection^ poloaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = poloaczenie->CreateCommand();
		MySqlTransaction^ transkacja;
		poloaczenie->Open();
		transkacja = poloaczenie->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = poloaczenie;
		polecenie->Transaction = transkacja;

		try {
			polecenie->CommandText = "UPDATE samochody SET marka='" + txt_marka->Text + "', model='" + txt_model->Text + "', silnik='" + txt_silnik->Text + "', numer_VIN='" + txt_nrVin->Text + "', kolor='" + txt_kolor->Text + "', wyposazenie='" + txt_wyposazenie->Text + "', opis='" + txt_opis->Text + "', ilosc_sztuk='" + txt_iloscSztuk->Text + "' WHERE samochody_id = " + id_rekordu + ";";
			polecenie->ExecuteNonQuery();
			MessageBox::Show("Samochód " +  txt_marka->Text + " " + txt_model->Text + " zosta³ zmodyfikowany");
			transkacja->Commit();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transkacja->Rollback();
		}
		poloaczenie->Close();
		Poloczenie::odswiez_datagird(dg_samochody, "SELECT * FROM samochody;");
		Narzedzia::wyczysc_textboxy(this);
		ukryj_przyciski();
	}
	};
}
