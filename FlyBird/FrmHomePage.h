#pragma once
#include"FrmLogin.h"
#include"FrmLanding.h"
#include"FrmExplain.h"
#include"FrmStart.h"
#include"FrmTop.h"
#include"FrmSelect.h"
namespace FlyBird {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmHomePage 摘要
	/// </summary>
	public ref class FrmHomePage : public System::Windows::Forms::Form
	{
	public:
		FrmHomePage(void)
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
		~FrmHomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panelMeun;
	protected:
	private: System::Windows::Forms::PictureBox^  pbTop;
	private: System::Windows::Forms::PictureBox^  pbLogin;
	private: System::Windows::Forms::PictureBox^  pbLanding;
	private: System::Windows::Forms::PictureBox^  pbStart;
	private: System::Windows::Forms::PictureBox^  pbMusic;
	private: System::Windows::Forms::PictureBox^  pbExit;
	private: System::Windows::Forms::PictureBox^  pbHelp;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmHomePage::typeid));
			this->panelMeun = (gcnew System::Windows::Forms::Panel());
			this->pbTop = (gcnew System::Windows::Forms::PictureBox());
			this->pbLogin = (gcnew System::Windows::Forms::PictureBox());
			this->pbLanding = (gcnew System::Windows::Forms::PictureBox());
			this->pbStart = (gcnew System::Windows::Forms::PictureBox());
			this->pbMusic = (gcnew System::Windows::Forms::PictureBox());
			this->pbExit = (gcnew System::Windows::Forms::PictureBox());
			this->pbHelp = (gcnew System::Windows::Forms::PictureBox());
			this->panelMeun->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTop))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLanding))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMusic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHelp))->BeginInit();
			this->SuspendLayout();
			// 
			// panelMeun
			// 
			this->panelMeun->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelMeun.BackgroundImage")));
			this->panelMeun->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelMeun->Controls->Add(this->pbTop);
			this->panelMeun->Controls->Add(this->pbLogin);
			this->panelMeun->Controls->Add(this->pbLanding);
			this->panelMeun->Controls->Add(this->pbStart);
			this->panelMeun->Location = System::Drawing::Point(626, 114);
			this->panelMeun->Name = L"panelMeun";
			this->panelMeun->Size = System::Drawing::Size(429, 494);
			this->panelMeun->TabIndex = 1;
			// 
			// pbTop
			// 
			this->pbTop->BackColor = System::Drawing::Color::Transparent;
			this->pbTop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbTop->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbTop.Image")));
			this->pbTop->Location = System::Drawing::Point(147, 347);
			this->pbTop->Name = L"pbTop";
			this->pbTop->Size = System::Drawing::Size(146, 50);
			this->pbTop->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbTop->TabIndex = 0;
			this->pbTop->TabStop = false;
			this->pbTop->Click += gcnew System::EventHandler(this, &FrmHomePage::pbTop_Click);
			// 
			// pbLogin
			// 
			this->pbLogin->BackColor = System::Drawing::Color::Transparent;
			this->pbLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLogin.Image")));
			this->pbLogin->Location = System::Drawing::Point(147, 170);
			this->pbLogin->Name = L"pbLogin";
			this->pbLogin->Size = System::Drawing::Size(146, 50);
			this->pbLogin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbLogin->TabIndex = 0;
			this->pbLogin->TabStop = false;
			this->pbLogin->Click += gcnew System::EventHandler(this, &FrmHomePage::pbLogin_Click);
			//this->pbLogin->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmHomePage::pbLogin_MouseDown);
			// 
			// pbLanding
			// 
			this->pbLanding->BackColor = System::Drawing::Color::Transparent;
			this->pbLanding->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbLanding->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLanding.Image")));
			this->pbLanding->Location = System::Drawing::Point(147, 262);
			this->pbLanding->Name = L"pbLanding";
			this->pbLanding->Size = System::Drawing::Size(146, 50);
			this->pbLanding->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbLanding->TabIndex = 0;
			this->pbLanding->TabStop = false;
			this->pbLanding->Click += gcnew System::EventHandler(this, &FrmHomePage::pbLanding_Click);
			// 
			// pbStart
			// 
			this->pbStart->BackColor = System::Drawing::Color::Transparent;
			this->pbStart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbStart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbStart.Image")));
			this->pbStart->Location = System::Drawing::Point(147, 71);
			this->pbStart->Name = L"pbStart";
			this->pbStart->Size = System::Drawing::Size(146, 50);
			this->pbStart->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbStart->TabIndex = 0;
			this->pbStart->TabStop = false;
			this->pbStart->Click += gcnew System::EventHandler(this, &FrmHomePage::pbStart_Click);
			// 
			// pbMusic
			// 
			this->pbMusic->BackColor = System::Drawing::Color::Transparent;
			this->pbMusic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbMusic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMusic.Image")));
			this->pbMusic->Location = System::Drawing::Point(127, 474);
			this->pbMusic->Name = L"pbMusic";
			this->pbMusic->Size = System::Drawing::Size(74, 73);
			this->pbMusic->TabIndex = 4;
			this->pbMusic->TabStop = false;
			this->pbMusic->Click += gcnew System::EventHandler(this, &FrmHomePage::pbMusic_Click);
			// 
			// pbExit
			// 
			this->pbExit->BackColor = System::Drawing::Color::Transparent;
			this->pbExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbExit.Image")));
			this->pbExit->Location = System::Drawing::Point(926, 12);
			this->pbExit->Name = L"pbExit";
			this->pbExit->Size = System::Drawing::Size(77, 74);
			this->pbExit->TabIndex = 6;
			this->pbExit->TabStop = false;
			this->pbExit->Click += gcnew System::EventHandler(this, &FrmHomePage::pbExit_Click);
			// 
			// pbHelp
			// 
			this->pbHelp->BackColor = System::Drawing::Color::Transparent;
			this->pbHelp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbHelp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbHelp.Image")));
			this->pbHelp->Location = System::Drawing::Point(835, 12);
			this->pbHelp->Name = L"pbHelp";
			this->pbHelp->Size = System::Drawing::Size(71, 74);
			this->pbHelp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbHelp->TabIndex = 5;
			this->pbHelp->TabStop = false;
			this->pbHelp->Click += gcnew System::EventHandler(this, &FrmHomePage::pbHelp_Click);
			// 
			// FrmHomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1053, 609);
			this->Controls->Add(this->pbExit);
			this->Controls->Add(this->pbHelp);
			this->Controls->Add(this->pbMusic);
			this->Controls->Add(this->panelMeun);
			this->Name = L"FrmHomePage";
			this->Text = L"游戏主页";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FrmHomePage::FrmHomePage_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FrmHomePage::FrmHomePage_FormClosed);
			this->Load += gcnew System::EventHandler(this, &FrmHomePage::FrmHomePage_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmHomePage::FrmHomePage_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmHomePage::FrmHomePage_MouseMove);
			this->panelMeun->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTop))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLanding))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMusic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHelp))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int x, y;
	
