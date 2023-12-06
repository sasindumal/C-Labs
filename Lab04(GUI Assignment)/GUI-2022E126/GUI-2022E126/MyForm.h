//MALHARA R.M.Y.S
//2022/E/126
// EC2010
//GROUP C
//LAB04 GUI ASSIGNMENT
//THIS IS A PROGRAM ABOUT CALCULATING BUS FARE FROM COLOMBO TO AMBALANGODA
//I CERTIFY THAT THE CODE IN THE METHOD FUNCTION MAIN OF THIS PROJECT IS 
// ENTIRELY MY OWN WORK. 

#pragma once

namespace GUI2022E126 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia Pro", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 24);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"From";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia Pro Cond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 103);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"To";
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) { L"car", L"bus", L"van" });
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"colombo", L"Mount Lavinia", L"Moratuwa", L"Panadura",
					L"Wattuwa", L"kaluthara", L"Beruwala", L"Benthota", L"Ambalangoda"
			});
			this->comboBox1->Location = System::Drawing::Point(134, 25);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(173, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"olombo", L"Mount Lavinia", L"Moratuwa", L"Panadura",
					L"Wattuwa", L"kaluthara", L"Beruwala", L"Benthota", L"Ambalangoda"
			});
			this->comboBox2->Location = System::Drawing::Point(134, 103);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(173, 21);
			this->comboBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 233);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Face for the selected journey :  ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(197, 233);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(134, 174);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(243, 174);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 28);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(366, 273);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bus Far Callculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void InitializeCityListBoxes() {
			comboBox1->Items->AddRange(gcnew array<String^> { "Colombo", "Mount Lavinia", "Moratuwa", "Panadura", "Wattuwa", "Kalutara", "Beruwala", "Bentota", "Ambalangoda" });
			comboBox2->Items->AddRange(gcnew array<String^> { "Colombo", "Mount Lavinia", "Moratuwa", "Panadura", "Wattuwa", "Kalutara", "Beruwala", "Bentota", "Ambalangoda" });
		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int departureIndex = comboBox1->SelectedIndex;
		int destinationIndex = comboBox2->SelectedIndex;

		if (departureIndex == -1 || destinationIndex == -1) {
			label4->Text = "Please select departure and destination cities.";
		}
		else {
			array<int>^ distances = { 0, 12, 18, 28, 38, 67, 81, 89, 112 };

			if (departureIndex >= 0 && departureIndex < distances->Length &&
				destinationIndex >= 0 && destinationIndex < distances->Length) {

				int distance = Math::Abs(distances[destinationIndex] - distances[departureIndex]);
				int fare = distance * 4.5;
				label4->Text = " Rs. " + fare.ToString();
			}
			else {
				label4->Text = "Invalid selection. Please try again.";
			}
		}


	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		comboBox1->SelectedIndex = -1;
		comboBox2->SelectedIndex = -1;

		label4->Text = "";


	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
