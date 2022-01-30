#pragma once

#include "Okno_uzytkownicy.h"
#include "Okno_zmiana_hasla.h"
#include "Okno_klienci.h"
#include "Okno_samochody.h"
#include "Okno_pracownik-samochody.h"
#include "Okno_jazdy_probne.h"
#include "Okno_sprzedaze.h"

namespace SalonSamochodowy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Okno_glowne
	/// </summary>
	public ref class Okno_glowne : public System::Windows::Forms::Form
	{
	public:
		Okno_glowne(void)
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
		~Okno_glowne()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_menu;
	private: System::Windows::Forms::Button^ btn_sprzedaze;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btn_jazdyProbne;

	private: System::Windows::Forms::Button^ btn_pracownikSamochody;

	private: System::Windows::Forms::Button^ btn_samochody;

	private: System::Windows::Forms::Button^ btn_klienci;

	private: System::Windows::Forms::Button^ btn_zmiana_hasla;

	private: System::Windows::Forms::Button^ btn_uzytkownicy;

	private: System::Windows::Forms::Panel^ panel_Logo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel_glowny;
	private: System::Windows::Forms::Label^ label3;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Okno_glowne::typeid));
			this->panel_menu = (gcnew System::Windows::Forms::Panel());
			this->btn_sprzedaze = (gcnew System::Windows::Forms::Button());
			this->btn_jazdyProbne = (gcnew System::Windows::Forms::Button());
			this->btn_pracownikSamochody = (gcnew System::Windows::Forms::Button());
			this->btn_samochody = (gcnew System::Windows::Forms::Button());
			this->btn_klienci = (gcnew System::Windows::Forms::Button());
			this->btn_zmiana_hasla = (gcnew System::Windows::Forms::Button());
			this->btn_uzytkownicy = (gcnew System::Windows::Forms::Button());
			this->panel_Logo = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_glowny = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel_menu->SuspendLayout();
			this->panel_Logo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel_glowny->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_menu
			// 
			this->panel_menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel_menu->Controls->Add(this->btn_sprzedaze);
			this->panel_menu->Controls->Add(this->btn_jazdyProbne);
			this->panel_menu->Controls->Add(this->btn_pracownikSamochody);
			this->panel_menu->Controls->Add(this->btn_samochody);
			this->panel_menu->Controls->Add(this->btn_klienci);
			this->panel_menu->Controls->Add(this->btn_zmiana_hasla);
			this->panel_menu->Controls->Add(this->btn_uzytkownicy);
			this->panel_menu->Controls->Add(this->panel_Logo);
			this->panel_menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_menu->Location = System::Drawing::Point(0, 0);
			this->panel_menu->Name = L"panel_menu";
			this->panel_menu->Size = System::Drawing::Size(250, 561);
			this->panel_menu->TabIndex = 0;
			// 
			// btn_sprzedaze
			// 
			this->btn_sprzedaze->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_sprzedaze->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_sprzedaze->FlatAppearance->BorderSize = 0;
			this->btn_sprzedaze->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sprzedaze->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_sprzedaze->ForeColor = System::Drawing::Color::White;
			this->btn_sprzedaze->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_sprzedaze.Image")));
			this->btn_sprzedaze->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_sprzedaze->Location = System::Drawing::Point(0, 440);
			this->btn_sprzedaze->Name = L"btn_sprzedaze";
			this->btn_sprzedaze->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->btn_sprzedaze->Size = System::Drawing::Size(250, 55);
			this->btn_sprzedaze->TabIndex = 7;
			this->btn_sprzedaze->Text = L"  Sprzeda¿e";
			this->btn_sprzedaze->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_sprzedaze->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_sprzedaze->UseVisualStyleBackColor = false;
			this->btn_sprzedaze->Click += gcnew System::EventHandler(this, &Okno_glowne::btn_sprzedaze_Click);
			// 
			// btn_jazdyProbne
			// 
			this->btn_jazdyProbne->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_jazdyProbne->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_jazdyProbne->FlatAppearance->BorderSize = 0;
			this->btn_jazdyProbne->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_jazdyProbne->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_jazdyProbne->ForeColor = System::Drawing::Color::White;
			this->btn_jazdyProbne->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_jazdyProbne.Image")));
			this->btn_jazdyProbne->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_jazdyProbne->Location = System::Drawing::Point(0, 385);
			this->btn_jazdyProbne->Name = L"btn_jazdyProbne";
			this->btn_jazdyProbne->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->btn_jazdyProbne->Size = System::Drawing::Size(250, 55);
			this->btn_jazdyProbne->TabIndex = 6;
			this->btn_jazdyProbne->Text = L"  Jazdy próbne";
			this->btn_jazdyProbne->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_jazdyProbne->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_jazdyProbne->UseVisualStyleBackColor = false;
			this->btn_jazdyProbne->Click += gcnew System::EventHandler(this, &Okno_glowne::btn_jazdyProbne_Click);
			// 
			// btn_pracownikSamochody
			// 
			this->btn_pracownikSamochody->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_pracownikSamochody->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_pracownikSamochody->FlatAppearance->BorderSize = 0;
			this->btn_pracownikSamochody->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pracownikSamochody->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_pracownikSamochody->ForeColor = System::Drawing::Color::White;
			this->btn_pracownikSamochody->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_pracownikSamochody.Image")));
			this->btn_pracownikSamochody->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_pracownikSamochody->Location = System::Drawing::Point(0, 330);
			this->btn_pracownikSamochody->Name = L"btn_pracownikSamochody";
			this->btn_pracownikSamochody->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->btn_pracownikSamochody->Size = System::Drawing::Size(250, 55);
			this->btn_pracownikSamochody->TabIndex = 5;
			this->btn_pracownikSamochody->Text = L"  Pracownik - Samochody";
			this->btn_pracownikSamochody->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_pracownikSamochody->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_pracownikSamochody->UseVisualStyleBackColor = false;
			this->btn_pracownikSamochody->Click += gcnew System::EventHandler(this, &Okno_glowne::btn_pracownikSamochody_Click);
			// 
			// btn_samochody
			// 
			this->btn_samochody->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_samochody->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_samochody->FlatAppearance->BorderSize = 0;
			this->btn_samochody->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_samochody->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_samochody->ForeColor = System::Drawing::Color::White;
			this->btn_samochody->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_samochody.Image")));
			this->btn_samochody->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_samochody->Location = System::Drawing::Point(0, 275);
			this->btn_samochody->Name = L"btn_samochody";
			this->btn_samochody->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->btn_samochody->Size = System::Drawing::Size(250, 55);
			this->btn_samochody->TabIndex = 4;
			this->btn_samochody->Text = L"  Samochody";
			this->btn_samochody->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_samochody->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_samochody->UseVisualStyleBackColor = false;
			this->btn_samochody->Click += gcnew System::EventHandler(this, &Okno_glowne::btn_samochody_Click);
			// 
			// btn_klienci
			// 
			this->btn_klienci->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_klienci->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_klienci->FlatAppearance->BorderSize = 0;
			this->btn_klienci->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_klienci->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_klienci->ForeColor = System::Drawing::Color::White;
			this->btn_klienci->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_klienci.Image")));
			this->btn_klienci->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_klienci->Location = System::Drawing::Point(0, 220);
			this->btn_klienci->Name = L"btn_klienci";
			this->btn_klienci->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->btn_klienci->Size = System::Drawing::Size(250, 55);
			this->btn_klienci->TabIndex = 3;
			this->btn_klienci->Text = L"  Klienci";
			this->btn_klienci->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_klienci->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_klienci->UseVisualStyleBackColor = false;
			this->btn_klienci->Click += gcnew System::EventHandler(this, &Okno_glowne::btn_klienci_Click);
			// 
			// btn_zmiana_hasla
			// 
			this->btn_zmiana_hasla->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_zmiana_hasla->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_zmiana_hasla->FlatAppearance->BorderSize = 0;
			this->btn_zmiana_hasla->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_zmiana_hasla->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_zmiana_hasla->ForeColor = System::Drawing::Color::White;
			this->btn_zmiana_hasla->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_zmiana_hasla.Image")));
			this->btn_zmiana_hasla->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_zmiana_hasla->Location = System::Drawing::Point(0, 165);
			this->btn_zmiana_hasla->Name = L"btn_zmiana_hasla";
			this->btn_zmiana_hasla->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->btn_zmiana_hasla->Size = System::Drawing::Size(250, 55);
			this->btn_zmiana_hasla->TabIndex = 2;
			this->btn_zmiana_hasla->Text = L"  Zmiana has³a";
			this->btn_zmiana_hasla->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_zmiana_hasla->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_zmiana_hasla->UseVisualStyleBackColor = false;
			this->btn_zmiana_hasla->Click += gcnew System::EventHandler(this, &Okno_glowne::btn_zmiana_hasla_Click);
			// 
			// btn_uzytkownicy
			// 
			this->btn_uzytkownicy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_uzytkownicy->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_uzytkownicy->FlatAppearance->BorderSize = 0;
			this->btn_uzytkownicy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_uzytkownicy->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_uzytkownicy->ForeColor = System::Drawing::Color::White;
			this->btn_uzytkownicy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_uzytkownicy.Image")));
			this->btn_uzytkownicy->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_uzytkownicy->Location = System::Drawing::Point(0, 110);
			this->btn_uzytkownicy->Name = L"btn_uzytkownicy";
			this->btn_uzytkownicy->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->btn_uzytkownicy->Size = System::Drawing::Size(250, 55);
			this->btn_uzytkownicy->TabIndex = 1;
			this->btn_uzytkownicy->Text = L"  U¿ytkownicy";
			this->btn_uzytkownicy->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_uzytkownicy->UseVisualStyleBackColor = false;
			this->btn_uzytkownicy->Click += gcnew System::EventHandler(this, &Okno_glowne::btn_uzytkownicy_Click);
			// 
			// panel_Logo
			// 
			this->panel_Logo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel_Logo->Controls->Add(this->label1);
			this->panel_Logo->Controls->Add(this->pictureBox1);
			this->panel_Logo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_Logo->Location = System::Drawing::Point(0, 0);
			this->panel_Logo->Name = L"panel_Logo";
			this->panel_Logo->Size = System::Drawing::Size(250, 110);
			this->panel_Logo->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(101, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 40);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WOW Cars";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(87, 79);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins", 34, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(273, 363);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 81);
			this->label2->TabIndex = 3;
			this->label2->Text = L"WOW Cars";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(292, 113);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(250, 250);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// panel_glowny
			// 
			this->panel_glowny->Controls->Add(this->label3);
			this->panel_glowny->Controls->Add(this->pictureBox2);
			this->panel_glowny->Controls->Add(this->label2);
			this->panel_glowny->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_glowny->Location = System::Drawing::Point(250, 0);
			this->panel_glowny->Name = L"panel_glowny";
			this->panel_glowny->Size = System::Drawing::Size(834, 561);
			this->panel_glowny->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(319, 419);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(197, 31);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Aby jeŸdzi³o siê lepiej";
			// 
			// Okno_glowne
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1084, 561);
			this->Controls->Add(this->panel_glowny);
			this->Controls->Add(this->panel_menu);
			this->Name = L"Okno_glowne";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Okno_glowne";
			this->panel_menu->ResumeLayout(false);
			this->panel_Logo->ResumeLayout(false);
			this->panel_Logo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel_glowny->ResumeLayout(false);
			this->panel_glowny->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



		Form^ activeForm = gcnew Form;
		// Otwieranie nowej formatki po wciœnieciu na guzik
		void openChildForm(Form^ childForm) {

			if (activeForm != gcnew Form) {
				activeForm->Close();
			}

			activeForm = childForm;
			childForm->TopLevel = false;
			childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			childForm->Dock = DockStyle::Fill;
			panel_glowny->Controls->Add(childForm);
			panel_glowny->Tag = childForm;
			childForm->BringToFront();
			childForm->Show();
		}

	private: System::Void btn_uzytkownicy_Click(System::Object^ sender, System::EventArgs^ e) {
		openChildForm(gcnew Okno_uzytkownicy());
	}
	private: System::Void btn_zmiana_hasla_Click(System::Object^ sender, System::EventArgs^ e) {
		openChildForm(gcnew Okno_zmiana_hasla());
	}
	private: System::Void btn_klienci_Click(System::Object^ sender, System::EventArgs^ e) {
		openChildForm(gcnew Okno_klienci());
	}
	private: System::Void btn_samochody_Click(System::Object^ sender, System::EventArgs^ e) {
		openChildForm(gcnew Okno_samochody());
	}
	private: System::Void btn_pracownikSamochody_Click(System::Object^ sender, System::EventArgs^ e) {
		openChildForm(gcnew Okno_pracowniksamochody());
	}
	private: System::Void btn_jazdyProbne_Click(System::Object^ sender, System::EventArgs^ e) {
		openChildForm(gcnew Okno_jazdy_probne());
	}
	private: System::Void btn_sprzedaze_Click(System::Object^ sender, System::EventArgs^ e) {
		openChildForm(gcnew Okno_sprzedaze());
	}
	};
}
