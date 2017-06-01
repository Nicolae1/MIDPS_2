﻿#pragma once

namespace VCPP_Scientific_Calculator {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  scientificToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  historyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;


	private: System::Windows::Forms::TextBox^  txtDisplay;

	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Label^  lblShowOp;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  historyToolStripMenuItem1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(543, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->standardToolStripMenuItem,
					this->scientificToolStripMenuItem, this->historyToolStripMenuItem, this->historyToolStripMenuItem1, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::scientificToolStripMenuItem_Click);
			// 
			// historyToolStripMenuItem
			// 
			this->historyToolStripMenuItem->Checked = true;
			this->historyToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->historyToolStripMenuItem->Text = L"History";
			this->historyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem_Click);
			// 
			// historyToolStripMenuItem1
			// 
			this->historyToolStripMenuItem1->Name = L"historyToolStripMenuItem1";
			this->historyToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->historyToolStripMenuItem1->Text = L"History";
			this->historyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem1_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(25, 27);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(286, 56);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btn7->Location = System::Drawing::Point(25, 89);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(67, 63);
			this->btn7->TabIndex = 2;
			this->btn7->Text = L"";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(98, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 63);
			this->button1->TabIndex = 3;
			this->button1->Text = L"CE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(171, 89);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 63);
			this->button2->TabIndex = 4;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(244, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 63);
			this->button3->TabIndex = 5;
			this->button3->Text = L"±";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(244, 158);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 63);
			this->button4->TabIndex = 9;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(171, 158);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 63);
			this->button5->TabIndex = 8;
			this->button5->Text = L"9";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(98, 158);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 63);
			this->button6->TabIndex = 7;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(25, 158);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 63);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(244, 227);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 63);
			this->button8->TabIndex = 13;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(171, 227);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 63);
			this->button9->TabIndex = 12;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(98, 227);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(67, 63);
			this->button10->TabIndex = 11;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(25, 227);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(67, 63);
			this->button11->TabIndex = 10;
			this->button11->Text = L"4";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(244, 296);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(67, 63);
			this->button12->TabIndex = 17;
			this->button12->Text = L"*";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(171, 296);
			this->button13->Name = L"button13";
			this->button13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button13->Size = System::Drawing::Size(67, 63);
			this->button13->TabIndex = 16;
			this->button13->Text = L"3";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(98, 296);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 63);
			this->button14->TabIndex = 15;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(25, 296);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(67, 63);
			this->button15->TabIndex = 14;
			this->button15->Text = L"1";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(244, 365);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(67, 63);
			this->button16->TabIndex = 21;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(171, 365);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(67, 63);
			this->button17->TabIndex = 20;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(98, 365);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(67, 63);
			this->button18->TabIndex = 19;
			this->button18->Text = L",";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(25, 365);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(67, 63);
			this->button19->TabIndex = 18;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(446, 365);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(67, 63);
			this->button20->TabIndex = 31;
			this->button20->Text = L"1/x";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(373, 365);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(67, 63);
			this->button21->TabIndex = 30;
			this->button21->Text = L"^";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(446, 296);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(67, 63);
			this->button22->TabIndex = 29;
			this->button22->Text = L"lg x";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(373, 296);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(67, 63);
			this->button23->TabIndex = 28;
			this->button23->Text = L"Tan";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(446, 227);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(67, 63);
			this->button24->TabIndex = 27;
			this->button24->Text = L"Log";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(373, 227);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(67, 63);
			this->button25->TabIndex = 26;
			this->button25->Text = L"Cos";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(446, 158);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(67, 63);
			this->button26->TabIndex = 25;
			this->button26->Text = L"Sqrt";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(373, 158);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(67, 63);
			this->button27->TabIndex = 24;
			this->button27->Text = L"Sin";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(446, 89);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(67, 63);
			this->button28->TabIndex = 23;
			this->button28->Text = L"x^2";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Centaur", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(373, 89);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(67, 63);
			this->button29->TabIndex = 22;
			this->button29->Text = L"π";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::White;
			this->lblShowOp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblShowOp->Location = System::Drawing::Point(31, 30);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 16);
			this->lblShowOp->TabIndex = 32;
			this->lblShowOp->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(25, 434);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(286, 147);
			this->listBox1->TabIndex = 33;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(543, 541);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::key_down);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::key_press);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

