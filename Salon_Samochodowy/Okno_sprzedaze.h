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
	/// Podsumowanie informacji o Okno_sprzedaze
	/// </summary>
	public ref class Okno_sprzedaze : public System::Windows::Forms::Form
	{
	public:
		int id_rekordu;
		int id_uzytkownik;
		int id_samochod;
		int id_sprzedarz;
	
	public:

	public:
	

	public:

	public:

	public:
	

	public:

	public:
	
		   int id_klient;
		Okno_sprzedaze(void)
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
		~Okno_sprzedaze()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_SPuzytkownik;

	protected:
	private: System::Windows::Forms::Button^ btn_SPusun;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_SPcena;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_SPdodaj;
	private: System::Windows::Forms::TextBox^ txt_SPkilent;
	private: System::Windows::Forms::TextBox^ txt_SPsamochod;
	private: System::Windows::Forms::Button^ btn_SPszukaj;
	private: System::Windows::Forms::DataGridView^ dg_SPuzytkownicy;
	private: System::Windows::Forms::DataGridView^ dg_SPklienci;
	private: System::Windows::Forms::DataGridView^ dg_SPsamochody;
	private: System::Windows::Forms::DataGridView^ dg_SPjsprzedaze;









	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->txt_SPuzytkownik = (gcnew System::Windows::Forms::TextBox());
			this->txt_SPkilent = (gcnew System::Windows::Forms::TextBox());
			this->txt_SPsamochod = (gcnew System::Windows::Forms::TextBox());
			this->btn_SPszukaj = (gcnew System::Windows::Forms::Button());
			this->dg_SPuzytkownicy = (gcnew System::Windows::Forms::DataGridView());
			this->dg_SPklienci = (gcnew System::Windows::Forms::DataGridView());
			this->dg_SPsamochody = (gcnew System::Windows::Forms::DataGridView());
			this->dg_SPjsprzedaze = (gcnew System::Windows::Forms::DataGridView());
			this->txt_SPcena = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_SPdodaj = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_SPusun = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_SPuzytkownicy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_SPklienci))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_SPsamochody))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_SPjsprzedaze))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_SPuzytkownik
			// 
			this->txt_SPuzytkownik->Location = System::Drawing::Point(25, 22);
			this->txt_SPuzytkownik->Name = L"txt_SPuzytkownik";
			this->txt_SPuzytkownik->Size = System::Drawing::Size(125, 20);
			this->txt_SPuzytkownik->TabIndex = 0;
			// 
			// txt_SPkilent
			// 
			this->txt_SPkilent->Location = System::Drawing::Point(25, 59);
			this->txt_SPkilent->Name = L"txt_SPkilent";
			this->txt_SPkilent->Size = System::Drawing::Size(125, 20);
			this->txt_SPkilent->TabIndex = 1;
			// 
			// txt_SPsamochod
			// 
			this->txt_SPsamochod->Location = System::Drawing::Point(25, 96);
			this->txt_SPsamochod->Name = L"txt_SPsamochod";
			this->txt_SPsamochod->Size = System::Drawing::Size(125, 20);
			this->txt_SPsamochod->TabIndex = 2;
			// 
			// btn_SPszukaj
			// 
			this->btn_SPszukaj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_SPszukaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_SPszukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_SPszukaj->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_SPszukaj->Location = System::Drawing::Point(177, 12);
			this->btn_SPszukaj->Name = L"btn_SPszukaj";
			this->btn_SPszukaj->Size = System::Drawing::Size(94, 33);
			this->btn_SPszukaj->TabIndex = 3;
			this->btn_SPszukaj->Text = L"Szukaj";
			this->btn_SPszukaj->UseVisualStyleBackColor = false;
			this->btn_SPszukaj->Click += gcnew System::EventHandler(this, &Okno_sprzedaze::btn_SPszukaj_Click);
			// 
			// dg_SPuzytkownicy
			// 
			this->dg_SPuzytkownicy->BackgroundColor = System::Drawing::Color::White;
			this->dg_SPuzytkownicy->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_SPuzytkownicy->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_SPuzytkownicy->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_SPuzytkownicy->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dg_SPuzytkownicy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_SPuzytkownicy->EnableHeadersVisualStyles = false;
			this->dg_SPuzytkownicy->GridColor = System::Drawing::Color::White;
			this->dg_SPuzytkownicy->Location = System::Drawing::Point(487, 22);
			this->dg_SPuzytkownicy->Name = L"dg_SPuzytkownicy";
			this->dg_SPuzytkownicy->RowHeadersVisible = false;
			this->dg_SPuzytkownicy->Size = System::Drawing::Size(320, 125);
			this->dg_SPuzytkownicy->TabIndex = 4;
			this->dg_SPuzytkownicy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_sprzedaze::dg_SPuzytkownicy_CellClick);
			// 
			// dg_SPklienci
			// 
			this->dg_SPklienci->BackgroundColor = System::Drawing::Color::White;
			this->dg_SPklienci->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_SPklienci->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_SPklienci->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_SPklienci->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dg_SPklienci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dg_SPklienci->DefaultCellStyle = dataGridViewCellStyle3;
			this->dg_SPklienci->EnableHeadersVisualStyles = false;
			this->dg_SPklienci->GridColor = System::Drawing::Color::White;
			this->dg_SPklienci->Location = System::Drawing::Point(487, 192);
			this->dg_SPklienci->Name = L"dg_SPklienci";
			this->dg_SPklienci->RowHeadersVisible = false;
			this->dg_SPklienci->Size = System::Drawing::Size(320, 125);
			this->dg_SPklienci->TabIndex = 5;
			this->dg_SPklienci->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_sprzedaze::dg_SPklienci_CellClick);
			// 
			// dg_SPsamochody
			// 
			this->dg_SPsamochody->BackgroundColor = System::Drawing::Color::White;
			this->dg_SPsamochody->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_SPsamochody->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_SPsamochody->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_SPsamochody->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dg_SPsamochody->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_SPsamochody->EnableHeadersVisualStyles = false;
			this->dg_SPsamochody->GridColor = System::Drawing::Color::White;
			this->dg_SPsamochody->Location = System::Drawing::Point(487, 390);
			this->dg_SPsamochody->Name = L"dg_SPsamochody";
			this->dg_SPsamochody->RowHeadersVisible = false;
			this->dg_SPsamochody->Size = System::Drawing::Size(320, 125);
			this->dg_SPsamochody->TabIndex = 6;
			this->dg_SPsamochody->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_sprzedaze::dg_SPsamochody_CellClick);
			// 
			// dg_SPjsprzedaze
			// 
			this->dg_SPjsprzedaze->BackgroundColor = System::Drawing::Color::White;
			this->dg_SPjsprzedaze->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_SPjsprzedaze->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_SPjsprzedaze->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_SPjsprzedaze->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dg_SPjsprzedaze->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_SPjsprzedaze->EnableHeadersVisualStyles = false;
			this->dg_SPjsprzedaze->GridColor = System::Drawing::Color::White;
			this->dg_SPjsprzedaze->Location = System::Drawing::Point(25, 390);
			this->dg_SPjsprzedaze->Name = L"dg_SPjsprzedaze";
			this->dg_SPjsprzedaze->RowHeadersVisible = false;
			this->dg_SPjsprzedaze->Size = System::Drawing::Size(364, 125);
			this->dg_SPjsprzedaze->TabIndex = 7;
			this->dg_SPjsprzedaze->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_sprzedaze::dg_SPjsprzedaze_CellClick);
			this->dg_SPjsprzedaze->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_sprzedaze::dg_SPjsprzedaze_CellContentClick);
			// 
			// txt_SPcena
			// 
			this->txt_SPcena->Location = System::Drawing::Point(25, 237);
			this->txt_SPcena->Name = L"txt_SPcena";
			this->txt_SPcena->Size = System::Drawing::Size(107, 20);
			this->txt_SPcena->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 221);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Cena";
			// 
			// btn_SPdodaj
			// 
			this->btn_SPdodaj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_SPdodaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_SPdodaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_SPdodaj->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_SPdodaj->Location = System::Drawing::Point(177, 229);
			this->btn_SPdodaj->Name = L"btn_SPdodaj";
			this->btn_SPdodaj->Size = System::Drawing::Size(94, 33);
			this->btn_SPdodaj->TabIndex = 10;
			this->btn_SPdodaj->Text = L"Dodaj";
			this->btn_SPdodaj->UseVisualStyleBackColor = false;
			this->btn_SPdodaj->Click += gcnew System::EventHandler(this, &Okno_sprzedaze::btn_SPdodaj_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(484, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Pracownicy";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(484, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Klienci";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(465, 374);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Samochody";
			this->label4->Click += gcnew System::EventHandler(this, &Okno_sprzedaze::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 374);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Sprzedaze";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 6);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Pracownik";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Klient";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Samochód";
			// 
			// btn_SPusun
			// 
			this->btn_SPusun->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->btn_SPusun->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_SPusun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_SPusun->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_SPusun->Location = System::Drawing::Point(177, 268);
			this->btn_SPusun->Name = L"btn_SPusun";
			this->btn_SPusun->Size = System::Drawing::Size(94, 33);
			this->btn_SPusun->TabIndex = 18;
			this->btn_SPusun->Text = L"Usun";
			this->btn_SPusun->UseVisualStyleBackColor = false;
			this->btn_SPusun->Visible = false;
			this->btn_SPusun->Click += gcnew System::EventHandler(this, &Okno_sprzedaze::btn_SPusun_Click);
			// 
			// Okno_sprzedaze
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(834, 561);
			this->Controls->Add(this->btn_SPusun);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_SPdodaj);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_SPcena);
			this->Controls->Add(this->dg_SPjsprzedaze);
			this->Controls->Add(this->dg_SPsamochody);
			this->Controls->Add(this->dg_SPklienci);
			this->Controls->Add(this->dg_SPuzytkownicy);
			this->Controls->Add(this->btn_SPszukaj);
			this->Controls->Add(this->txt_SPsamochod);
			this->Controls->Add(this->txt_SPkilent);
			this->Controls->Add(this->txt_SPuzytkownik);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Okno_sprzedaze";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Okno_sprzedaze";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_SPuzytkownicy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_SPklienci))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_SPsamochody))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_SPjsprzedaze))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: Void pokaz_sprzedaze() 
	{
		
		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie1 = gcnew MySqlCommand("select sprzedaze.sprzedaze_id, uzytkownicy.login, samochody.marka, klienci.imie, klienci.nazwisko, sprzedaze.cena from uzytkownicy  inner join sprzedaze on uzytkownicy.uzytkownik_id=sprzedaze.uzytkownik_id inner join samochody on samochody.samochody_id=sprzedaze.samochod_id inner join klienci on klienci.klient_id=sprzedaze.klient_id;", polaczenie);

		try {
			// wype³nienie datagrida danymi z tabeli uzytkownicy
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie1;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_SPjsprzedaze->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		polaczenie->Close();
		
	
		
	
	}


	private: System::Void btn_SPszukaj_Click(System::Object^ sender, System::EventArgs^ e) {

		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie1 = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, login, pracownik FROM uzytkownicy WHERE concat (imie, nazwisko, login) LIKE '%" + txt_SPuzytkownik->Text + "%' and pracownik=1 ;", polaczenie);

		try {
			// wype³nienie datagrida danymi z tabeli uzytkownicy
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie1;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_SPuzytkownicy->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		polaczenie->Close();
		dg_SPuzytkownicy->Columns[0]->Visible = false;
		
		//dg_SPuzytkownicy->ClearSelection();


		MySqlConnection^ polaczenie2 = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie2 = gcnew MySqlCommand("SELECT samochody_id, marka, model, silnik, numer_VIN, kolor, wyposazenie, opis, ilosc_sztuk FROM samochody WHERE concat (marka, model, silnik, numer_VIN, kolor, wyposazenie, ilosc_sztuk) LIKE '%" + txt_SPsamochod->Text + "%';", polaczenie2);

		try {
			// wype³nienie datagrida danymi z tabeli klienci
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie2;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_SPsamochody->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		polaczenie2->Close();
		dg_SPsamochody->Columns[0]->Visible = false;
		
		dg_SPsamochody->ClearSelection();

		MySqlConnection^ polaczenie3 = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie3 = gcnew MySqlCommand("SELECT klient_id, imie, nazwisko, email, telefon, ulica, numer, kod_pocztowy, miejscowosc FROM klienci WHERE concat (imie, nazwisko, email, telefon, ulica, numer, kod_pocztowy, miejscowosc) LIKE '%" + txt_SPkilent->Text + "%';", polaczenie3);

		try {
			// wype³nienie datagrida danymi z tabeli klienci
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie3;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_SPklienci->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		polaczenie3->Close();
		dg_SPklienci->Columns[0]->Visible = false;
		dg_SPklienci->ClearSelection();
		dg_SPuzytkownicy->Columns[0]->Visible = false;
		pokaz_sprzedaze();
		

	}
private: System::Void dg_SPuzytkownicy_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (Convert::ToUInt32(dg_SPuzytkownicy->Rows[e->RowIndex]->Cells[0]->Value) > 0) {
		id_uzytkownik = Convert::ToUInt32(dg_SPuzytkownicy->Rows[e->RowIndex]->Cells[0]->Value);
	}
	

	
		

}
private: System::Void dg_SPjsprzedaze_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {



}




private: System::Void dg_SPklienci_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (Convert::ToUInt32(dg_SPklienci->Rows[e->RowIndex]->Cells[0]->Value) > 0) {
		id_klient = Convert::ToUInt32(dg_SPklienci->Rows[e->RowIndex]->Cells[0]->Value);
		
	}
}
private: System::Void dg_SPsamochody_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (Convert::ToUInt32(dg_SPsamochody->Rows[e->RowIndex]->Cells[0]->Value) > 0) {
		id_samochod = Convert::ToUInt32(dg_SPsamochody->Rows[e->RowIndex]->Cells[0]->Value);
		
			
	}
}
private: System::Void btn_SPdodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
	MySqlCommand^ polecenie = polaczenie->CreateCommand();
	MySqlTransaction^ transkacja;
	polaczenie->Open();
	transkacja = polaczenie->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = polaczenie;
	polecenie->Transaction = transkacja;

	try {

		polecenie->CommandText = "select * from sql11469083.sprzedaze where uzytkownik_id=" + id_uzytkownik + " and samochod_id=" + id_samochod + " and klient_id=" + id_klient + "; ";
		MySqlDataReader^ wynik_sprzedaz = polecenie->ExecuteReader();
		bool rezultat_sprzedaz = wynik_sprzedaz->HasRows;
		wynik_sprzedaz->Close();
		if (!rezultat_sprzedaz) {


			String^ cena = txt_SPcena->Text->Replace(",", ".");
			polecenie->CommandText = "INSERT INTO sql11469083.sprzedaze SET uzytkownik_id='" + id_uzytkownik + "', samochod_id='" + id_samochod + "', klient_id='" + id_klient + "', cena='" + cena + "';";
			polecenie->ExecuteNonQuery();
			MessageBox::Show("Sprzeda¿ zosta³a dodana od bazy danych");
			transkacja->Commit();
		}
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
		transkacja->Rollback();
	}
	polaczenie->Close();
	pokaz_sprzedaze();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_SPusun_Click(System::Object^ sender, System::EventArgs^ e) {

	MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
	MySqlCommand^ polecenie = polaczenie->CreateCommand();
	MySqlTransaction^ transkacja;
	polaczenie->Open();
	transkacja = polaczenie->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = polaczenie;
	polecenie->Transaction = transkacja;

	try {
		if (MessageBox::Show("Czy na pewno usun¹æ sprzedaz ?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {



			polecenie->CommandText = "DELETE FROM sprzedaze WHERE sprzedaze_id = " + id_sprzedarz + ";";
			polecenie->ExecuteNonQuery();

			


			transkacja->Commit();
			MessageBox::Show("Sprzedaz zosta³a usuniêta z bazy danych");
		}

	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
		transkacja->Rollback();
		transkacja->Rollback();
	}
	polaczenie->Close();
	pokaz_sprzedaze();
	btn_SPusun->Visible = false;
	
	


}
private: System::Void dg_SPjsprzedaze_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	id_sprzedarz = Convert::ToUInt32(dg_SPjsprzedaze->Rows[e->RowIndex]->Cells[0]->Value);
	btn_SPusun->Visible = true;

}
};
}
