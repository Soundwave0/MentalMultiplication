#pragma once
#include <stdlib.h>     
#include <time.h> 
#include<stdio.h>
#include<cmath>
#include<string>
#include<windows.h>

namespace function
{
	float multiply(int first, int second)
	{
		return first * second;
	}
	float add(int first, int second)
	{
		return first + second;
	}
	float divide(int first, int second)
	{
		return first / second;
	}
	float square(int first,int second)
	{
		return float(first * first);
	}
	float randdigit(int numofdigits)
	{
		int cur = -1;
		int mod = pow(10, numofdigits);
		while (cur < pow(10, numofdigits - 1))
		{
			cur = rand() % (mod);
		}
		return cur;
	
		
	}
};
namespace MentalMultiplication {

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
		int number_of_digits_1 = 2;
		int number_of_digits_2 = 2;
		float(*operation)(int, int) = &function::multiply;
		float ans;
		int num1 =0;
		int num2 =0;
		static float time =0.0;
		String^ displaytime;
	private: System::Windows::Forms::Button^ button2;
	public:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label7;
	public:

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

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::ComponentModel::IContainer^ components;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 124);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 26);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button1->Location = System::Drawing::Point(193, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Check";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label2->Location = System::Drawing::Point(51, 40);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(24, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"0";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label3->Location = System::Drawing::Point(52, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label4->Location = System::Drawing::Point(22, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 26);
			this->label4->TabIndex = 5;
			this->label4->Text = L"X";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 5);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(84, 24);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Multiply";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(188, 5);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(56, 24);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Add";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(250, 5);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(74, 24);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Divide";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(193, 73);
			this->trackBar1->Maximum = 5;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 45);
			this->trackBar1->TabIndex = 9;
			this->trackBar1->Value = 2;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(335, 73);
			this->trackBar2->Maximum = 5;
			this->trackBar2->Minimum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(104, 45);
			this->trackBar2->TabIndex = 10;
			this->trackBar2->Value = 2;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(189, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"# Of Digits (first)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(331, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"# of Digits (second)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label7->Location = System::Drawing::Point(22, 163);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 29);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Idle";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button2->Location = System::Drawing::Point(274, 124);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"New";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button3->Location = System::Drawing::Point(355, 124);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(102, 5);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(80, 24);
			this->radioButton4->TabIndex = 16;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Square";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button4->Location = System::Drawing::Point(193, 163);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Reveal";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label8->Location = System::Drawing::Point(279, 166);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 29);
			this->label8->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(331, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Time:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(377, 7);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AccessibleName = L"Trainer";
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(494, 221);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Trainer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) 
{
	number_of_digits_1 = this->trackBar1->Value;
	
}
private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e)
{
	
	number_of_digits_2 = this->trackBar2->Value;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) //The check button
{
	this->timer1->Stop();
	String^ input = this->textBox1->Text;
	String^ n1 = this->label2->Text;
	String^ n2 = this->label3->Text;
	
	int n1I= int::Parse(n1);
	int n2I = int::Parse(n2);

	float rez = (float)(Convert::ToDouble(input));//issues with convertion between string and float !!!
	ans = operation(n1I, n2I);
	if (rez == ans)
	{
		this->label7->Text = "Correct";
		this->label7->BackColor = System::Drawing::Color::Lime;
	}
	else
	{
		this->label7->Text = "Wrong";
		this->label7->BackColor = System::Drawing::Color::Red;
	}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) { 
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) //new button
{
	time = 0;
	this->timer1->Start();
	if (this->radioButton4->Checked)
	{
		num1 = function::randdigit(number_of_digits_1);
		std::string l2 = std::to_string(num1);
		String^ l2m = gcnew String(l2.c_str());
		this->label2->Text = l2m;
		this->label3->Text = l2m;
		this->textBox1->Text = "";
	}
	else
	{
		num1 = function::randdigit(number_of_digits_1);
		num2 = function::randdigit(number_of_digits_2);
		std::string l2 = std::to_string(num1);
		std::string l3 = std::to_string(num2);
		String^ l2m = gcnew String(l2.c_str());
		this->label2->Text = l2m;
		String^ l3m = gcnew String(l3.c_str());
		this->label3->Text = l3m;
		this->textBox1->Text = "";
	}

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) //clear button
{
	this->textBox1->Text = "";
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) //multiply
{
	operation = &function::multiply;
	this->label4->Text = "X";
}

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) //add
{
	operation = &function::add;
	this->label4->Text = "+";
}

private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)//divide
{
	operation = &function::divide;
	this->label4->Text = "/";
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	this->trackBar2->Value = this->trackBar1->Value;
	this->trackBar1->Value = this->trackBar2->Value;
	this->label4->Text = "X";
	operation = &function::square;

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)//reveal
{
	if (this->button4->Text == "Reveal")
	{
		this->button4->Text = "Hide";
		ans = operation(num1, num2);
		std::string anss = std::to_string(ans);
		String ^ ansm = gcnew String(anss.c_str());
		this->label8->Text = ansm;
	}
	else
	{
		this->button4->Text = "Reveal";
		this->label8->Text = "";
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	time+=0.1;
	float rounded = truncf(time * 10) / 10;
	displaytime = Convert::ToString(rounded);
	this->label9->Text = this->displaytime+ "s";
	
	
	
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};

}
