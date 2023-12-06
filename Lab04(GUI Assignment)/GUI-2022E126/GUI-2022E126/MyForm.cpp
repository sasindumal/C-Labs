//MALHARA R.M.Y.S
//2022/E/126
//GROUP C
//LAB04 GUI ASSIGNMENT
//THIS IS A PROGRAM ABOUT CALCULATING BUS FARE FROM COLOMBO TO AMBALANGODA
//I CERTIFY THAT THE CODE IN THE METHOD FUNCTION MAIN OF THIS PROJECT IS 
// ENTIRELY MY OWN WORK. 

#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GUI2022E126::MyForm frm;
	Application::Run(% frm);

	return 0;
}
