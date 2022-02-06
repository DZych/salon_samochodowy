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
	/// Podsumowanie informacji o Okno_klienci
	/// </summary>
	public ref class Okno_klienci : public System::Windows::Forms::Form
	{
	public:
		Okno_klienci(void)
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
		~Okno_klienci()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txt_imie;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_nazwisko;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_email;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_nrTelefonu;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_ulica;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_nrLokalu;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_kodPocztowy;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_miejscowosc;

	private: System::Windows::Forms::Button^ btn_edytuj;
	private: System::Windows::Forms::Button^ btn_usun;
	private: System::Windows::Forms::Button^ btn_dodaj;
	private: System::Windows::Forms::DataGridView^ dg_klienci;

	private: System::Windows::Forms::Button^ btn_szukaj;
	private: System::Windows::Forms::TextBox^ txt_szukaj;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_imie = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_email = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_nrTelefonu = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_ulica = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_nrLokalu = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_kodPocztowy = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_miejscowosc = (gcnew System::Windows::Forms::TextBox());
			this->btn_edytuj = (gcnew System::Windows::Forms::Button());
			this->btn_usun = (gcnew System::Windows::Forms::Button());
			this->btn_dodaj = (gcnew System::Windows::Forms::Button());
			this->dg_klienci = (gcnew System::Windows::Forms::DataGridView());
			this->btn_szukaj = (gcnew System::Windows::Forms::Button());
			this->txt_szukaj = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_klienci))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(53, 386);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 28);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Imie";
			// 
			// txt_imie
			// 
			this->txt_imie->BackColor = System::Drawing::SystemColors::Window;
			this->txt_imie->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_imie->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_imie->Location = System::Drawing::Point(105, 383);
			this->txt_imie->Name = L"txt_imie";
			this->txt_imie->Size = System::Drawing::Size(150, 31);
			this->txt_imie->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(15, 423);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 28);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Nazwisko";
			// 
			// txt_nazwisko
			// 
			this->txt_nazwisko->BackColor = System::Drawing::SystemColors::Window;
			this->txt_nazwisko->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_nazwisko->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_nazwisko->Location = System::Drawing::Point(105, 420);
			this->txt_nazwisko->Name = L"txt_nazwisko";
			this->txt_nazwisko->Size = System::Drawing::Size(150, 31);
			this->txt_nazwisko->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(44, 460);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 28);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Email";
			// 
			// txt_email
			// 
			this->txt_email->BackColor = System::Drawing::SystemColors::Window;
			this->txt_email->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_email->Location = System::Drawing::Point(105, 457);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(150, 31);
			this->txt_email->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(266, 386);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 28);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Nr. Telefonu";
			// 
			// txt_nrTelefonu
			// 
			this->txt_nrTelefonu->BackColor = System::Drawing::SystemColors::Window;
			this->txt_nrTelefonu->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_nrTelefonu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_nrTelefonu->Location = System::Drawing::Point(376, 383);
			this->txt_nrTelefonu->Name = L"txt_nrTelefonu";
			this->txt_nrTelefonu->Size = System::Drawing::Size(150, 31);
			this->txt_nrTelefonu->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(318, 423);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 28);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Ulica";
			// 
			// txt_ulica
			// 
			this->txt_ulica->BackColor = System::Drawing::SystemColors::Window;
			this->txt_ulica->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_ulica->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_ulica->Location = System::Drawing::Point(376, 420);
			this->txt_ulica->Name = L"txt_ulica";
			this->txt_ulica->Size = System::Drawing::Size(150, 31);
			this->txt_ulica->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(287, 460);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 28);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Nr. lokalu";
			// 
			// txt_nrLokalu
			// 
			this->txt_nrLokalu->BackColor = System::Drawing::SystemColors::Window;
			this->txt_nrLokalu->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_nrLokalu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_nrLokalu->Location = System::Drawing::Point(376, 457);
			this->txt_nrLokalu->Name = L"txt_nrLokalu";
			this->txt_nrLokalu->Size = System::Drawing::Size(150, 31);
			this->txt_nrLokalu->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(540, 386);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 28);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Kod pocztowy";
			// 
			// txt_kodPocztowy
			// 
			this->txt_kodPocztowy->BackColor = System::Drawing::SystemColors::Window;
			this->txt_kodPocztowy->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_kodPocztowy->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_kodPocztowy->Location = System::Drawing::Point(669, 383);
			this->txt_kodPocztowy->Name = L"txt_kodPocztowy";
			this->txt_kodPocztowy->Size = System::Drawing::Size(150, 31);
			this->txt_kodPocztowy->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(550, 423);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 28);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Miejscowoœæ";
			// 
			// txt_miejscowosc
			// 
			this->txt_miejscowosc->BackColor = System::Drawing::SystemColors::Window;
			this->txt_miejscowosc->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_miejscowosc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_miejscowosc->Location = System::Drawing::Point(669, 420);
			this->txt_miejscowosc->Name = L"txt_miejscowosc";
			this->txt_miejscowosc->Size = System::Drawing::Size(150, 31);
			this->txt_miejscowosc->TabIndex = 30;
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
			this->btn_edytuj->TabIndex = 34;
			this->btn_edytuj->Text = L"Edytuj";
			this->btn_edytuj->UseVisualStyleBackColor = false;
			this->btn_edytuj->Visible = false;
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
			this->btn_usun->TabIndex = 33;
			this->btn_usun->Text = L"Usuñ";
			this->btn_usun->UseVisualStyleBackColor = false;
			this->btn_usun->Visible = false;
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
			this->btn_dodaj->TabIndex = 32;
			this->btn_dodaj->Text = L"Dodaj";
			this->btn_dodaj->UseVisualStyleBackColor = false;
			// 
			// dg_klienci
			// 
			this->dg_klienci->AllowUserToAddRows = false;
			this->dg_klienci->AllowUserToDeleteRows = false;
			this->dg_klienci->AllowUserToResizeRows = false;
			this->dg_klienci->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dg_klienci->BackgroundColor = System::Drawing::Color::White;
			this->dg_klienci->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dg_klienci->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dg_klienci->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
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
			this->dg_klienci->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dg_klienci->ColumnHeadersHeight = 30;
			this->dg_klienci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
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
			this->dg_klienci->DefaultCellStyle = dataGridViewCellStyle5;
			this->dg_klienci->EnableHeadersVisualStyles = false;
			this->dg_klienci->GridColor = System::Drawing::Color::White;
			this->dg_klienci->Location = System::Drawing::Point(12, 49);
			this->dg_klienci->Name = L"dg_klienci";
			this->dg_klienci->ReadOnly = true;
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
			this->dg_klienci->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dg_klienci->RowHeadersVisible = false;
			this->dg_klienci->RowHeadersWidth = 40;
			this->dg_klienci->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dg_klienci->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dg_klienci->Size = System::Drawing::Size(807, 328);
			this->dg_klienci->TabIndex = 35;
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
			this->btn_szukaj->TabIndex = 37;
			this->btn_szukaj->Text = L"Szukaj";
			this->btn_szukaj->UseVisualStyleBackColor = false;
			this->btn_szukaj->Click += gcnew System::EventHandler(this, &Okno_klienci::btn_szukaj_Click);
			// 
			// txt_szukaj
			// 
			this->txt_szukaj->BackColor = System::Drawing::SystemColors::Window;
			this->txt_szukaj->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_szukaj->ForeColor = System::Drawing::Color::Gray;
			this->txt_szukaj->Location = System::Drawing::Point(12, 12);
			this->txt_szukaj->Name = L"txt_szukaj";
			this->txt_szukaj->Size = System::Drawing::Size(651, 31);
			this->txt_szukaj->TabIndex = 36;
			this->txt_szukaj->Text = L"Wpisz dane klienta";
			// 
			// Okno_klienci
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(834, 561);
			this->Controls->Add(this->btn_szukaj);
			this->Controls->Add(this->txt_szukaj);
			this->Controls->Add(this->dg_klienci);
			this->Controls->Add(this->btn_edytuj);
			this->Controls->Add(this->btn_usun);
			this->Controls->Add(this->btn_dodaj);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_miejscowosc);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_kodPocztowy);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_nrLokalu);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_ulica);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_nrTelefonu);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_email);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_nazwisko);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_imie);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Okno_klienci";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Okno_klienci";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_klienci))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_szukaj_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txt_szukaj->Text == "Wpisz dane klienta")
			txt_szukaj->Text = "";

		// Mo¿na tutaj wstawiæ funkcje odœwie¿ dataGrid() z opcjonalnym argumentem, który by³bym zapytaniem. 

		MySqlConnection^ polaczenie = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT klient_id, imie, nazwisko, email, telefon, ulica, numer, kod_pocztowy, miejscowosc FROM klienci WHERE concat (imie, nazwisko, email, telefon, ulica, numer, kod_pocztowy, miejscowosc) LIKE '%" + txt_szukaj->Text + "%';", polaczenie);

		try {
			// wype³nienie datagrida danymi z tabeli klienci
			polaczenie->Open();
			MySqlDataAdapter^ Adapter_danych = gcnew MySqlDataAdapter();
			Adapter_danych->SelectCommand = zapytanie;
			DataTable^ Uzytkownicy_tabela = gcnew DataTable();
			Adapter_danych->Fill(Uzytkownicy_tabela);
			BindingSource^ zrodloSalon = gcnew BindingSource();
			zrodloSalon->DataSource = Uzytkownicy_tabela;
			dg_klienci->DataSource = zrodloSalon;
			polaczenie->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		polaczenie->Close();
		dg_klienci->Columns[0]->Visible = false;
	}
};
}
