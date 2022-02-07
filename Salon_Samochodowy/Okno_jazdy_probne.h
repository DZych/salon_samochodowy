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
	/// Podsumowanie informacji o Okno_jazdy_probne
	/// </summary>
	public ref class Okno_jazdy_probne : public System::Windows::Forms::Form
	{
	public:
		int id_rekordu;
		int id_uzytkownik;
		int id_samochod;
	
	public:

	public:

	public:
		int id_klient;
		Okno_jazdy_probne(void)
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
		~Okno_jazdy_probne()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_JPdata;
	private: System::Windows::Forms::DataGridView^ dg_JPuzytkownicy;
	private: System::Windows::Forms::DataGridView^ dg_JPklienci;
	private: System::Windows::Forms::DataGridView^ dg_JPsamochody;
	private: System::Windows::Forms::DataGridView^ dg_JPjazdyprobne;
	protected:




	private: System::Windows::Forms::Button^ btn_JPszukaj;

	private: System::Windows::Forms::TextBox^ txt_JPuzytkownik;
	private: System::Windows::Forms::TextBox^ txt_JPklient;
	private: System::Windows::Forms::TextBox^ txt_JPsamochod;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btn_JPdodaj;
	protected:

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dg_JPuzytkownicy = (gcnew System::Windows::Forms::DataGridView());
			this->dg_JPklienci = (gcnew System::Windows::Forms::DataGridView());
			this->dg_JPsamochody = (gcnew System::Windows::Forms::DataGridView());
			this->dg_JPjazdyprobne = (gcnew System::Windows::Forms::DataGridView());
			this->btn_JPszukaj = (gcnew System::Windows::Forms::Button());
			this->txt_JPuzytkownik = (gcnew System::Windows::Forms::TextBox());
			this->txt_JPklient = (gcnew System::Windows::Forms::TextBox());
			this->txt_JPsamochod = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_JPdodaj = (gcnew System::Windows::Forms::Button());
			this->txt_JPdata = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_JPuzytkownicy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_JPklienci))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_JPsamochody))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_JPjazdyprobne))->BeginInit();
			this->SuspendLayout();
			// 
			// dg_JPuzytkownicy
			// 
			this->dg_JPuzytkownicy->BackgroundColor = System::Drawing::Color::White;
			this->dg_JPuzytkownicy->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_JPuzytkownicy->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_JPuzytkownicy->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_JPuzytkownicy->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dg_JPuzytkownicy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_JPuzytkownicy->EnableHeadersVisualStyles = false;
			this->dg_JPuzytkownicy->GridColor = System::Drawing::Color::White;
			this->dg_JPuzytkownicy->Location = System::Drawing::Point(480, 25);
			this->dg_JPuzytkownicy->Name = L"dg_JPuzytkownicy";
			this->dg_JPuzytkownicy->RowHeadersVisible = false;
			this->dg_JPuzytkownicy->Size = System::Drawing::Size(320, 125);
			this->dg_JPuzytkownicy->TabIndex = 5;
			this->dg_JPuzytkownicy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_jazdy_probne::dg_JPuzytkownicy_CellClick);
			// 
			// dg_JPklienci
			// 
			this->dg_JPklienci->BackgroundColor = System::Drawing::Color::White;
			this->dg_JPklienci->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_JPklienci->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_JPklienci->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_JPklienci->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dg_JPklienci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dg_JPklienci->DefaultCellStyle = dataGridViewCellStyle10;
			this->dg_JPklienci->EnableHeadersVisualStyles = false;
			this->dg_JPklienci->GridColor = System::Drawing::Color::White;
			this->dg_JPklienci->Location = System::Drawing::Point(480, 203);
			this->dg_JPklienci->Name = L"dg_JPklienci";
			this->dg_JPklienci->RowHeadersVisible = false;
			this->dg_JPklienci->Size = System::Drawing::Size(320, 125);
			this->dg_JPklienci->TabIndex = 6;
			this->dg_JPklienci->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_jazdy_probne::dg_JPklienci_CellClick);
			// 
			// dg_JPsamochody
			// 
			this->dg_JPsamochody->BackgroundColor = System::Drawing::Color::White;
			this->dg_JPsamochody->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_JPsamochody->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_JPsamochody->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_JPsamochody->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->dg_JPsamochody->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dg_JPsamochody->DefaultCellStyle = dataGridViewCellStyle12;
			this->dg_JPsamochody->EnableHeadersVisualStyles = false;
			this->dg_JPsamochody->GridColor = System::Drawing::Color::White;
			this->dg_JPsamochody->Location = System::Drawing::Point(480, 409);
			this->dg_JPsamochody->Name = L"dg_JPsamochody";
			this->dg_JPsamochody->RowHeadersVisible = false;
			this->dg_JPsamochody->Size = System::Drawing::Size(320, 125);
			this->dg_JPsamochody->TabIndex = 7;
			this->dg_JPsamochody->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_jazdy_probne::dg_JPsamochody_CellClick);
			// 
			// dg_JPjazdyprobne
			// 
			this->dg_JPjazdyprobne->BackgroundColor = System::Drawing::Color::White;
			this->dg_JPjazdyprobne->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_JPjazdyprobne->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_JPjazdyprobne->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_JPjazdyprobne->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->dg_JPjazdyprobne->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle14->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dg_JPjazdyprobne->DefaultCellStyle = dataGridViewCellStyle14;
			this->dg_JPjazdyprobne->EnableHeadersVisualStyles = false;
			this->dg_JPjazdyprobne->GridColor = System::Drawing::Color::White;
			this->dg_JPjazdyprobne->Location = System::Drawing::Point(23, 409);
			this->dg_JPjazdyprobne->Name = L"dg_JPjazdyprobne";
			this->dg_JPjazdyprobne->RowHeadersVisible = false;
			this->dg_JPjazdyprobne->Size = System::Drawing::Size(320, 125);
			this->dg_JPjazdyprobne->TabIndex = 8;
			// 
			// btn_JPszukaj
			// 
			this->btn_JPszukaj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_JPszukaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_JPszukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_JPszukaj->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_JPszukaj->Location = System::Drawing::Point(215, 12);
			this->btn_JPszukaj->Name = L"btn_JPszukaj";
			this->btn_JPszukaj->Size = System::Drawing::Size(94, 33);
			this->btn_JPszukaj->TabIndex = 9;
			this->btn_JPszukaj->Text = L"Szukaj";
			this->btn_JPszukaj->UseVisualStyleBackColor = false;
			this->btn_JPszukaj->Click += gcnew System::EventHandler(this, &Okno_jazdy_probne::btn_JPszukaj_Click);
			// 
			// txt_JPuzytkownik
			// 
			this->txt_JPuzytkownik->Location = System::Drawing::Point(75, 12);
			this->txt_JPuzytkownik->Name = L"txt_JPuzytkownik";
			this->txt_JPuzytkownik->Size = System::Drawing::Size(125, 20);
			this->txt_JPuzytkownik->TabIndex = 10;
			// 
			// txt_JPklient
			// 
			this->txt_JPklient->Location = System::Drawing::Point(75, 38);
			this->txt_JPklient->Name = L"txt_JPklient";
			this->txt_JPklient->Size = System::Drawing::Size(125, 20);
			this->txt_JPklient->TabIndex = 15;
			// 
			// txt_JPsamochod
			// 
			this->txt_JPsamochod->Location = System::Drawing::Point(75, 64);
			this->txt_JPsamochod->Name = L"txt_JPsamochod";
			this->txt_JPsamochod->Size = System::Drawing::Size(125, 20);
			this->txt_JPsamochod->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Ustaw date jazdy";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Pracownik";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Klient";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Samochód";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(477, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Pracownicy";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(477, 187);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Klienci";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(477, 393);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Samochody";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 393);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Jazdy probne";
			// 
			// btn_JPdodaj
			// 
			this->btn_JPdodaj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_JPdodaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_JPdodaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_JPdodaj->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_JPdodaj->Location = System::Drawing::Point(12, 213);
			this->btn_JPdodaj->Name = L"btn_JPdodaj";
			this->btn_JPdodaj->Size = System::Drawing::Size(94, 33);
			this->btn_JPdodaj->TabIndex = 25;
			this->btn_JPdodaj->Text = L"Dodaj";
			this->btn_JPdodaj->UseVisualStyleBackColor = false;
			this->btn_JPdodaj->Click += gcnew System::EventHandler(this, &Okno_jazdy_probne::btn_JPdodaj_Click);
			// 
			// txt_JPdata
			// 
			this->txt_JPdata->Location = System::Drawing::Point(12, 187);
			this->txt_JPdata->Name = L"txt_JPdata";
			this->txt_JPdata->Size = System::Drawing::Size(176, 20);
			this->txt_JPdata->TabIndex = 26;
			// 
			// Okno_jazdy_probne
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(834, 561);
			this->Controls->Add(this->txt_JPdata);
			this->Controls->Add(this->btn_JPdodaj);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_JPsamochod);
			this->Controls->Add(this->txt_JPklient);
			this->Controls->Add(this->txt_JPuzytkownik);
			this->Controls->Add(this->btn_JPszukaj);
			this->Controls->Add(this->dg_JPjazdyprobne);
			this->Controls->Add(this->dg_JPsamochody);
			this->Controls->Add(this->dg_JPklienci);
			this->Controls->Add(this->dg_JPuzytkownicy);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Okno_jazdy_probne";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Okno_jazdy_probne";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_JPuzytkownicy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_JPklienci))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_JPsamochody))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_JPjazdyprobne))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: Void pokaz_jazdyProbne()
		{
			
			MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
			MySqlCommand^ zapytanie1 = gcnew MySqlCommand("select uzytkownicy.login, samochody.marka,samochody.model, klienci.imie, klienci.nazwisko, jazda_probna.termin from uzytkownicy  inner join jazda_probna on uzytkownicy.uzytkownik_id=jazda_probna.uzytkownik_id inner join samochody on samochody.samochody_id=jazda_probna.samochod_id inner join klienci on klienci.klient_id=jazda_probna.klient_id;", polaczenie);

			try {
				// wype³nienie datagrida danymi z tabeli uzytkownicy
				polaczenie->Open();
				MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
				Adapter_danych->SelectCommand = zapytanie1;
				DataTable^ Uzytkownicy_tabela = gcnew DataTable();
				Adapter_danych->Fill(Uzytkownicy_tabela);
				BindingSource^ zrodloSalon = gcnew BindingSource();
				zrodloSalon->DataSource = Uzytkownicy_tabela;
				dg_JPjazdyprobne->DataSource = zrodloSalon;
				polaczenie->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			polaczenie->Close();
			dg_JPuzytkownicy->Columns[0]->Visible = false;



		}
	private: System::Void btn_JPszukaj_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie1 = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, login, pracownik FROM uzytkownicy WHERE concat (imie, nazwisko, login) LIKE '%" + txt_JPuzytkownik->Text + "%' and pracownik=1 ;", polaczenie);

		try {
			// wype³nienie datagrida danymi z tabeli uzytkownicy
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie1;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_JPuzytkownicy->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		polaczenie->Close();
		dg_JPuzytkownicy->Columns[0]->Visible = false;
		//dg_SPuzytkownicy->ClearSelection();


		MySqlConnection^ polaczenie2 = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie2 = gcnew MySqlCommand("SELECT samochody_id, marka, model, silnik, numer_VIN, kolor, wyposazenie, opis, ilosc_sztuk FROM samochody WHERE concat (marka, model, silnik, numer_VIN, kolor, wyposazenie, ilosc_sztuk) LIKE '%" + txt_JPsamochod->Text + "%';", polaczenie2);

		try {
			// wype³nienie datagrida danymi z tabeli klienci
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie2;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_JPsamochody->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		polaczenie2->Close();
		dg_JPsamochody->Columns[0]->Visible = false;

		dg_JPsamochody->ClearSelection();

		MySqlConnection^ polaczenie3 = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie3 = gcnew MySqlCommand("SELECT klient_id, imie, nazwisko, email, telefon, ulica, numer, kod_pocztowy, miejscowosc FROM klienci WHERE concat (imie, nazwisko, email, telefon, ulica, numer, kod_pocztowy, miejscowosc) LIKE '%" + txt_JPklient->Text + "%';", polaczenie3);

		try {
			// wype³nienie datagrida danymi z tabeli klienci
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie3;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_JPklienci->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		polaczenie3->Close();
		dg_JPklienci->Columns[0]->Visible = false;
		dg_JPklienci->ClearSelection();
		pokaz_jazdyProbne();




		
	}
private: System::Void btn_JPdodaj_Click(System::Object^ sender, System::EventArgs^ e) {

	
	

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


			
			polecenie->CommandText = "INSERT INTO sql11469083.jazda_probna SET uzytkownik_id='" + id_uzytkownik + "', samochod_id='" + id_samochod + "', klient_id='" + id_klient + "', termin='" +txt_JPdata->Text  + "';";
			polecenie->ExecuteNonQuery();
			MessageBox::Show("Jazda próbna zosta³a dodana od bazy danych");
			transkacja->Commit();
		}
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
		transkacja->Rollback();
	}
	polaczenie->Close();
	pokaz_jazdyProbne();

}
private: System::Void dg_JPuzytkownicy_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (Convert::ToUInt32(dg_JPuzytkownicy->Rows[e->RowIndex]->Cells[0]->Value) > 0) {
		id_uzytkownik = Convert::ToUInt32(dg_JPuzytkownicy->Rows[e->RowIndex]->Cells[0]->Value);
	}
}
private: System::Void dg_JPklienci_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (Convert::ToUInt32(dg_JPklienci->Rows[e->RowIndex]->Cells[0]->Value) > 0) {
		id_klient = Convert::ToUInt32(dg_JPklienci->Rows[e->RowIndex]->Cells[0]->Value);

	}

}
private: System::Void dg_JPsamochody_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (Convert::ToUInt32(dg_JPsamochody->Rows[e->RowIndex]->Cells[0]->Value) > 0) {
		id_samochod = Convert::ToUInt32(dg_JPsamochody->Rows[e->RowIndex]->Cells[0]->Value);
	}
}
};
}
