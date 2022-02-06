#pragma once
namespace SalonSamochodowy {

	using namespace System;
	using namespace System::Windows::Forms;

	public ref class Narzedzia
	{
	public: 
		static void wyczysc_textboxy(Form^ okno) {
		for each (Control ^ kontrolka in okno->Controls) {
			if (kontrolka->GetType() == TextBox::typeid) {
				kontrolka->Text = "";
			}
		}
	}
	};
}
