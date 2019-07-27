#pragma once
#include"stdafx.h"
#include"CommonHelper.h"
#include"User.h"
#include"UserList.h"
#include"FrmGame2.h"

namespace FlyBird {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmGame1 摘要
	/// </summary>
	public ref class FrmGame1 : public System::Windows::Forms::Form
	{
	public:
		FrmGame1(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~FrmGame1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pbzhu1;
	private: System::Windows::Forms::PictureBox^  pbzhu2;
	private: System::Windows::Forms::PictureBox^  pbzhu3;
	private: System::Windows::Forms::PictureBox^  pbzhu4;
	protected:

	protected:



	private: System::Windows::Forms::PictureBox^  pbBird;

	private: System::Windows::Forms::PictureBox^  pbBack;


	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pbPause;
	private: System::Windows::Forms::PictureBox^  pbReplay;


	private: System::Windows::Forms::PictureBox^  pbStart;

	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::ImageList^  ilBird;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  TMove;
	private: System::Windows::Forms::ImageList^  IL_Zhuzi;
	private: System::Windows::Forms::Timer^  tRuntime;
	private: System::Windows::Forms::PictureBox^  pbzhu5;
	private: System::Windows::Forms::PictureBox^  pbzhu6;
	private: System::Windows::Forms::PictureBox^  pbOver;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbScore;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbRuntime;
	private: System::Windows::Forms::Label^  label3;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmGame1::typeid));
			this->pbzhu1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbzhu2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbzhu3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbzhu4 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBird = (gcnew System::Windows::Forms::PictureBox());
			this->pbBack = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPause = (gcnew System::Windows::Forms::PictureBox());
			this->pbReplay = (gcnew System::Windows::Forms::PictureBox());
			this->pbStart = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->ilBird = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->TMove = (gcnew System::Windows::Forms::Timer(this->components));
			this->IL_Zhuzi = (gcnew System::Windows::Forms::ImageList(this->components));
			this->tRuntime = (gcnew System::Windows::Forms::Timer(this->components));
			this->pbzhu5 = (gcnew System::Windows::Forms::PictureBox());
			this->pbzhu6 = (gcnew System::Windows::Forms::PictureBox());
			this->pbOver = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbScore = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbRuntime = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBird))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPause))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReplay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOver))->BeginInit();
			this->SuspendLayout();
			// 
			// pbzhu1
			// 
			this->pbzhu1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbzhu1.Image")));
			this->pbzhu1->Location = System::Drawing::Point(329, -8);
			this->pbzhu1->Name = L"pbzhu1";
			this->pbzhu1->Size = System::Drawing::Size(72, 165);
			this->pbzhu1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbzhu1->TabIndex = 0;
			this->pbzhu1->TabStop = false;
			// 
			// pbzhu2
			// 
			this->pbzhu2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbzhu2.Image")));
			this->pbzhu2->Location = System::Drawing::Point(338, 325);
			this->pbzhu2->Name = L"pbzhu2";
			this->pbzhu2->Size = System::Drawing::Size(72, 305);
			this->pbzhu2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbzhu2->TabIndex = 0;
			this->pbzhu2->TabStop = false;
			// 
			// pbzhu3
			// 
			this->pbzhu3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbzhu3.Image")));
			this->pbzhu3->Location = System::Drawing::Point(665, 3);
			this->pbzhu3->Name = L"pbzhu3";
			this->pbzhu3->Size = System::Drawing::Size(67, 235);
			this->pbzhu3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbzhu3->TabIndex = 0;
			this->pbzhu3->TabStop = false;
			// 
			// pbzhu4
			// 
			this->pbzhu4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbzhu4.Image")));
			this->pbzhu4->Location = System::Drawing::Point(665, 401);
			this->pbzhu4->Name = L"pbzhu4";
			this->pbzhu4->Size = System::Drawing::Size(67, 229);
			this->pbzhu4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbzhu4->TabIndex = 0;
			this->pbzhu4->TabStop = false;
			// 
			// pbBird
			// 
			this->pbBird->BackColor = System::Drawing::Color::Transparent;
			this->pbBird->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBird.Image")));
			this->pbBird->Location = System::Drawing::Point(110, 265);
			this->pbBird->Name = L"pbBird";
			this->pbBird->Size = System::Drawing::Size(52, 44);
			this->pbBird->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbBird->TabIndex = 1;
			this->pbBird->TabStop = false;
			// 
			// pbBack
			// 
			this->pbBack->BackColor = System::Drawing::Color::Transparent;
			this->pbBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBack.Image")));
			this->pbBack->Location = System::Drawing::Point(46, 542);
			this->pbBack->Name = L"pbBack";
			this->pbBack->Size = System::Drawing::Size(75, 68);
			this->pbBack->TabIndex = 2;
			this->pbBack->TabStop = false;
			this->pbBack->Click += gcnew System::EventHandler(this, &FrmGame1::pbBack_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(162, 542);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(72, 68);
			this->pictureBox7->TabIndex = 2;
			this->pictureBox7->TabStop = false;
			// 
			// pbPause
			// 
			this->pbPause->BackColor = System::Drawing::Color::Transparent;
			this->pbPause->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPause.Image")));
			this->pbPause->Location = System::Drawing::Point(1172, 542);
			this->pbPause->Name = L"pbPause";
			this->pbPause->Size = System::Drawing::Size(74, 68);
			this->pbPause->TabIndex = 2;
			this->pbPause->TabStop = false;
			this->pbPause->Click += gcnew System::EventHandler(this, &FrmGame1::pbPause_Click);
			// 
			// pbReplay
			// 
			this->pbReplay->BackColor = System::Drawing::Color::Transparent;
			this->pbReplay->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbReplay.Image")));
			this->pbReplay->Location = System::Drawing::Point(1317, 549);
			this->pbReplay->Name = L"pbReplay";
			this->pbReplay->Size = System::Drawing::Size(69, 68);
			this->pbReplay->TabIndex = 2;
			this->pbReplay->TabStop = false;
			this->pbReplay->Click += gcnew System::EventHandler(this, &FrmGame1::pbReplay_Click);
			// 
			// pbStart
			// 
			this->pbStart->BackColor = System::Drawing::Color::Transparent;
			this->pbStart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbStart.Image")));
			this->pbStart->Location = System::Drawing::Point(1034, 549);
			this->pbStart->Name = L"pbStart";
			this->pbStart->Size = System::Drawing::Size(76, 68);
			this->pbStart->TabIndex = 2;
			this->pbStart->TabStop = false;
			this->pbStart->Click += gcnew System::EventHandler(this, &FrmGame1::pbStart_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(1262, 47);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(81, 70);
			this->pictureBox11->TabIndex = 3;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &FrmGame1::pictureBox11_Click);
			// 
			// ilBird
			// 
			this->ilBird->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ilBird.ImageStream")));
			this->ilBird->TransparentColor = System::Drawing::Color::Transparent;
			this->ilBird->Images->SetKeyName(0, L"上");
			this->ilBird->Images->SetKeyName(1, L"中");
			this->ilBird->Images->SetKeyName(2, L"下");
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmGame1::timer1_Tick);
			// 
			// TMove
			// 
			this->TMove->Tick += gcnew System::EventHandler(this, &FrmGame1::TMove_Tick);
			// 
			// IL_Zhuzi
			// 
			this->IL_Zhuzi->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"IL_Zhuzi.ImageStream")));
			this->IL_Zhuzi->TransparentColor = System::Drawing::Color::Transparent;
			this->IL_Zhuzi->Images->SetKeyName(0, L"上");
			this->IL_Zhuzi->Images->SetKeyName(1, L"下");
			// 
			// tRuntime
			// 
			this->tRuntime->Interval = 1000;
			this->tRuntime->Tick += gcnew System::EventHandler(this, &FrmGame1::tRuntime_Tick);
			// 
			// pbzhu5
			// 
			this->pbzhu5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbzhu5.Image")));
			this->pbzhu5->Location = System::Drawing::Point(944, 3);
			this->pbzhu5->Name = L"pbzhu5";
			this->pbzhu5->Size = System::Drawing::Size(68, 199);
			this->pbzhu5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbzhu5->TabIndex = 4;
			this->pbzhu5->TabStop = false;
			// 
			// pbzhu6
			// 
			this->pbzhu6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbzhu6.Image")));
			this->pbzhu6->Location = System::Drawing::Point(944, 379);
			this->pbzhu6->Name = L"pbzhu6";
			this->pbzhu6->Size = System::Drawing::Size(68, 251);
			this->pbzhu6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbzhu6->TabIndex = 4;
			this->pbzhu6->TabStop = false;
			// 
			// pbOver
			// 
			this->pbOver->BackColor = System::Drawing::Color::Transparent;
			this->pbOver->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbOver.Image")));
			this->pbOver->Location = System::Drawing::Point(421, 102);
			this->pbOver->Margin = System::Windows::Forms::Padding(2);
			this->pbOver->Name = L"pbOver";
			this->pbOver->Size = System::Drawing::Size(496, 375);
			this->pbOver->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbOver->TabIndex = 29;
			this->pbOver->TabStop = false;
			this->pbOver->Visible = false;
			this->pbOver->Click += gcnew System::EventHandler(this, &FrmGame1::pbOver_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(416, 564);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 46);
			this->label1->TabIndex = 30;
			this->label1->Text = L"分数";
			// 
			// lbScore
			// 
			this->lbScore->AutoSize = true;
			this->lbScore->BackColor = System::Drawing::Color::Transparent;
			this->lbScore->Font = (gcnew System::Drawing::Font(L"微软雅黑", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lbScore->Location = System::Drawing::Point(511, 564);
			this->lbScore->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbScore->Name = L"lbScore";
			this->lbScore->Size = System::Drawing::Size(41, 46);
			this->lbScore->TabIndex = 31;
			this->lbScore->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(747, 584);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 46);
			this->label2->TabIndex = 32;
			this->label2->Text = L"时间:";
			// 
			// lbRuntime
			// 
			this->lbRuntime->AutoSize = true;
			this->lbRuntime->BackColor = System::Drawing::Color::Transparent;
			this->lbRuntime->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lbRuntime->Location = System::Drawing::Point(832, 584);
			this->lbRuntime->Name = L"lbRuntime";
			this->lbRuntime->Size = System::Drawing::Size(62, 46);
			this->lbRuntime->TabIndex = 33;
			this->lbRuntime->Text = L"30";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(883, 584);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 46);
			this->label3->TabIndex = 34;
			this->label3->Text = L"秒";
			// 
			// FrmGame1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1370, 629);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbRuntime);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbScore);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pbOver);
			this->Controls->Add(this->pbzhu6);
			this->Controls->Add(this->pbzhu5);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pbStart);
			this->Controls->Add(this->pbReplay);
			this->Controls->Add(this->pbPause);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pbBack);
			this->Controls->Add(this->pbBird);
			this->Controls->Add(this->pbzhu4);
			this->Controls->Add(this->pbzhu3);
			this->Controls->Add(this->pbzhu2);
			this->Controls->Add(this->pbzhu1);
			this->DoubleBuffered = true;
			this->Name = L"FrmGame1";
			this->Text = L"关卡1";
			this->Load += gcnew System::EventHandler(this, &FrmGame1::FrmGame1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmGame1::FrmGame1_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmGame1::FrmGame1_KeyUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmGame1::FrmGame1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmGame1::FrmGame1_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBird))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPause))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReplay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbzhu6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOver))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FrmGame1_Load(System::Object^  sender, System::EventArgs^  e) {

	}
			 int x, y;
	private: System::Void FrmGame1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			x = e->X;//记录鼠标点击位置
			y = e->Y;
		}


	}
	private: System::Void FrmGame1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			this->Top = this->Top + (e->Y - y);//鼠标的移动
			this->Left = this->Left + (e->X - x);
		}
	}

	private: System::Void pbStart_Click(System::Object^  sender, System::EventArgs^  e) {
		this->pbBird->Visible = true;
		timer1->Start();
		tRuntime->Start();
		TMove->Start();
		//axWindowsMediaPlayer2->Ctlcontrols->play();

	}

	
			 static bool isAlive = true;
	private: System::Void TMove_Tick(System::Object^  sender, System::EventArgs^  e) {

		if (pbzhu1->Left > 1)
		{
			pbzhu1->Left -= 10;
		}
		else if (pbzhu1->Left <= 1)
		{
			pbzhu1->Left += 1100;
			pbzhu1->Left -= 10;
		}

		if (pbzhu2->Left > 1)
		{
			pbzhu2->Left -= 10;
		}
		else if (pbzhu2->Left <= 1)
		{
			pbzhu2->Left += 1100;
			pbzhu2->Left -= 10;
		}

		if (pbzhu3->Left > 1)
		{
			pbzhu3->Left -= 10;
		}
		else if (pbzhu3->Left <= 1)
		{
			pbzhu3->Left += 1100;
			pbzhu3->Left -= 10;
		}

		if (pbzhu4->Left > 1)
		{
			pbzhu4->Left -= 10;
		}
		else if (pbzhu4->Left <= 1)
		{
			pbzhu4->Left += 1100;
			pbzhu4->Left -= 10;
		}

		if (pbzhu5->Left > 1)
		{
			pbzhu5->Left -= 10;
		}
		else if (pbzhu5->Left <= 1)
		{
			pbzhu5->Left += 1100;
			pbzhu5->Left -= 10;
		}

		if (pbzhu6->Left > 1)
		{
			pbzhu6->Left -= 10;
		}
		else if (pbzhu6->Left <= 1)
		{
			pbzhu6->Left += 1100;
			pbzhu6->Left -= 10;
		}

		Check();


		if (pbBird->Left + pbBird->Width + 10 > pbzhu1->Left&&pbBird->Left + pbBird->Width + 10 < pbzhu1->Left + pbzhu1->Width)
		{
			if (pbBird->Top<pbzhu1->Top + pbzhu1->Height || pbBird->Top + pbBird->Height>pbzhu2->Top)
			{
				pbOver->Visible = true;
				isAlive = false;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();
				//axWindowsMediaPlayer2->Ctlcontrols->stop();
				savePoint();
			}
		}

		if (pbBird->Left + pbBird->Width + 10 > pbzhu3->Left&&pbBird->Left + pbBird->Width + 10 < pbzhu3->Left + pbzhu3->Width)
		{
			if (pbBird->Top <= pbzhu3->Top + pbzhu3->Height || pbBird->Top + pbBird->Height > pbzhu4->Top)
			{
				pbOver->Visible = true;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();
				//axWindowsMediaPlayer2->Ctlcontrols->stop();
				savePoint();
			}
		}

		if (pbBird->Left + pbBird->Width + 10 > pbzhu5->Left&&pbBird->Left + pbBird->Width + 10 < pbzhu5->Left + pbzhu5->Width)
		{
			if (pbBird->Top <= pbzhu5->Top + pbzhu5->Height || pbBird->Top + pbBird->Height > pbzhu6->Top)
			{
				pbOver->Visible = true;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();
				//axWindowsMediaPlayer2->Ctlcontrols->stop();
				savePoint();
			}
		}

	}
			 static double time = 29;

	private: System::Void tRuntime_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (time >= 0)
		{

			this->lbRuntime->Text = time--.ToString();//分数高于7分时自动调入
			if (point > 7)
			{
				FrmGame1^ frm = gcnew FrmGame1();
				frm->Show();
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();
				//axWindowsMediaPlayer2->Ctlcontrols->stop();
				savePoint();
				this->Close();
			}

		}
		else {
			pbOver->Visible = true;
			timer1->Stop();
			tRuntime->Stop();
			TMove->Stop();
			//axWindowsMediaPlayer2->Ctlcontrols->stop();
			savePoint();
		}

	}
			 static int index = 0;
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		pbBird->Image = ilBird->Images[index++];
		if (index >= ilBird->Images->Count) {
			index = 0;
		}
	}
			 static bool left = false;
			 static bool right = false;
			 static int point = 1;
	private: System::Void FrmGame1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Left)
		{
			pbBird->Left = pbBird->Left - 8;
			left = true;
		}
		if (e->KeyCode == System::Windows::Forms::Keys::Right)
		{
			pbBird->Left = pbBird->Left + 8;
			right = true;
		}
		if (e->KeyCode == System::Windows::Forms::Keys::Up)
		{
			if (left)
			{
				pbBird->Top = pbBird->Top - 8;
				pbBird->Left = pbBird->Left - 8;
			}
			else if (right)
			{
				pbBird->Top = pbBird->Top - 8;
				pbBird->Left = pbBird->Left + 8;
			}
			else {
				pbBird->Top = pbBird->Top - 8;
			}
		}
		if (e->KeyCode == System::Windows::Forms::Keys::Down)
		{
			if (left)
			{
				pbBird->Top = pbBird->Top + 8;
				pbBird->Left = pbBird->Left - 8;
			}
			else if (right)
			{
				pbBird->Top = pbBird->Top + 8;
				pbBird->Left = pbBird->Left + 8;
			}
			else {
				pbBird->Top = pbBird->Top + 8;
			}
		}
	}
	private: System::Void pbBack_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void FrmGame1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Left)
		{
			left = false;
		}
		if (e->KeyCode == System::Windows::Forms::Keys::Right)
		{
			right = false;
		}
	}
	private:System::Void  Check()
	{
		if (this->pbBird->Left + pbBird->Width >= pbzhu1->Left&&this->pbBird->Left + pbBird->Width <= pbzhu1->Left + 10) {
			this->lbScore->Text = point++.ToString();
		}

		if (this->pbBird->Left + pbBird->Width >= pbzhu3->Left&&this->pbBird->Left + pbBird->Width <= pbzhu3->Left + 10) {
			this->lbScore->Text = point++.ToString();
		}

		if (this->pbBird->Left + pbBird->Width >= pbzhu5->Left&&this->pbBird->Left + pbBird->Width <= pbzhu5->Left + 10) {
			this->lbScore->Text = point++.ToString();
		}
	}
	private: System::Void pbPause_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Stop();
		tRuntime->Stop();
		TMove->Stop();
		//axWindowsMediaPlayer2->Ctlcontrols->stop();
	}
	private: System::Void pbReplay_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Stop();
		tRuntime->Stop();
		TMove->Stop();

		this->lbRuntime->Text = "" + 30;
		this->lbScore->Text = "" + 0;
		time = 29;
		point = 1;

		this->pbOver->Visible = false;

		this->pbzhu1->Left = 270;
		this->pbzhu1->Top = -3;

		this->pbzhu2->Left = 270;
		this->pbzhu2->Top = 375;

		this->pbzhu3->Left = 665;
		this->pbzhu3->Top = -3;

		this->pbzhu4->Left = 665;
		this->pbzhu4->Top = 465;

		this->pbzhu5->Left = 1040;
		this->pbzhu5->Top = -3;

		this->pbzhu6->Left = 1040;
		this->pbzhu6->Top = 218;



		this->pbBird->Left = 12;
		this->pbBird->Top = 295;

	}
	private: System::Void  savePoint() {
		User* user = new User();
		UserList* ul = new UserList();
		ifstream ifs;
		ifs.open("player.bin", ios::binary);
		int i = 0;
		while (ifs.read((char*)user, sizeof(User)))
		{
			ul->userList[i++] = user;
			user = new User();
		}
		ifs.close();
		ul->userList[0]->point = this->point;
		ul->saveData();
	}
	private: System::Void pbOver_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
