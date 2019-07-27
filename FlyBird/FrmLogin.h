#pragma once
#include"CommonHelper.h"
#include"FrmLanding.h"
#include"User.h"
#include"UserList.h"
namespace FlyBird {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmLogin 摘要
	/// </summary>
	public ref class FrmLogin : public System::Windows::Forms::Form
	{
	public:
		FrmLogin(void)
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
		~FrmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbName;
	protected:
	private: System::Windows::Forms::Label^  lbPassword1;
	private: System::Windows::Forms::Label^  lbPassword2;
	private: System::Windows::Forms::TextBox^  tbName;
	private: System::Windows::Forms::TextBox^  tbPassword1;
	private: System::Windows::Forms::TextBox^  tbPassword2;
	private: System::Windows::Forms::PictureBox^  pbRegister;
	private: System::Windows::Forms::PictureBox^  pbClose;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmLogin::typeid));
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbPassword1 = (gcnew System::Windows::Forms::Label());
			this->lbPassword2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword1 = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword2 = (gcnew System::Windows::Forms::TextBox());
			this->pbRegister = (gcnew System::Windows::Forms::PictureBox());
			this->pbClose = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbRegister))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbClose))->BeginInit();
			this->SuspendLayout();
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lbName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lbName->Location = System::Drawing::Point(60, 148);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(135, 24);
			this->lbName->TabIndex = 7;
			this->lbName->Text = L"输入昵称：";
			// 
			// lbPassword1
			// 
			this->lbPassword1->AutoSize = true;
			this->lbPassword1->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lbPassword1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lbPassword1->Location = System::Drawing::Point(60, 265);
			this->lbPassword1->Name = L"lbPassword1";
			this->lbPassword1->Size = System::Drawing::Size(135, 24);
			this->lbPassword1->TabIndex = 8;
			this->lbPassword1->Text = L"输入密码：";
			// 
			// lbPassword2
			// 
			this->lbPassword2->AutoSize = true;
			this->lbPassword2->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lbPassword2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lbPassword2->Location = System::Drawing::Point(60, 369);
			this->lbPassword2->Name = L"lbPassword2";
			this->lbPassword2->Size = System::Drawing::Size(135, 24);
			this->lbPassword2->TabIndex = 9;
			this->lbPassword2->Text = L"确认密码：";
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->tbName->Font = (gcnew System::Drawing::Font(L"幼圆", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tbName->ForeColor = System::Drawing::Color::Black;
			this->tbName->Location = System::Drawing::Point(346, 145);
			this->tbName->Margin = System::Windows::Forms::Padding(2);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(146, 34);
			this->tbName->TabIndex = 10;
			// 
			// tbPassword1
			// 
			this->tbPassword1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->tbPassword1->Font = (gcnew System::Drawing::Font(L"幼圆", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tbPassword1->ForeColor = System::Drawing::Color::Black;
			this->tbPassword1->Location = System::Drawing::Point(346, 255);
			this->tbPassword1->Margin = System::Windows::Forms::Padding(2);
			this->tbPassword1->Name = L"tbPassword1";
			this->tbPassword1->PasswordChar = '*';
			this->tbPassword1->Size = System::Drawing::Size(146, 34);
			this->tbPassword1->TabIndex = 11;
			// 
			// tbPassword2
			// 
			this->tbPassword2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->tbPassword2->Font = (gcnew System::Drawing::Font(L"幼圆", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tbPassword2->ForeColor = System::Drawing::Color::Black;
			this->tbPassword2->Location = System::Drawing::Point(346, 359);
			this->tbPassword2->Margin = System::Windows::Forms::Padding(2);
			this->tbPassword2->Name = L"tbPassword2";
			this->tbPassword2->PasswordChar = '*';
			this->tbPassword2->Size = System::Drawing::Size(146, 34);
			this->tbPassword2->TabIndex = 12;
			// 
			// pbRegister
			// 
			this->pbRegister->BackColor = System::Drawing::Color::Transparent;
			this->pbRegister->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbRegister.BackgroundImage")));
			this->pbRegister->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbRegister->Location = System::Drawing::Point(187, 479);
			this->pbRegister->Name = L"pbRegister";
			this->pbRegister->Size = System::Drawing::Size(153, 42);
			this->pbRegister->TabIndex = 13;
			this->pbRegister->TabStop = false;
			this->pbRegister->Click += gcnew System::EventHandler(this, &FrmLogin::pbRegister_Click);
			// 
			// pbClose
			// 
			this->pbClose->BackColor = System::Drawing::Color::Transparent;
			this->pbClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbClose.Image")));
			this->pbClose->Location = System::Drawing::Point(458, 27);
			this->pbClose->Margin = System::Windows::Forms::Padding(2);
			this->pbClose->Name = L"pbClose";
			this->pbClose->Size = System::Drawing::Size(59, 50);
			this->pbClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbClose->TabIndex = 14;
			this->pbClose->TabStop = false;
			this->pbClose->Click += gcnew System::EventHandler(this, &FrmLogin::pbClose_Click);
			// 
			// FrmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(556, 572);
			this->Controls->Add(this->pbClose);
			this->Controls->Add(this->pbRegister);
			this->Controls->Add(this->tbPassword2);
			this->Controls->Add(this->tbPassword1);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lbPassword2);
			this->Controls->Add(this->lbPassword1);
			this->Controls->Add(this->lbName);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"FrmLogin";
			this->Text = L"注册界面";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmLogin::FrmLogin_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmLogin::FrmLogin_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbRegister))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbClose))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int x, y;
private: System::Void FrmLogin_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		x = e->X;
		y = e->Y;
	}


}
private: System::Void FrmLogin_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->Top = this->Top + (e->Y - y);
		this->Left = this->Left + (e->X - x);
	}
}
		 private: System::Void pbClose_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void pbRegister_Click(System::Object^  sender, System::EventArgs^  e) {
	UserList* ul = new UserList();
	User* user = new User();
	string name = CommonHelper::ConvertToString(tbName->Text);
	string password = CommonHelper::ConvertToString(tbPassword2->Text);
	if (tbPassword1->TextLength<6 || tbPassword1->TextLength>16)
	{
		MessageBox::Show("密码不符合标准");

		return;


	} 
	if (tbPassword1->Text != tbPassword2->Text)

	{
		MessageBox::Show("二次输入密码不一致，请重新输入!");
	}

	else {  
		ifstream ifs;
		ifs.open("player.bin", ios::binary);
		int i = 0;
		int a = 0;
		while (ifs.read((char*)user, sizeof(User)))
		{
			ul->userList[i++] = user;
			user = new User();
		}
		ifs.close();
		user->name = CommonHelper::ConvertToString(tbName->Text);
		user->password = CommonHelper::ConvertToString(tbPassword2->Text);
		i = 0;
		for (int i = 0;i<20;i++)
		{
			if (ul->userList[i] == nullptr)
			{
				break;
			}
			if (ul->userList[i]->name == name)
			{
				MessageBox::Show("该用户名已被注册！");
				a = 1;
				break;
			}
			else
			{
				continue;
			}
		}
		if (a == 0)
		{
			ul->addUser(user);
			ul->saveData();
			MessageBox::Show("注册成功");
			this->Close();
		}

	}
	  
}
};
}
