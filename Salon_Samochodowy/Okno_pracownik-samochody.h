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

	/// <summary>
	/// Podsumowanie informacji o Okno_pracowniksamochody
	/// </summary>
	public ref class Okno_pracowniksamochody : public System::Windows::Forms::Form
	{
	public:

		int id_sprzedawcy;
		int id_samochodu;

		Okno_pracowniksamochody(void)
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
		~Okno_pracowniksamochody()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dg_sprzedawcy;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dg_samochody;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dg_przypisaneSamochody;
	private: System::Windows::Forms::Button^ btn_szukaj;
	private: System::Windows::Forms::TextBox^ txt_szukaj;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_nazwisko;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_imie;



	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dg_sprzedawcy = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dg_samochody = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dg_przypisaneSamochody = (gcnew System::Windows::Forms::DataGridView());
			this->btn_szukaj = (gcnew System::Windows::Forms::Button());
			this->txt_szukaj = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_imie = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_sprzedawcy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_samochody))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_przypisaneSamochody))->BeginInit();
			this->SuspendLayout();
			// 
			// dg_sprzedawcy
			// 
			this->dg_sprzedawcy->AllowUserToAddRows = false;
			this->dg_sprzedawcy->AllowUserToDeleteRows = false;
			this->dg_sprzedawcy->AllowUserToResizeRows = false;
			this->dg_sprzedawcy->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dg_sprzedawcy->BackgroundColor = System::Drawing::Color::White;
			this->dg_sprzedawcy->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_sprzedawcy->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_sprzedawcy->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
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
			this->dg_sprzedawcy->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dg_sprzedawcy->ColumnHeadersHeight = 30;
			this->dg_sprzedawcy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
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
			this->dg_sprzedawcy->DefaultCellStyle = dataGridViewCellStyle2;
			this->dg_sprzedawcy->EnableHeadersVisualStyles = false;
			this->dg_sprzedawcy->GridColor = System::Drawing::Color::White;
			this->dg_sprzedawcy->Location = System::Drawing::Point(429, 40);
			this->dg_sprzedawcy->Name = L"dg_sprzedawcy";
			this->dg_sprzedawcy->ReadOnly = true;
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
			this->dg_sprzedawcy->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dg_sprzedawcy->RowHeadersVisible = false;
			this->dg_sprzedawcy->RowHeadersWidth = 40;
			this->dg_sprzedawcy->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dg_sprzedawcy->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dg_sprzedawcy->Size = System::Drawing::Size(393, 235);
			this->dg_sprzedawcy->TabIndex = 36;
			this->dg_sprzedawcy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_pracowniksamochody::dg_sprzedawcy_CellClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(424, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 28);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Sprzedawca";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(6, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 28);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Dostêpne samochody";
			// 
			// dg_samochody
			// 
			this->dg_samochody->AllowUserToAddRows = false;
			this->dg_samochody->AllowUserToDeleteRows = false;
			this->dg_samochody->AllowUserToResizeRows = false;
			this->dg_samochody->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dg_samochody->BackgroundColor = System::Drawing::Color::White;
			this->dg_samochody->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_samochody->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_samochody->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_samochody->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dg_samochody->ColumnHeadersHeight = 30;
			this->dg_samochody->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Poppins", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(249)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dg_samochody->DefaultCellStyle = dataGridViewCellStyle5;
			this->dg_samochody->EnableHeadersVisualStyles = false;
			this->dg_samochody->GridColor = System::Drawing::Color::White;
			this->dg_samochody->Location = System::Drawing::Point(12, 314);
			this->dg_samochody->Name = L"dg_samochody";
			this->dg_samochody->ReadOnly = true;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_samochody->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dg_samochody->RowHeadersVisible = false;
			this->dg_samochody->RowHeadersWidth = 40;
			this->dg_samochody->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dg_samochody->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dg_samochody->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dg_samochody->Size = System::Drawing::Size(393, 235);
			this->dg_samochody->TabIndex = 38;
			this->dg_samochody->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_pracowniksamochody::dg_samochody_CellClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(424, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(324, 28);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Samochody przypisane do sprzedawcy";
			// 
			// dg_przypisaneSamochody
			// 
			this->dg_przypisaneSamochody->AllowUserToAddRows = false;
			this->dg_przypisaneSamochody->AllowUserToDeleteRows = false;
			this->dg_przypisaneSamochody->AllowUserToResizeRows = false;
			this->dg_przypisaneSamochody->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dg_przypisaneSamochody->BackgroundColor = System::Drawing::Color::White;
			this->dg_przypisaneSamochody->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_przypisaneSamochody->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_przypisaneSamochody->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_przypisaneSamochody->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dg_przypisaneSamochody->ColumnHeadersHeight = 30;
			this->dg_przypisaneSamochody->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Poppins", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(249)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dg_przypisaneSamochody->DefaultCellStyle = dataGridViewCellStyle8;
			this->dg_przypisaneSamochody->EnableHeadersVisualStyles = false;
			this->dg_przypisaneSamochody->GridColor = System::Drawing::Color::White;
			this->dg_przypisaneSamochody->Location = System::Drawing::Point(429, 314);
			this->dg_przypisaneSamochody->Name = L"dg_przypisaneSamochody";
			this->dg_przypisaneSamochody->ReadOnly = true;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dg_przypisaneSamochody->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dg_przypisaneSamochody->RowHeadersVisible = false;
			this->dg_przypisaneSamochody->RowHeadersWidth = 40;
			this->dg_przypisaneSamochody->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dg_przypisaneSamochody->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dg_przypisaneSamochody->Size = System::Drawing::Size(393, 235);
			this->dg_przypisaneSamochody->TabIndex = 40;
			this->dg_przypisaneSamochody->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno_pracowniksamochody::dg_przypisaneSamochody_CellClick);
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
			this->btn_szukaj->Location = System::Drawing::Point(260, 6);
			this->btn_szukaj->Name = L"btn_szukaj";
			this->btn_szukaj->Size = System::Drawing::Size(145, 31);
			this->btn_szukaj->TabIndex = 43;
			this->btn_szukaj->Text = L"Szukaj";
			this->btn_szukaj->UseVisualStyleBackColor = false;
			this->btn_szukaj->Click += gcnew System::EventHandler(this, &Okno_pracowniksamochody::btn_szukaj_Click);
			// 
			// txt_szukaj
			// 
			this->txt_szukaj->BackColor = System::Drawing::SystemColors::Window;
			this->txt_szukaj->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_szukaj->ForeColor = System::Drawing::Color::Gray;
			this->txt_szukaj->Location = System::Drawing::Point(12, 6);
			this->txt_szukaj->Name = L"txt_szukaj";
			this->txt_szukaj->Size = System::Drawing::Size(242, 31);
			this->txt_szukaj->TabIndex = 42;
			this->txt_szukaj->Text = L"Wpisz dane sprzedawcy";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(14, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 28);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Nazwisko";
			// 
			// txt_nazwisko
			// 
			this->txt_nazwisko->BackColor = System::Drawing::SystemColors::Window;
			this->txt_nazwisko->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_nazwisko->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_nazwisko->Location = System::Drawing::Point(104, 99);
			this->txt_nazwisko->Name = L"txt_nazwisko";
			this->txt_nazwisko->Size = System::Drawing::Size(301, 31);
			this->txt_nazwisko->TabIndex = 46;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(52, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 28);
			this->label5->TabIndex = 45;
			this->label5->Text = L"Imie";
			// 
			// txt_imie
			// 
			this->txt_imie->BackColor = System::Drawing::SystemColors::Window;
			this->txt_imie->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_imie->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_imie->Location = System::Drawing::Point(104, 62);
			this->txt_imie->Name = L"txt_imie";
			this->txt_imie->Size = System::Drawing::Size(301, 31);
			this->txt_imie->TabIndex = 44;
			// 
			// Okno_pracowniksamochody
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(834, 561);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_nazwisko);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_imie);
			this->Controls->Add(this->btn_szukaj);
			this->Controls->Add(this->txt_szukaj);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dg_przypisaneSamochody);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dg_samochody);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dg_sprzedawcy);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Okno_pracowniksamochody";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Okno_pracowniksamochody";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_sprzedawcy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_samochody))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_przypisaneSamochody))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void odswiez_przypisane_samochody() {
		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ komenda = gcnew MySqlCommand("SELECT samochody.samochody_id, samochody.marka, samochody.model, samochody.silnik, samochody.kolor, samochody.wyposazenie FROM  sql11469083.uzytkownicy_samochody, sql11469083.samochody WHERE uzytkownicy_samochody.samochody_id = samochody.samochody_id and uzytkownicy_samochody.uzytkownik_id = " + id_sprzedawcy + ";", polaczenie);


		try {
			// wype³nienie datagrida danymi z tabeli
			polaczenie->Open();
			MySqlDataAdapter^ adapter_danych = gcnew MySqlDataAdapter();
			adapter_danych->SelectCommand = komenda;
			DataTable^ tabela = gcnew DataTable();
			adapter_danych->Fill(tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = tabela;
			dg_przypisaneSamochody->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}

		dg_przypisaneSamochody->Columns[0]->Visible = false;
		dg_przypisaneSamochody->ClearSelection();
	}

	private: System::Void btn_szukaj_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_szukaj->Text == "Wpisz dane sprzedawcy")
			txt_szukaj->Text = "";

		Poloczenie::odswiez_datagird(dg_sprzedawcy, "SELECT uzytkownik_id, imie, nazwisko FROM uzytkownicy WHERE pracownik = 1;");
	}

	private: System::Void dg_sprzedawcy_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			id_sprzedawcy = Convert::ToUInt32(dg_sprzedawcy->Rows[e->RowIndex]->Cells[0]->Value);
			txt_imie->Text = dg_sprzedawcy->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
			txt_nazwisko->Text = dg_sprzedawcy->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();

			Poloczenie::odswiez_datagird(dg_samochody, "SELECT samochody_id, marka, model, silnik, kolor, wyposazenie from samochody");
			odswiez_przypisane_samochody();
		}
	}
	private: System::Void dg_samochody_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		id_samochodu = Convert::ToInt32(dg_samochody->Rows[e->RowIndex]->Cells[0]->Value);

		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = polaczenie->CreateCommand();
		MySqlTransaction^ transkacja;
		polaczenie->Open();
		transkacja = polaczenie->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = polaczenie;
		polecenie->Transaction = transkacja;

		try {

			polecenie->CommandText = "SELECT * FROM uzytkownicy_samochody WHERE uzytkownik_id = " + id_sprzedawcy + " AND samochody_id = " + id_samochodu + ";";
			MySqlDataReader^ wynik = polecenie->ExecuteReader();
			bool rezultat = wynik->HasRows;
			wynik->Close();

			if (rezultat == false) {

				polecenie->CommandText = "INSERT INTO uzytkownicy_samochody SET uzytkownik_id = " + id_sprzedawcy + ", samochody_id = " + id_samochodu + ";";
				polecenie->ExecuteNonQuery();
				MessageBox::Show("Sprzedawca zosta³ dodany od samochodu");

			}
			else if (rezultat == true) {
				MessageBox::Show("Dany samochód ju¿ jest obs³ugiwany przez tego sprzedawce");
			}
			transkacja->Commit();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transkacja->Rollback();
		}
		polaczenie->Close();
		odswiez_przypisane_samochody();
	}
	private: System::Void dg_przypisaneSamochody_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ polecenie = polaczenie->CreateCommand();
		MySqlTransaction^ transkacja;
		polaczenie->Open();
		transkacja = polaczenie->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = polaczenie;
		polecenie->Transaction = transkacja;

		try {
			if (MessageBox::Show("Czy na pewno usun¹æ samochód?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

				polecenie->CommandText = "DELETE FROM sql11469083.uzytkownicy_samochody WHERE uzytkownicy_samochody.uzytkownik_id = " + id_sprzedawcy + " and uzytkownicy_samochody.samochody_id = " + id_samochodu + ";";
				polecenie->ExecuteNonQuery();


				transkacja->Commit();
				MessageBox::Show("Samochód zosta³ usuniêty z bazy danych");
			}

		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transkacja->Rollback();
			transkacja->Rollback();
		}
		polaczenie->Close();
		odswiez_przypisane_samochody();
	}
	};
}
