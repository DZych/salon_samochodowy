#include "Okno_logowania.cpp"
#include "Okno_glowne.cpp"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SalonSamochodowy::Okno_logowania form;
	Application::Run(% form);
	return 0;

	// Silence linker bug: error LNK2022: metadata operation failed(801311D6)
	void Silence_LNK2022_BUG(String^); { }

	// Silence linker bug: error LNK2022: metadata operation failed(801311D6)
	void Silence_LNK1255_BUG(String^); { }
}