#pragma once
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
	/// Podsumowanie informacji o Okno_zmiana_hasla
	/// </summary>
	public ref class Okno_zmiana_hasla : public System::Windows::Forms::Form
	{
	public:

		int id_uzytkownika;
		String^ login;

		Okno_zmiana_hasla(int uzytkownik, String^ nazwa_uzytkownika)
		{
			id_uzytkownika = uzytkownik;
			login = nazwa_uzytkownika;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			lb_nazwa_uzytkownika->Text = login;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Okno_zmiana_hasla()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_powtorzoneNoweHaslo;
	private: System::Windows::Forms::TextBox^ txt_noweHaslo;
	private: System::Windows::Forms::TextBox^ txt_stareHaslo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lb_nazwa_uzytkownika;
	private: System::Windows::Forms::Button^ btn_zmienHaslo;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Okno_zmiana_hasla::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_powtorzoneNoweHaslo = (gcnew System::Windows::Forms::TextBox());
			this->txt_noweHaslo = (gcnew System::Windows::Forms::TextBox());
			this->txt_stareHaslo = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lb_nazwa_uzytkownika = (gcnew System::Windows::Forms::Label());
			this->btn_zmienHaslo = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(293, 340);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 28);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Powtórz nowe has³o";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(293, 275);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 28);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Nowe has³o";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(293, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 28);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Stare has³o";
			// 
			// txt_powtorzoneNoweHaslo
			// 
			this->txt_powtorzoneNoweHaslo->BackColor = System::Drawing::SystemColors::Window;
			this->txt_powtorzoneNoweHaslo->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_powtorzoneNoweHaslo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_powtorzoneNoweHaslo->Location = System::Drawing::Point(296, 370);
			this->txt_powtorzoneNoweHaslo->Name = L"txt_powtorzoneNoweHaslo";
			this->txt_powtorzoneNoweHaslo->Size = System::Drawing::Size(243, 31);
			this->txt_powtorzoneNoweHaslo->TabIndex = 20;
			this->txt_powtorzoneNoweHaslo->UseSystemPasswordChar = true;
			// 
			// txt_noweHaslo
			// 
			this->txt_noweHaslo->BackColor = System::Drawing::SystemColors::Window;
			this->txt_noweHaslo->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_noweHaslo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_noweHaslo->Location = System::Drawing::Point(298, 305);
			this->txt_noweHaslo->Name = L"txt_noweHaslo";
			this->txt_noweHaslo->Size = System::Drawing::Size(243, 31);
			this->txt_noweHaslo->TabIndex = 19;
			this->txt_noweHaslo->UseSystemPasswordChar = true;
			// 
			// txt_stareHaslo
			// 
			this->txt_stareHaslo->BackColor = System::Drawing::SystemColors::Window;
			this->txt_stareHaslo->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->txt_stareHaslo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txt_stareHaslo->Location = System::Drawing::Point(297, 241);
			this->txt_stareHaslo->Name = L"txt_stareHaslo";
			this->txt_stareHaslo->Size = System::Drawing::Size(243, 31);
			this->txt_stareHaslo->TabIndex = 18;
			this->txt_stareHaslo->UseSystemPasswordChar = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(342, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// lb_nazwa_uzytkownika
			// 
			this->lb_nazwa_uzytkownika->AutoSize = true;
			this->lb_nazwa_uzytkownika->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
			this->lb_nazwa_uzytkownika->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lb_nazwa_uzytkownika->Location = System::Drawing::Point(385, 174);
			this->lb_nazwa_uzytkownika->Name = L"lb_nazwa_uzytkownika";
			this->lb_nazwa_uzytkownika->Size = System::Drawing::Size(0, 28);
			this->lb_nazwa_uzytkownika->TabIndex = 25;
			this->lb_nazwa_uzytkownika->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_zmienHaslo
			// 
			this->btn_zmienHaslo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btn_zmienHaslo->FlatAppearance->BorderSize = 0;
			this->btn_zmienHaslo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_zmienHaslo->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_zmienHaslo->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_zmienHaslo->Location = System::Drawing::Point(342, 423);
			this->btn_zmienHaslo->Name = L"btn_zmienHaslo";
			this->btn_zmienHaslo->Size = System::Drawing::Size(150, 40);
			this->btn_zmienHaslo->TabIndex = 26;
			this->btn_zmienHaslo->Text = L"Zmieñ Has³o";
			this->btn_zmienHaslo->UseVisualStyleBackColor = false;
			this->btn_zmienHaslo->Click += gcnew System::EventHandler(this, &Okno_zmiana_hasla::btn_zmienHaslo_Click);
			// 
			// Okno_zmiana_hasla
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(834, 561);
			this->Controls->Add(this->btn_zmienHaslo);
			this->Controls->Add(this->lb_nazwa_uzytkownika);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_powtorzoneNoweHaslo);
			this->Controls->Add(this->txt_noweHaslo);
			this->Controls->Add(this->txt_stareHaslo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Okno_zmiana_hasla";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Okno_zmiana_hasla";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void btn_zmienHaslo_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_stareHaslo->Text == "" || txt_noweHaslo->Text == "" || txt_powtorzoneNoweHaslo->Text == "") {
			MessageBox::Show("Uzupe³nij wszystkie pola!");
			return;
		}

		if (txt_noweHaslo->Text != txt_powtorzoneNoweHaslo->Text) {
			MessageBox::Show("WprowadŸ poprawnie nowe has³o!");
			return;
		}

		if (txt_noweHaslo->Text == txt_stareHaslo->Text) {
			MessageBox::Show("Nowe has³o nie mo¿e byæ takie samo jak stare!");
			return;
		}

		MySqlConnection^ laczBaze = gcnew MySqlConnection(Poloczenie::konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE uzytkownicy SET haslo = md5('" + txt_noweHaslo->Text + "') WHERE uzytkownik_id = " + id_uzytkownika + " AND haslo = md5('" + txt_stareHaslo ->Text + "');", laczBaze);

		try {
			laczBaze->Open();

			if (zapytanie->ExecuteNonQuery()) {
				MessageBox::Show("Has³o zosta³o zmienione");
			}
			else {
				MessageBox::Show("Has³o niepoprawne!");
			}
			laczBaze->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}
	}
};
}