/*
#pragma endregion
		double iFirstnum;
		double iSecondnum;
		double iResult;
		double a;
		String^ iOperator;
		char iOperation;


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		MyForm::Width = 353;
		MyForm::Height = 473;
		txtDisplay->Width = 286;
		historyToolStripMenuItem1->Visible = false;
	}
private: System::Void historyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (historyToolStripMenuItem->Checked == true)
	{
		listBox1->Visible = true;
		historyToolStripMenuItem->Visible = false;
		historyToolStripMenuItem1->Visible = true;
		MyForm::Height = 632;
	}
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	Application::Exit();
}
private: System::Void scientificToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::Width = 559;
	txtDisplay->Width = 487;
}
private: System::Void standardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::Width = 353;
	MyForm::Height = 473;
	txtDisplay->Width = 286;
}
private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
	//Buttons numbers
	Button ^ Numbers = safe_cast<Button^>(sender);
	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//CE button
	txtDisplay->Clear();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	// C button
	txtDisplay->Clear();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	//Decimal point
	if (!txtDisplay->Text->Contains(","))
	{
		txtDisplay->Text = txtDisplay->Text + ",";
	}
	
}
private: System::Void Arithmetic_Op(System::Object^  sender, System::EventArgs^  e) {
	//Operators
	Button ^ op = safe_cast<Button^>(sender);
	iFirstnum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	//txtDisplay->Text += "";
	iOperator = op->Text;
	lblShowOp->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//plus-minus
	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
	
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	//egal
	//lblShowOp->Text = "";
	iSecondnum = Double::Parse(txtDisplay->Text);
	if (iOperator == "+")
	{
		iResult = iFirstnum + iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	}
	else if (iOperator == "-")
	{
		iResult = iFirstnum - iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	}
	else if (iOperator == "*")
	{
		iResult = iFirstnum * iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	}
	else if (iOperator == "/")
	{
		iResult = iFirstnum / iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	}
	else if (iOperator == "^")
	{
		txtDisplay->Text = System::Convert::ToString(Math::Pow(iFirstnum, iSecondnum));   
		listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	}
}
private: System::Void historyToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	historyToolStripMenuItem->Visible = true;
	listBox1->Width = 265;
	listBox1->Visible = false;
	MyForm::Height = 473;
	historyToolStripMenuItem1->Visible = false;
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	//Backspace
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	//Pi
	txtDisplay->Text = ("3,14159265358997632384626433832795");
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	//Log
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("log" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	a = Math::Log(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	//Radical
	a = Double::Parse(txtDisplay->Text);
	a = Math::Sqrt(a);
	lblShowOp->Text = System::Convert::ToString("Sqrt" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	txtDisplay->Text = System::Convert::ToString(a);
	
	
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	//Sinus
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("sin" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	a = Math::Sin(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	//cosinus
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("cos" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	a = Math::Cos(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	//tangent
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("tan" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	a = Math::Tan(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	//x^2
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString((txtDisplay->Text) + "^" + "2");
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	//1/x
	a = Convert::ToDouble(1.0 / Convert::ToDouble(txtDisplay->Text));
	lblShowOp->Text = System::Convert::ToString("1" + "/" + (txtDisplay->Text));
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	//lg x
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("lg" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	a = Math::Log10(a);
	txtDisplay->Text = System::Convert::ToString(a);
}

	    // Boolean flag used to determine when a character other than a number is entered.
	bool nonNumberEntered;

// Handle the KeyDown event to determine the type of character entered into the control.
private: System::Void key_down(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	// Initialize the flag to false.
		nonNumberEntered = false;

	// Determine whether the keystroke is a number from the top of the keyboard.
	if (e->KeyCode < Keys::D0 || e->KeyCode > Keys::D9)
	{
		// Determine whether the keystroke is a number from the keypad.
		if (e->KeyCode < Keys::NumPad0 || e->KeyCode > Keys::NumPad9)
		{
			// Determine whether the keystroke is a backspace.
			if (e->KeyCode != Keys::Back)
			{
				// A non-numerical keystroke was pressed.
				// Set the flag to true and evaluate in KeyPress event.
				nonNumberEntered = true;
			}
		}
	}
	if (e->KeyCode == Keys::D0 || e->KeyCode == Keys::NumPad0)
	{
     txtDisplay->Text += "0";
	}
	if (e->KeyCode == Keys::D1 || e->KeyCode == Keys::NumPad1)
	{
		txtDisplay->Text += "1";
	}
	if (e->KeyCode == Keys::D2 || e->KeyCode == Keys::NumPad2)
	{
		txtDisplay->Text += "2";
	}
	if (e->KeyCode == Keys::D3 || e->KeyCode == Keys::NumPad3)
	{
		txtDisplay->Text += "3";
	}
	if (e->KeyCode == Keys::D4 || e->KeyCode == Keys::NumPad4)
	{
		txtDisplay->Text += "4";
	}
	if (e->KeyCode == Keys::D5 || e->KeyCode == Keys::NumPad5)
	{
		txtDisplay->Text += "5";
	}
	if (e->KeyCode == Keys::D6 || e->KeyCode == Keys::NumPad6)
	{
		txtDisplay->Text += "6";
	}
	if (e->KeyCode == Keys::D7 || e->KeyCode == Keys::NumPad7)
	{
		txtDisplay->Text += "7";
	}
	if (e->KeyCode == Keys::D8 || e->KeyCode == Keys::NumPad8)
	{
		txtDisplay->Text += "8";
	}
	if (e->KeyCode == Keys::D9 || e->KeyCode == Keys::NumPad9)
	{
		txtDisplay->Text += "9";
	}
	if (e->KeyCode == Keys::Oemcomma)
	{
		txtDisplay->Text += ",";
	}
	if (e->KeyCode == Keys::OemMinus || e->KeyCode == Keys::Subtract)
	{
		txtDisplay->Text += "-";
	}

}
	    // This event occurs after the KeyDown event and can be used to prevent
	// characters from entering the control.
private: System::Void key_press(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Check for the flag being set in the KeyDown event.
	if (nonNumberEntered == true)
	{
		// Stop the character from being entered into the control since it is non-numerical.
		e->Handled = true;
	}
}
};
}
*/
