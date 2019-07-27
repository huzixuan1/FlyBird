#pragma once
#include"FrmGame3.h"
namespace FlyBird {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmGame2 摘要
	/// </summary>
	public ref class FrmGame2 : public System::Windows::Forms::Form
	{
	public:
		FrmGame2(void)
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
		~FrmGame2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pbZhu1;
	private: System::Windows::Forms::PictureBox^  pbZhu2;
	private: System::Windows::Forms::PictureBox^  pbZhu3;
	private: System::Windows::Forms::PictureBox^  pbZhu4;
	private: System::Windows::Forms::PictureBox^  pbZhu5;
	private: System::Windows::Forms::PictureBox^  pbZhu6;
	protected:

	protected:





	private: System::Windows::Forms::PictureBox^  pbBird;
	private: System::Windows::Forms::PictureBox^  pbPause;
	private: System::Windows::Forms::PictureBox^  pbStart;
	private: System::Windows::Forms::PictureBox^  pbBack;
	private: System::Windows::Forms::PictureBox^  pbRestart;
	private: System::Windows::Forms::PictureBox^  pbMusic;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbScore;
	private: System::Windows::Forms::Label^  lbRuntime;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ImageList^  ilBird;
	private: System::Windows::Forms::Timer^  TMove;
	private: System::Windows::Forms::Timer^  tRuntime;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pbOver;
	private: System::Windows::Forms::PictureBox^  pbZhu7;
	private: System::Windows::Forms::PictureBox^  pbZhu8;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmGame2::typeid));
			this->pbZhu1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbZhu2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbZhu3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbZhu4 = (gcnew System::Windows::Forms::PictureBox());
			this->pbZhu5 = (gcnew System::Windows::Forms::PictureBox());
			this->pbZhu6 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBird = (gcnew System::Windows::Forms::PictureBox());
			this->pbPause = (gcnew System::Windows::Forms::PictureBox());
			this->pbStart = (gcnew System::Windows::Forms::PictureBox());
			this->pbBack = (gcnew System::Windows::Forms::PictureBox());
			this->pbRestart = (gcnew System::Windows::Forms::PictureBox());
			this->pbMusic = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbScore = (gcnew System::Windows::Forms::Label());
			this->lbRuntime = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ilBird = (gcnew System::Windows::Forms::ImageList(this->components));
			this->TMove = (gcnew System::Windows::Forms::Timer(this->components));
			this->tRuntime = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pbOver = (gcnew System::Windows::Forms::PictureBox());
			this->pbZhu7 = (gcnew System::Windows::Forms::PictureBox());
			this->pbZhu8 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBird))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPause))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbRestart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMusic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOver))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu8))->BeginInit();
			this->SuspendLayout();
			// 
			// pbZhu1
			// 
			this->pbZhu1->BackColor = System::Drawing::Color::Transparent;
			this->pbZhu1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbZhu1.Image")));
			this->pbZhu1->Location = System::Drawing::Point(252, -33);
			this->pbZhu1->Margin = System::Windows::Forms::Padding(2);
			this->pbZhu1->Name = L"pbZhu1";
			this->pbZhu1->Size = System::Drawing::Size(86, 376);
			this->pbZhu1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbZhu1->TabIndex = 37;
			this->pbZhu1->TabStop = false;
			// 
			// pbZhu2
			// 
			this->pbZhu2->BackColor = System::Drawing::Color::Transparent;
			this->pbZhu2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbZhu2.Image")));
			this->pbZhu2->Location = System::Drawing::Point(252, 515);
			this->pbZhu2->Margin = System::Windows::Forms::Padding(2);
			this->pbZhu2->Name = L"pbZhu2";
			this->pbZhu2->Size = System::Drawing::Size(86, 122);
			this->pbZhu2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbZhu2->TabIndex = 38;
			this->pbZhu2->TabStop = false;
			// 
			// pbZhu3
			// 
			this->pbZhu3->BackColor = System::Drawing::Color::Transparent;
			this->pbZhu3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbZhu3.Image")));
			this->pbZhu3->Location = System::Drawing::Point(484, -12);
			this->pbZhu3->Margin = System::Windows::Forms::Padding(2);
			this->pbZhu3->Name = L"pbZhu3";
			this->pbZhu3->Size = System::Drawing::Size(86, 250);
			this->pbZhu3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbZhu3->TabIndex = 39;
			this->pbZhu3->TabStop = false;
			// 
			// pbZhu4
			// 
			this->pbZhu4->BackColor = System::Drawing::Color::Transparent;
			this->pbZhu4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbZhu4.Image")));
			this->pbZhu4->Location = System::Drawing::Point(484, 417);
			this->pbZhu4->Margin = System::Windows::Forms::Padding(2);
			this->pbZhu4->Name = L"pbZhu4";
			this->pbZhu4->Size = System::Drawing::Size(86, 244);
			this->pbZhu4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbZhu4->TabIndex = 40;
			this->pbZhu4->TabStop = false;
			// 
			// pbZhu5
			// 
			this->pbZhu5->BackColor = System::Drawing::Color::Transparent;
			this->pbZhu5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbZhu5.Image")));
			this->pbZhu5->Location = System::Drawing::Point(755, -2);
			this->pbZhu5->Margin = System::Windows::Forms::Padding(2);
			this->pbZhu5->Name = L"pbZhu5";
			this->pbZhu5->Size = System::Drawing::Size(86, 142);
			this->pbZhu5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbZhu5->TabIndex = 41;
			this->pbZhu5->TabStop = false;
			// 
			// pbZhu6
			// 
			this->pbZhu6->BackColor = System::Drawing::Color::Transparent;
			this->pbZhu6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbZhu6.Image")));
			this->pbZhu6->Location = System::Drawing::Point(755, 307);
			this->pbZhu6->Margin = System::Windows::Forms::Padding(2);
			this->pbZhu6->Name = L"pbZhu6";
			this->pbZhu6->Size = System::Drawing::Size(86, 369);
			this->pbZhu6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbZhu6->TabIndex = 42;
			this->pbZhu6->TabStop = false;
			// 
			// pbBird
			// 
			this->pbBird->BackColor = System::Drawing::Color::Transparent;
			this->pbBird->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBird.Image")));
			this->pbBird->Location = System::Drawing::Point(112, 417);
			this->pbBird->Name = L"pbBird";
			this->pbBird->Size = System::Drawing::Size(45, 33);
			this->pbBird->TabIndex = 43;
			this->pbBird->TabStop = false;
			this->pbBird->Visible = false;
			this->pbBird->Click += gcnew System::EventHandler(this, &FrmGame2::pbBird_Click);
			// 
			// pbPause
			// 
			this->pbPause->BackColor = System::Drawing::Color::Transparent;
			this->pbPause->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPause.BackgroundImage")));
			this->pbPause->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbPause->Location = System::Drawing::Point(74, 694);
			this->pbPause->Name = L"pbPause";
			this->pbPause->Size = System::Drawing::Size(45, 41);
			this->pbPause->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPause->TabIndex = 44;
			this->pbPause->TabStop = false;
			this->pbPause->Click += gcnew System::EventHandler(this, &FrmGame2::pbPause_Click);
			// 
			// pbStart
			// 
			this->pbStart->BackColor = System::Drawing::Color::Transparent;
			this->pbStart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbStart.BackgroundImage")));
			this->pbStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbStart->Location = System::Drawing::Point(183, 694);
			this->pbStart->Name = L"pbStart";
			this->pbStart->Size = System::Drawing::Size(45, 41);
			this->pbStart->TabIndex = 45;
			this->pbStart->TabStop = false;
			this->pbStart->Click += gcnew System::EventHandler(this, &FrmGame2::pbStart_Click);
			// 
			// pbBack
			// 
			this->pbBack->BackColor = System::Drawing::Color::Transparent;
			this->pbBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBack.BackgroundImage")));
			this->pbBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbBack->Location = System::Drawing::Point(409, 694);
			this->pbBack->Name = L"pbBack";
			this->pbBack->Size = System::Drawing::Size(45, 41);
			this->pbBack->TabIndex = 46;
			this->pbBack->TabStop = false;
			this->pbBack->Click += gcnew System::EventHandler(this, &FrmGame2::pbBack_Click);
			// 
			// pbRestart
			// 
			this->pbRestart->BackColor = System::Drawing::Color::Transparent;
			this->pbRestart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbRestart.BackgroundImage")));
			this->pbRestart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbRestart->Location = System::Drawing::Point(293, 694);
			this->pbRestart->Name = L"pbRestart";
			this->pbRestart->Size = System::Drawing::Size(45, 41);
			this->pbRestart->TabIndex = 47;
			this->pbRestart->TabStop = false;
			this->pbRestart->Click += gcnew System::EventHandler(this, &FrmGame2::pbRestart_Click);
			// 
			// pbMusic
			// 
			this->pbMusic->BackColor = System::Drawing::Color::Transparent;
			this->pbMusic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMusic.BackgroundImage")));
			this->pbMusic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbMusic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMusic.Image")));
			this->pbMusic->Location = System::Drawing::Point(524, 694);
			this->pbMusic->Name = L"pbMusic";
			this->pbMusic->Size = System::Drawing::Size(46, 41);
			this->pbMusic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbMusic->TabIndex = 48;
			this->pbMusic->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(21, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 46);
			this->label1->TabIndex = 49;
			this->label1->Text = L"分数";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(21, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 46);
			this->label2->TabIndex = 50;
			this->label2->Text = L"时间:";
			// 
			// lbScore
			// 
			this->lbScore->AutoSize = true;
			this->lbScore->BackColor = System::Drawing::Color::Transparent;
			this->lbScore->Font = (gcnew System::Drawing::Font(L"微软雅黑", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lbScore->Location = System::Drawing::Point(116, 96);
			this->lbScore->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbScore->Name = L"lbScore";
			this->lbScore->Size = System::Drawing::Size(41, 46);
			this->lbScore->TabIndex = 51;
			this->lbScore->Text = L"0";
			// 
			// lbRuntime
			// 
			this->lbRuntime->AutoSize = true;
			this->lbRuntime->BackColor = System::Drawing::Color::Transparent;
			this->lbRuntime->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lbRuntime->Location = System::Drawing::Point(132, 9);
			this->lbRuntime->Name = L"lbRuntime";
			this->lbRuntime->Size = System::Drawing::Size(62, 46);
			this->lbRuntime->TabIndex = 52;
			this->lbRuntime->Text = L"45";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(173, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 46);
			this->label3->TabIndex = 53;
			this->label3->Text = L"秒";
			// 
			// ilBird
			// 
			this->ilBird->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ilBird.ImageStream")));
			this->ilBird->TransparentColor = System::Drawing::Color::Transparent;
			this->ilBird->Images->SetKeyName(0, L"上.png");
			this->ilBird->Images->SetKeyName(1, L"中.png");
			this->ilBird->Images->SetKeyName(2, L"下.png");
			// 
			// TMove
			// 
			this->TMove->Interval = 1;
			this->TMove->Tick += gcnew System::EventHandler(this, &FrmGame2::TMove_Tick);
			// 
			// tRuntime
			// 
			this->tRuntime->Interval = 1000;
			this->tRuntime->Tick += gcnew System::EventHandler(this, &FrmGame2::tRuntime_Tick);
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmGame2::timer1_Tick);
			// 
			// pbOver
			// 
			this->pbOver->BackColor = System::Drawing::Color::Transparent;
			this->pbOver->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbOver.BackgroundImage")));
			this->pbOver->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbOver->Location = System::Drawing::Point(409, 175);
			this->pbOver->Name = L"pbOver";
			this->pbOver->Size = System::Drawing::Size(457, 292);
			this->pbOver->TabIndex = 54;
			this->pbOver->TabStop = false;
			// 
			// pbZhu7
			// 
			this->pbZhu7->BackColor = System::Drawing::Color::Transparent;
			this->pbZhu7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbZhu7.Image")));
			this->pbZhu7->Location = System::Drawing::Point(996, -2);
			this->pbZhu7->Margin = System::Windows::Forms::Padding(2);
			this->pbZhu7->Name = L"pbZhu7";
			this->pbZhu7->Size = System::Drawing::Size(86, 250);
			this->pbZhu7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbZhu7->TabIndex = 55;
			this->pbZhu7->TabStop = false;
			// 
			// pbZhu8
			// 
			this->pbZhu8->BackColor = System::Drawing::Color::Transparent;
			this->pbZhu8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbZhu8.Image")));
			this->pbZhu8->Location = System::Drawing::Point(996, 417);
			this->pbZhu8->Margin = System::Windows::Forms::Padding(2);
			this->pbZhu8->Name = L"pbZhu8";
			this->pbZhu8->Size = System::Drawing::Size(86, 256);
			this->pbZhu8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbZhu8->TabIndex = 56;
			this->pbZhu8->TabStop = false;
			// 
			// FrmGame2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1370, 649);
			this->Controls->Add(this->pbZhu8);
			this->Controls->Add(this->pbZhu7);
			this->Controls->Add(this->pbOver);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbRuntime);
			this->Controls->Add(this->lbScore);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pbMusic);
			this->Controls->Add(this->pbRestart);
			this->Controls->Add(this->pbBack);
			this->Controls->Add(this->pbStart);
			this->Controls->Add(this->pbPause);
			this->Controls->Add(this->pbBird);
			this->Controls->Add(this->pbZhu6);
			this->Controls->Add(this->pbZhu5);
			this->Controls->Add(this->pbZhu4);
			this->Controls->Add(this->pbZhu3);
			this->Controls->Add(this->pbZhu2);
			this->Controls->Add(this->pbZhu1);
			this->DoubleBuffered = true;
			this->Name = L"FrmGame2";
			this->Text = L"关卡2";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmGame2::FrmGame2_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmGame2::FrmGame2_KeyUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmGame2::FrmGame2_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmGame2::FrmGame2_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBird))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPause))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbRestart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMusic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOver))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZhu8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int x, y;
	private: System::Void FrmGame2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			x = e->X;
			y = e->Y;
		}

	}
	private: System::Void FrmGame2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			this->Top = this->Top + (e->Y - y);
			this->Left = this->Left + (e->X - x);
		}

	}
	private: System::Void pbStart_Click(System::Object^  sender, System::EventArgs^  e) {
		this->pbBird->Visible = true;
		timer1->Start();
		tRuntime->Start();
		TMove->Start();
	}
	private:System::Void  Check()
	{
		if (this->pbBird->Left + pbBird->Width >= pbZhu1->Left&&this->pbBird->Left + pbBird->Width <= pbZhu1->Left + 10) {
			this->lbScore->Text = point++.ToString();
		}

		if (this->pbBird->Left + pbBird->Width >= pbZhu3->Left&&this->pbBird->Left + pbBird->Width <= pbZhu3->Left + 10) {
			this->lbScore->Text = point++.ToString();
		}

		if (this->pbBird->Left + pbBird->Width >= pbZhu5->Left&&this->pbBird->Left + pbBird->Width <= pbZhu5->Left + 10) {
			this->lbScore->Text = point++.ToString();
		}

		if (this->pbBird->Left + pbBird->Width >= pbZhu7->Left&&this->pbBird->Left + pbBird->Width <= pbZhu7->Left + 10) {
			this->lbScore->Text = point++.ToString();
		}
	}
			static bool isAlive = true;

	private: System::Void TMove_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (pbZhu1->Left > 1)
		{
			pbZhu1->Left -= 10;
		}
		else if (pbZhu1->Left <= 1)
		{
			pbZhu1->Left += 1400;
			pbZhu1->Left -= 10;
		}

		if (pbZhu2->Left > 1)
		{
			pbZhu2->Left -= 10;
		}
		else if (pbZhu2->Left <= 1)
		{
			pbZhu2->Left += 1400;
			pbZhu2->Left -= 10;
		}

		if (pbZhu3->Left > 1)
		{
			pbZhu3->Left -= 10;
		}
		else if (pbZhu3->Left <= 1)
		{
			pbZhu3->Left += 1400;
			pbZhu3->Left -= 10;
		}

		if (pbZhu4->Left > 1)
		{
			pbZhu4->Left -= 10;
		}
		else if (pbZhu4->Left <= 1)
		{
			pbZhu4->Left += 1400;
			pbZhu4->Left -= 10;
		}

		if (pbZhu5->Left > 1)
		{
			pbZhu5->Left -= 10;
		}
		else if (pbZhu5->Left <= 1)
		{
			pbZhu5->Left += 1400;
			pbZhu5->Left -= 10;
		}

		if (pbZhu6->Left > 1)
		{
			pbZhu6->Left -= 10;
		}
		else if (pbZhu6->Left <= 1)
		{
			pbZhu6->Left += 1400;
			pbZhu6->Left -= 10;
		}

		if (pbZhu7->Left > 1)
		{
			pbZhu7->Left -= 10;
		}
		else if (pbZhu7->Left <= 1)
		{
			pbZhu7->Left += 1400;
			pbZhu7->Left -= 10;
		}

		if (pbZhu8->Left > 1)
		{
			pbZhu8->Left -= 10;
		}
		else if (pbZhu8->Left <= 1)
		{
			pbZhu8->Left += 1400;
			pbZhu8->Left -= 10;
		}

		Check();


		if (pbBird->Left + pbBird->Width + 10 >= pbZhu1->Left&&pbBird->Left + pbBird->Width + 10 <= pbZhu1->Left + pbZhu1->Width)
		{
			if (pbBird->Top <= pbZhu1->Top + pbZhu1->Height || pbBird->Top + pbBird->Height >= pbZhu2->Top)
			{
				pbOver->Visible = true;
				isAlive = false;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();

			}
		}

		if (pbBird->Left + pbBird->Width + 10 >= pbZhu3->Left&&pbBird->Left + pbBird->Width + 10 <= pbZhu3->Left + pbZhu3->Width)
		{
			if (pbBird->Top <= pbZhu3->Top + pbZhu3->Height || pbBird->Top + pbBird->Height >= pbZhu4->Top)
			{
				pbOver->Visible = true;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();

			}
		}

		if (pbBird->Left + pbBird->Width + 10 >= pbZhu5->Left&&pbBird->Left + pbBird->Width + 10 <= pbZhu5->Left + pbZhu5->Width)
		{
			if (pbBird->Top <= pbZhu5->Top + pbZhu5->Height || pbBird->Top + pbBird->Height >= pbZhu6->Top)
			{
				pbOver->Visible = true;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();

			}
		}

		if (pbBird->Left + pbBird->Width + 10 >= pbZhu7->Left&&pbBird->Left + pbBird->Width + 10 <= pbZhu7->Left + pbZhu7->Width)
		{
			if (pbBird->Top <= pbZhu7->Top + pbZhu7->Height || pbBird->Top + pbBird->Height >= pbZhu8->Top)
			{
				pbOver->Visible = true;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();

			}
		}

	}
			 static double time = 44;
	private: System::Void tRuntime_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (time >= 0)
		{

			this->lbRuntime->Text = time--.ToString();
			if (point>17)
			{
				FrmGame3^ frm = gcnew FrmGame3();
				frm->Show();
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();
				
				Close();
			}

		}
		else {
			pbOver->Visible = true;
			timer1->Stop();
			tRuntime->Stop();
			TMove->Stop();
			
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

	

private: System::Void FrmGame2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

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
private: System::Void FrmGame2_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

	if (e->KeyCode == System::Windows::Forms::Keys::Left)
	{
		left = false;
	}
	if (e->KeyCode == System::Windows::Forms::Keys::Right)
	{
		right = false;
	}
}
private: System::Void pbRestart_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Stop();
	tRuntime->Stop();
	TMove->Stop();

	this->lbRuntime->Text = "" + 45;
	this->lbScore->Text = "" + 0;
	time = 44;
	point = 1;

	this->pbOver->Visible = false;

	this->pbZhu1->Left = 220;
	this->pbZhu1->Top = 1;

	this->pbZhu2->Left = 220;
	this->pbZhu2->Top = 469;

	this->pbZhu3->Left = 598;
	this->pbZhu3->Top = 1;

	this->pbZhu4->Left = 598;
	this->pbZhu4->Top = 347;

	this->pbZhu5->Left = 990;
	this->pbZhu5->Top = 1;

	this->pbZhu6->Left = 990;
	this->pbZhu6->Top = 222;

	this->pbZhu7->Left = 1368;
	this->pbZhu7->Top = 1;

	this->pbZhu8->Left = 1368;
	this->pbZhu8->Top = 335;

	this->pbBird->Left = 12;
	this->pbBird->Top = 295;


}
private: System::Void pbPause_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Stop();
	tRuntime->Stop();
	TMove->Stop();

}
private: System::Void pbBack_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void pbBird_Click(System::Object^  sender, System::EventArgs^  e) {
}
};

}

