#include "MyForm.h"
#include <Windows.h>
#include <msclr\marshal_cppstd.h>

using namespace FileExchange; // �������� �������
using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
