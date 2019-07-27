#pragma once

namespace FlyBird {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmGame3 摘要
	/// </summary>
	public ref class FrmGame3 : public System::Windows::Forms::Form
	{
	public:
		FrmGame3(void)
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
		~FrmGame3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pbBird;
	protected:
	private: System::Windows::Forms::PictureBox^  Pb_Zhu2;
	private: System::Windows::Forms::PictureBox^  Pb_Zhu1;


	private: System::Windows::Forms::PictureBox^  Pb_Zhu6;
	private: System::Windows::Forms::PictureBox^  Pb_Zhu5;

	private: System::Windows::Forms::ImageList^  ilBird;
	private: System::Windows::Forms::Timer^  TMove;
	private: System::Windows::Forms::Timer^  tRuntime;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pbPause;
	private: System::Windows::Forms::PictureBox^  pbStart;
	private: System::Windows::Forms::PictureBox^  pbMusicStart;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbScore;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbRuntime;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pbBack;
	private: System::Windows::Forms::PictureBox^  pbRestart;
	private: System::Windows::Forms::PictureBox^  Pb_Zhu4;
	private: System::Windows::Forms::PictureBox^  Pb_Zhu3;
	private: System::Windows::Forms::PictureBox^  pbOver;
	private: System::Windows::Forms::PictureBox^  Pb_Zhu8;
	private: System::Windows::Forms::PictureBox^  Pb_Zhu7;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmGame3::typeid));
			this->pbBird = (gcnew System::Windows::Forms::PictureBox());
			this->Pb_Zhu2 = (gcnew System::Windows::Forms::PictureBox());
			this->Pb_Zhu1 = (gcnew System::Windows::Forms::PictureBox());
			this->Pb_Zhu6 = (gcnew System::Windows::Forms::PictureBox());
			this->Pb_Zhu5 = (gcnew System::Windows::Forms::PictureBox());
			this->ilBird = (gcnew System::Windows::Forms::ImageList(this->components));
			this->TMove = (gcnew System::Windows::Forms::Timer(this->components));
			this->tRuntime = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pbPause = (gcnew System::Windows::Forms::PictureBox());
			this->pbStart = (gcnew System::Windows::Forms::PictureBox());
			this->pbMusicStart = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbScore = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbRuntime = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pbBack = (gcnew System::Windows::Forms::PictureBox());
			this->pbRestart = (gcnew System::Windows::Forms::PictureBox());
			this->Pb_Zhu4 = (gcnew System::Windows::Forms::PictureBox());
			this->Pb_Zhu3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbOver = (gcnew System::Windows::Forms::PictureBox());
			this->Pb_Zhu8 = (gcnew System::Windows::Forms::PictureBox());
			this->Pb_Zhu7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBird))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPause))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMusicStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbRestart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOver))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu7))->BeginInit();
			this->SuspendLayout();
			// 
			// pbBird
			// 
			this->pbBird->BackColor = System::Drawing::Color::Transparent;
			this->pbBird->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBird.Image")));
			this->pbBird->Location = System::Drawing::Point(12, 149);
			this->pbBird->Name = L"pbBird";
			this->pbBird->Size = System::Drawing::Size(45, 31);
			this->pbBird->TabIndex = 64;
			this->pbBird->TabStop = false;
			this->pbBird->Visible = false;
			// 
			// Pb_Zhu2
			// 
			this->Pb_Zhu2->BackColor = System::Drawing::Color::Transparent;
			this->Pb_Zhu2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Zhu2.Image")));
			this->Pb_Zhu2->Location = System::Drawing::Point(134, 205);
			this->Pb_Zhu2->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Zhu2->Name = L"Pb_Zhu2";
			this->Pb_Zhu2->Size = System::Drawing::Size(86, 367);
			this->Pb_Zhu2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Pb_Zhu2->TabIndex = 65;
			this->Pb_Zhu2->TabStop = false;
			// 
			// Pb_Zhu1
			// 
			this->Pb_Zhu1->BackColor = System::Drawing::Color::Transparent;
			this->Pb_Zhu1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Zhu1.Image")));
			this->Pb_Zhu1->Location = System::Drawing::Point(134, -5);
			this->Pb_Zhu1->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Zhu1->Name = L"Pb_Zhu1";
			this->Pb_Zhu1->Size = System::Drawing::Size(86, 142);
			this->Pb_Zhu1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Pb_Zhu1->TabIndex = 66;
			this->Pb_Zhu1->TabStop = false;
			// 
			// Pb_Zhu6
			// 
			this->Pb_Zhu6->BackColor = System::Drawing::Color::Transparent;
			this->Pb_Zhu6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Zhu6.Image")));
			this->Pb_Zhu6->Location = System::Drawing::Point(803, 215);
			this->Pb_Zhu6->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Zhu6->Name = L"Pb_Zhu6";
			this->Pb_Zhu6->Size = System::Drawing::Size(86, 367);
			this->Pb_Zhu6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Pb_Zhu6->TabIndex = 70;
			this->Pb_Zhu6->TabStop = false;
			// 
			// Pb_Zhu5
			// 
			this->Pb_Zhu5->BackColor = System::Drawing::Color::Transparent;
			this->Pb_Zhu5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Zhu5.Image")));
			this->Pb_Zhu5->Location = System::Drawing::Point(803, -5);
			this->Pb_Zhu5->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Zhu5->Name = L"Pb_Zhu5";
			this->Pb_Zhu5->Size = System::Drawing::Size(86, 142);
			this->Pb_Zhu5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Pb_Zhu5->TabIndex = 71;
			this->Pb_Zhu5->TabStop = false;
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
			this->TMove->Tick += gcnew System::EventHandler(this, &FrmGame3::TMove_Tick_1);
			// 
			// tRuntime
			// 
			this->tRuntime->Interval = 1000;
			this->tRuntime->Tick += gcnew System::EventHandler(this, &FrmGame3::tRuntime_Tick_1);
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmGame3::timer1_Tick);
			// 
			// pbPause
			// 
			this->pbPause->BackColor = System::Drawing::Color::Transparent;
			this->pbPause->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPause.BackgroundImage")));
			this->pbPause->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbPause->Location = System::Drawing::Point(224, 584);
			this->pbPause->Name = L"pbPause";
			this->pbPause->Size = System::Drawing::Size(45, 41);
			this->pbPause->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPause->TabIndex = 73;
			this->pbPause->TabStop = false;
			this->pbPause->Click += gcnew System::EventHandler(this, &FrmGame3::pbPause_Click);
			// 
			// pbStart
			// 
			this->pbStart->BackColor = System::Drawing::Color::Transparent;
			this->pbStart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbStart.BackgroundImage")));
			this->pbStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbStart->Location = System::Drawing::Point(325, 584);
			this->pbStart->Name = L"pbStart";
			this->pbStart->Size = System::Drawing::Size(45, 41);
			this->pbStart->TabIndex = 74;
			this->pbStart->TabStop = false;
			this->pbStart->Click += gcnew System::EventHandler(this, &FrmGame3::pbStart_Click);
			// 
			// pbMusicStart
			// 
			this->pbMusicStart->BackColor = System::Drawing::Color::Transparent;
			this->pbMusicStart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMusicStart.BackgroundImage")));
			this->pbMusicStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbMusicStart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMusicStart.Image")));
			this->pbMusicStart->Location = System::Drawing::Point(439, 584);
			this->pbMusicStart->Name = L"pbMusicStart";
			this->pbMusicStart->Size = System::Drawing::Size(46, 41);
			this->pbMusicStart->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbMusicStart->TabIndex = 75;
			this->pbMusicStart->TabStop = false;
			this->pbMusicStart->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(526, 584);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 46);
			this->label1->TabIndex = 76;
			this->label1->Text = L"分数";
			// 
			// lbScore
			// 
			this->lbScore->AutoSize = true;
			this->lbScore->BackColor = System::Drawing::Color::Transparent;
			this->lbScore->Font = (gcnew System::Drawing::Font(L"微软雅黑", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lbScore->Location = System::Drawing::Point(621, 584);
			this->lbScore->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbScore->Name = L"lbScore";
			this->lbScore->Size = System::Drawing::Size(41, 46);
			this->lbScore->TabIndex = 77;
			this->lbScore->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(678, 584);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 46);
			this->label2->TabIndex = 78;
			this->label2->Text = L"时间:";
			// 
			// lbRuntime
			// 
			this->lbRuntime->AutoSize = true;
			this->lbRuntime->BackColor = System::Drawing::Color::Transparent;
			this->lbRuntime->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lbRuntime->Location = System::Drawing::Point(782, 584);
			this->lbRuntime->Name = L"lbRuntime";
			this->lbRuntime->Size = System::Drawing::Size(62, 46);
			this->lbRuntime->TabIndex = 79;
			this->lbRuntime->Text = L"60";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(834, 584);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 46);
			this->label3->TabIndex = 80;
			this->label3->Text = L"秒";
			// 
			// pbBack
			// 
			this->pbBack->BackColor = System::Drawing::Color::Transparent;
			this->pbBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBack.BackgroundImage")));
			this->pbBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbBack->Location = System::Drawing::Point(953, 584);
			this->pbBack->Name = L"pbBack";
			this->pbBack->Size = System::Drawing::Size(45, 41);
			this->pbBack->TabIndex = 81;
			this->pbBack->TabStop = false;
			this->pbBack->Click += gcnew System::EventHandler(this, &FrmGame3::pbBack_Click);
			// 
			// pbRestart
			// 
			this->pbRestart->BackColor = System::Drawing::Color::Transparent;
			this->pbRestart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbRestart.BackgroundImage")));
			this->pbRestart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbRestart->Location = System::Drawing::Point(1037, 584);
			this->pbRestart->Name = L"pbRestart";
			this->pbRestart->Size = System::Drawing::Size(45, 41);
			this->pbRestart->TabIndex = 82;
			this->pbRestart->TabStop = false;
			this->pbRestart->Click += gcnew System::EventHandler(this, &FrmGame3::pbRestart_Click);
			// 
			// Pb_Zhu4
			// 
			this->Pb_Zhu4->BackColor = System::Drawing::Color::Transparent;
			this->Pb_Zhu4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Zhu4.Image")));
			this->Pb_Zhu4->Location = System::Drawing::Point(474, 501);
			this->Pb_Zhu4->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Zhu4->Name = L"Pb_Zhu4";
			this->Pb_Zhu4->Size = System::Drawing::Size(86, 81);
			this->Pb_Zhu4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Pb_Zhu4->TabIndex = 69;
			this->Pb_Zhu4->TabStop = false;
			// 
			// Pb_Zhu3
			// 
			this->Pb_Zhu3->BackColor = System::Drawing::Color::Transparent;
			this->Pb_Zhu3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Zhu3.Image")));
			this->Pb_Zhu3->Location = System::Drawing::Point(474, -5);
			this->Pb_Zhu3->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Zhu3->Name = L"Pb_Zhu3";
			this->Pb_Zhu3->Size = System::Drawing::Size(86, 412);
			this->Pb_Zhu3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Pb_Zhu3->TabIndex = 83;
			this->Pb_Zhu3->TabStop = false;
			// 
			// pbOver
			// 
			this->pbOver->BackColor = System::Drawing::Color::Transparent;
			this->pbOver->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbOver.Image")));
			this->pbOver->Location = System::Drawing::Point(227, 120);
			this->pbOver->Margin = System::Windows::Forms::Padding(2);
			this->pbOver->Name = L"pbOver";
			this->pbOver->Size = System::Drawing::Size(572, 408);
			this->pbOver->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbOver->TabIndex = 84;
			this->pbOver->TabStop = false;
			this->pbOver->Visible = false;
			this->pbOver->Click += gcnew System::EventHandler(this, &FrmGame3::pbOver_Click);
			// 
			// Pb_Zhu8
			// 
			this->Pb_Zhu8->BackColor = System::Drawing::Color::Transparent;
			this->Pb_Zhu8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Zhu8.Image")));
			this->Pb_Zhu8->Location = System::Drawing::Point(1120, 293);
			this->Pb_Zhu8->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Zhu8->Name = L"Pb_Zhu8";
			this->Pb_Zhu8->Size = System::Drawing::Size(86, 289);
			this->Pb_Zhu8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Pb_Zhu8->TabIndex = 85;
			this->Pb_Zhu8->TabStop = false;
			// 
			// Pb_Zhu7
			// 
			this->Pb_Zhu7->BackColor = System::Drawing::Color::Transparent;
			this->Pb_Zhu7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Zhu7.Image")));
			this->Pb_Zhu7->Location = System::Drawing::Point(1120, -20);
			this->Pb_Zhu7->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Zhu7->Name = L"Pb_Zhu7";
			this->Pb_Zhu7->Size = System::Drawing::Size(86, 250);
			this->Pb_Zhu7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Pb_Zhu7->TabIndex = 86;
			this->Pb_Zhu7->TabStop = false;
			// 
			// FrmGame3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1370, 649);
			this->Controls->Add(this->Pb_Zhu7);
			this->Controls->Add(this->Pb_Zhu8);
			this->Controls->Add(this->pbOver);
			this->Controls->Add(this->Pb_Zhu3);
			this->Controls->Add(this->pbRestart);
			this->Controls->Add(this->pbBack);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbRuntime);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbScore);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pbMusicStart);
			this->Controls->Add(this->pbStart);
			this->Controls->Add(this->pbPause);
			this->Controls->Add(this->Pb_Zhu5);
			this->Controls->Add(this->Pb_Zhu6);
			this->Controls->Add(this->Pb_Zhu4);
			this->Controls->Add(this->Pb_Zhu1);
			this->Controls->Add(this->Pb_Zhu2);
			this->Controls->Add(this->pbBird);
			this->DoubleBuffered = true;
			this->Name = L"FrmGame3";
			this->Text = L"关卡3";
			this->Load += gcnew System::EventHandler(this, &FrmGame3::FrmGame3_Load);
			this->Click += gcnew System::EventHandler(this, &FrmGame3::FrmGame3_Click);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmGame3::FrmGame3_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmGame3::FrmGame3_KeyUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmGame3::FrmGame3_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmGame3::FrmGame3_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBird))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPause))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMusicStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbRestart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOver))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Zhu7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FrmGame3_Load(System::Object^  sender, System::EventArgs^  e) {

	}
			 int x, y;
	private: System::Void FrmGame3_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			x = e->X;//记录鼠标点击位置
			y = e->Y;
		}
	}
	private: System::Void FrmGame3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			this->Top = this->Top + (e->Y - y);//鼠标的移动
			this->Left = this->Left + (e->X - x);
		}
	}

	private: System::Void FrmGame3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
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
			 static int index = 0;

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		pbBird->Image = ilBird->Images[index++];
		if (index >= ilBird->Images->Count) {
			index = 0;
		}
	}
			 static bool left = false;
			 static bool right = false;
	private: System::Void FrmGame3_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Left)
		{
			left = false;
		}
		if (e->KeyCode == System::Windows::Forms::Keys::Right)
		{
			right = false;
		}
	}

	private: System::Void pbPause_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Stop();
		tRuntime->Stop();
		TMove->Stop();

	}
	private: System::Void pbStart_Click(System::Object^  sender, System::EventArgs^  e) {
		this->pbBird->Visible = true;
		timer1->Start();
		tRuntime->Start();
		TMove->Start();

	}
			 static int point = 1;
	private:System::Void  Check()
	{
		if (this->pbBird->Left + pbBird->Width >= Pb_Zhu1->Left&&this->pbBird->Left + pbBird->Width <= Pb_Zhu1->Left + 15) {
			this->lbScore->Text = point++.ToString();
		}

		if (this->pbBird->Left + pbBird->Width >= Pb_Zhu3->Left&&this->pbBird->Left + pbBird->Width <= Pb_Zhu3->Left + 15) {
			this->lbScore->Text = point++.ToString();
		}

		if (this->pbBird->Left + pbBird->Width >= Pb_Zhu5->Left&&this->pbBird->Left + pbBird->Width <= Pb_Zhu5->Left + 15) {
			this->lbScore->Text = point++.ToString();
		}

		if (this->pbBird->Left + pbBird->Width >= Pb_Zhu7->Left&&this->pbBird->Left + pbBird->Width <= Pb_Zhu7->Left + 15) {
			this->lbScore->Text = point++.ToString();
		}

	}


			static bool isAlive = true;
	private: System::Void TMove_Tick(System::Object^  sender, System::EventArgs^  e) {
		
	}
			 static double time = 59;
	private: System::Void FrmGame3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tRuntime_Tick_1(System::Object^  sender, System::EventArgs^  e) {

		if (time >= 0)
		{

			this->lbRuntime->Text = time--.ToString();
			/* if (point)
			{
			MessageBox::Show("恭喜你已成功完成所有关卡！");
			}*/
		}
		else {
			pbOver->Visible = true;
			timer1->Stop();
			tRuntime->Stop();
			TMove->Stop();
			/*axWindowsMediaPlayer1->Ctlcontrols->stop();*/
			MessageBox::Show("恭喜你已成功完成所有关卡！");
		}
	}
	private: System::Void TMove_Tick_1(System::Object^  sender, System::EventArgs^  e) {
		if (Pb_Zhu1->Left > 1)
		{
			Pb_Zhu1->Left -= 15;
		}
		else if (Pb_Zhu1->Left <= 1)
		{
			Pb_Zhu1->Left += 1400;
			Pb_Zhu1->Left -= 15;
		}

		if (Pb_Zhu2->Left > 1)
		{
			Pb_Zhu2->Left -= 15;
		}
		else if (Pb_Zhu2->Left <= 1)
		{
			Pb_Zhu2->Left += 1400;
			Pb_Zhu2->Left -= 15;
		}

		if (Pb_Zhu3->Left > 1)
		{
			Pb_Zhu3->Left -= 15;
		}
		else if (Pb_Zhu3->Left <= 1)
		{
			Pb_Zhu3->Left += 1400;
			Pb_Zhu3->Left -= 15;
		}

		if (Pb_Zhu4->Left > 1)
		{
			Pb_Zhu4->Left -= 15;
		}
		else if (Pb_Zhu4->Left <= 1)
		{
			Pb_Zhu4->Left += 1400;
			Pb_Zhu4->Left -= 15;
		}

		if (Pb_Zhu5->Left > 1)
		{
			Pb_Zhu5->Left -= 15;
		}
		else if (Pb_Zhu5->Left <= 1)
		{
			Pb_Zhu5->Left += 1400;
			Pb_Zhu5->Left -= 15;
		}

		if (Pb_Zhu6->Left > 1)
		{
			Pb_Zhu6->Left -= 15;
		}
		else if (Pb_Zhu6->Left <= 1)
		{
			Pb_Zhu6->Left += 1400;
			Pb_Zhu6->Left -= 15;
		}

		if (Pb_Zhu7->Left > 1)
		{
			Pb_Zhu7->Left -= 15;
		}
		else if (Pb_Zhu7->Left <= 1)
		{
			Pb_Zhu7->Left += 1400;
			Pb_Zhu7->Left -= 15;
		}

		if (Pb_Zhu8->Left > 1)
		{
			Pb_Zhu8->Left -= 15;
		}
		else if (Pb_Zhu8->Left <= 1)
		{
			Pb_Zhu8->Left += 1400;
			Pb_Zhu8->Left -= 15;
		}

		Check();


		if (pbBird->Left + pbBird->Width + 10 >= Pb_Zhu1->Left&&pbBird->Left + pbBird->Width + 10 <= Pb_Zhu1->Left + Pb_Zhu1->Width)
		{
			if (pbBird->Top <= Pb_Zhu1->Top + Pb_Zhu1->Height || pbBird->Top + pbBird->Height >= Pb_Zhu2->Top)
			{
				pbOver->Visible = true;
				isAlive = false;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();
				/*axWindowsMediaPlayer1->Ctlcontrols->stop();*/
			}
		}

		if (pbBird->Left + pbBird->Width + 10 > Pb_Zhu3->Left&&pbBird->Left + pbBird->Width + 10 < Pb_Zhu3->Left + Pb_Zhu3->Width)
		{
			if (pbBird->Top<Pb_Zhu3->Top + Pb_Zhu3->Height || pbBird->Top + pbBird->Height>Pb_Zhu4->Top)
			{
				pbOver->Visible = true;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();
				/*axWindowsMediaPlayer1->Ctlcontrols->stop();*/
			}
		}

		if (pbBird->Left + pbBird->Width + 10 > Pb_Zhu5->Left&&pbBird->Left + pbBird->Width + 10 < Pb_Zhu5->Left + Pb_Zhu5->Width)
		{
			if (pbBird->Top<Pb_Zhu5->Top + Pb_Zhu5->Height || pbBird->Top + pbBird->Height>Pb_Zhu6->Top)
			{
				pbOver->Visible = true;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();
				/*axWindowsMediaPlayer1->Ctlcontrols->stop();*/
			}
		}

		if (pbBird->Left + pbBird->Width + 10 > Pb_Zhu7->Left&&pbBird->Left + pbBird->Width + 10 < Pb_Zhu7->Left + Pb_Zhu7->Width)
		{
			if (pbBird->Top<Pb_Zhu7->Top + Pb_Zhu7->Height || pbBird->Top + pbBird->Height>Pb_Zhu8->Top)
			{
				pbOver->Visible = true;
				timer1->Stop();
				tRuntime->Stop();
				TMove->Stop();
				/*axWindowsMediaPlayer1->Ctlcontrols->stop();*/
			}
		}


	}
private: System::Void pbBack_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void pbRestart_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Stop();
	tRuntime->Stop();
	TMove->Stop();

	this->lbRuntime->Text = "" + 60;
	this->lbScore->Text = "" + 0;
	time = 59;
	point = 1;

	this->pbOver->Visible = false;

	this->Pb_Zhu1->Left = 235;
	this->Pb_Zhu1->Top = -1;

	this->Pb_Zhu2->Left = 235;
	this->Pb_Zhu2->Top = 222;

	this->Pb_Zhu3->Left = 613;
	this->Pb_Zhu3->Top = -1;

	this->Pb_Zhu4->Left = 613;
	this->Pb_Zhu4->Top = 508;

	this->Pb_Zhu5->Left = 1005;
	this->Pb_Zhu5->Top = -1;

	this->Pb_Zhu6->Left = 1005;
	this->Pb_Zhu6->Top = 222;

	this->Pb_Zhu7->Left = 1383;
	this->Pb_Zhu7->Top = -1;

	this->Pb_Zhu8->Left = 1383;
	this->Pb_Zhu8->Top = 333;

	this->pbBird->Left = 12;
	this->pbBird->Top = 295;

}
private: System::Void pbOver_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
	}