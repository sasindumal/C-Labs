// MALHARA R.M.Y.S
// 2022/E/126
// EC2010
//Group: C
// Lab: 04 (GUI)
// Program Description: calculator
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.



#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	calculator::MyForm frm;
	Application::Run(% frm);
}

