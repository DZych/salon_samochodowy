#include "Okno_glowne.h"

#pragma once

namespace SalonSamochodowy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Podsumowanie informacji o Okno_logowania
	/// </summary>
	public ref class Okno_logowania : public System::Windows::Forms::Form
	{
	public:
		Okno_logowania(void)
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
		~Okno_logowania()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_login;
	private: System::Windows::Forms::TextBox^ txt_haslo;


	private: System::Windows::Forms::Button^ btn_zaloguj;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Okno_logowania::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_login = (gcnew System::Windows::Forms::TextBox());
			this->txt_haslo = (gcnew System::Windows::Forms::TextBox());
			this->btn_zaloguj = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(14, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WOW Cars";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(21, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(267, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Najlepszy salon samochodowy w Polsce\r\ndla Ciebie i Twojich najbli¿szych";
			// 
			// txt_login
			// 
			this->txt_login->BackColor = System::Drawing::SystemColors::Window;
			this->txt_login->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_login->ForeColor = System::Drawing::Color::Gray;
			this->txt_login->Location = System::Drawing::Point(25, 208);
			this->txt_login->Name = L"txt_login";
			this->txt_login->Size = System::Drawing::Size(379, 31);
			this->txt_login->TabIndex = 2;
			this->txt_login->Text = L"WprowadŸ Login";
			this->txt_login->Enter += gcnew System::EventHandler(this, &Okno_logowania::txt_logowanie_login_Enter);
			this->txt_login->Leave += gcnew System::EventHandler(this, &Okno_logowania::txt_logowanie_login_Leave);
			// 
			// txt_haslo
			// 
			this->txt_haslo->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_haslo->ForeColor = System::Drawing::Color::Gray;
			this->txt_haslo->Location = System::Drawing::Point(25, 245);
			this->txt_haslo->Name = L"txt_haslo";
			this->txt_haslo->Size = System::Drawing::Size(379, 31);
			this->txt_haslo->TabIndex = 3;
			this->txt_haslo->Text = L"WprowadŸ Has³o";
			this->txt_haslo->Enter += gcnew System::EventHandler(this, &Okno_logowania::txt_logowanie_haslo_Enter);
			this->txt_haslo->Leave += gcnew System::EventHandler(this, &Okno_logowania::txt_logowanie_haslo_Leave);
			// 
			// btn_zaloguj
			// 
			this->btn_zaloguj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_zaloguj->FlatAppearance->BorderSize = 0;
			this->btn_zaloguj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_zaloguj->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_zaloguj->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_zaloguj->Location = System::Drawing::Point(25, 344);
			this->btn_zaloguj->Name = L"btn_zaloguj";
			this->btn_zaloguj->Size = System::Drawing::Size(150, 40);
			this->btn_zaloguj->TabIndex = 5;
			this->btn_zaloguj->Text = L"Zaloguj";
			this->btn_zaloguj->UseVisualStyleBackColor = false;
			this->btn_zaloguj->Click += gcnew System::EventHandler(this, &Okno_logowania::btn_zaloguj_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button2->Location = System::Drawing::Point(181, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 40);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Anuluj";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(474, 111);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(322, 292);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Okno_logowania
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(850, 500);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_zaloguj);
			this->Controls->Add(this->txt_haslo);
			this->Controls->Add(this->txt_login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Okno_logowania";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Okno_logowania";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Wyglad okna

	private: System::Void txt_logowanie_login_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txt_login->Text == "WprowadŸ Login") {
			txt_login->Text = "";
			txt_login->ForeColor = Color::FromArgb(0, 64, 64, 64);
		}
	}
	private: System::Void txt_logowanie_haslo_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txt_haslo->Text == "WprowadŸ Has³o") {
			txt_haslo->Text = "";
			txt_haslo->ForeColor = Color::FromArgb(0, 64, 64, 64);
		}
		txt_haslo->UseSystemPasswordChar = true;
	}
	private: System::Void txt_logowanie_login_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (txt_login->Text == "") {
			txt_login->ForeColor = Color::Gray;
			txt_login->Text = "WprowadŸ Login";
		}
	}
	private: System::Void txt_logowanie_haslo_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (txt_haslo->Text == "") {
			txt_haslo->UseSystemPasswordChar = false;
			txt_haslo->ForeColor = Color::Gray;
			txt_haslo->Text = "WprowadŸ Has³o";
		}
	}
#pragma endregion

	private: System::Void btn_zaloguj_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ konfiguracja = L"datasource=sql11.freesqldatabase.com; port=3306; username=sql11469083; password=drcZgnw8y5; database=sql11469083";

		MySqlConnection^ polaczenie = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("Select * FROM uzytkownicy WHERE login='" + txt_login->Text + "' AND haslo= md5('" + txt_haslo->Text + "');", polaczenie);
		MySqlDataReader^ wynik_zapytania;

		try {
			polaczenie->Open();
			wynik_zapytania = zapytanie->ExecuteReader();

			if (wynik_zapytania->Read()) {
				int id_uzytkownik = wynik_zapytania->GetInt32(0);

				Okno_glowne^ main_f = gcnew Okno_glowne(id_uzytkownik);
				this->Hide();
				main_f->Show();
			}
			else {
				MessageBox::Show("B³êdne dane logowania");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		polaczenie->Close();


	}
	};
}