private: System::Void FrmHomePage_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		x = e->X;//记录鼠标点击位置
		y = e->Y;
	}
}
private: System::Void FrmHomePage_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->Top = this->Top + (e->Y - y);//鼠标的移动
		this->Left = this->Left + (e->X - x);
	}
}
private: System::Void pbExit_Click(System::Object^  sender, System::EventArgs^  e) {
	    this->Close();
}
private: System::Void pbLogin_Click(System::Object^  sender, System::EventArgs^  e) {
	FrmLogin^ frm = gcnew FrmLogin();
	frm->Show();
	
}
private: System::Void FrmHomePage_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (MessageBox::Show("确定离开游戏嘛？", "提示", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		e->Cancel = false;
	}
	else {  
		e->Cancel = true;
	}
}
private: System::Void FrmHomePage_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	Application::Exit();
}
private: System::Void pbLanding_Click(System::Object^  sender, System::EventArgs^  e) {
	FrmLanding^ frm = gcnew FrmLanding();
	frm->FA = gcnew Action(this, &FrmHomePage::start);
	frm->Show();
}
private: System::Void pbTop_Click(System::Object^  sender, System::EventArgs^  e) {
	FrmTop^ frm = gcnew FrmTop();
	frm->Show();
}
private: System::Void pbHelp_Click(System::Object^  sender, System::EventArgs^  e) {
	FrmExplain^ frm = gcnew FrmExplain();
	frm->Show();

}
private: System::Void FrmHomePage_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pbMusic_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pbStart_Click(System::Object^  sender, System::EventArgs^  e) {
	     FrmStart^ frm = gcnew FrmStart();
	     frm->Show();
	
}  
		 void start() {
		 
		   this->pbStart->Enabled = true;
		 }

};
}
