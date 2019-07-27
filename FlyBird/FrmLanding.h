#pragma once
#include"FrmLogin.h"
#include"CommonHelper.h"
#include "User.h"
#include "UserList.h"
#include"stdafx.h"
#include"FrmSelect.h"
namespace FlyBird {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// FrmLanding 摘要
	/// </summary>
	public ref class FrmLanding : public System::Windows::Forms::Form
	{
	public:
		FrmLanding(void)
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
		~FrmLanding()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  bttnClose;


	private: System::Windows::Forms::Button^  bttnEnter;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmLanding::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bttnClose = (gcnew System::Windows::Forms::Button());
			this->bttnEnter = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"隶书", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(233, 85);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 35);
			this->label1->TabIndex = 3;
			this->label1->Text = L"昵称：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"隶书", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(233, 181);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 35);
			this->label2->TabIndex = 9;
			this->label2->Text = L"密码：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"隶书", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(196, 290);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 35);
			this->label3->TabIndex = 11;
			this->label3->Text = L"验证码：";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(417, 91);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 35);
			this->textBox1->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(417, 187);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(195, 35);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(417, 290);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(195, 35);
			this->textBox2->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"华文楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(735, 303);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(48, 28);
			this->textBox4->TabIndex = 15;
			this->textBox4->Text = L"2828";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(857, 303);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 26);
			this->button1->TabIndex = 16;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// bttnClose
			// 
			this->bttnClose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bttnClose.BackgroundImage")));
			this->bttnClose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bttnClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnClose->Location = System::Drawing::Point(824, 1);
			this->bttnClose->Name = L"bttnClose";
			this->bttnClose->Size = System::Drawing::Size(75, 40);
			this->bttnClose->TabIndex = 17;
			this->bttnClose->UseVisualStyleBackColor = true;
			this->bttnClose->Click += gcnew System::EventHandler(this, &FrmLanding::bttnClose_Click);
			// 
			// bttnEnter
			// 
			this->bttnEnter->BackColor = System::Drawing::Color::Transparent;
			this->bttnEnter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bttnEnter.BackgroundImage")));
			this->bttnEnter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bttnEnter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnEnter->Location = System::Drawing::Point(416, 378);
			this->bttnEnter->Margin = System::Windows::Forms::Padding(4);
			this->bttnEnter->Name = L"bttnEnter";
			this->bttnEnter->Size = System::Drawing::Size(196, 72);
			this->bttnEnter->TabIndex = 20;
			this->bttnEnter->UseVisualStyleBackColor = false;
			this->bttnEnter->Click += gcnew System::EventHandler(this, &FrmLanding::bttnEnter_Click);
			// 
			// FrmLanding
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(977, 674);
			this->Controls->Add(this->bttnEnter);
			this->Controls->Add(this->bttnClose);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FrmLanding";
			this->Text = L"登录";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int x, y;
	
private: System::Void FrmLanding_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			
      if (e->Button == System::Windows::Forms::MouseButtons::Left)
		 {
			 x = e->X;
			 y = e->Y;
	 }
			 
	 }
private: System::Void FrmLanding_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->Top = this->Top + (e->Y - y);
		this->Left = this->Left + (e->X - x);
	}


}
			 public: Action^FA;
	private: System::Void bttnClose_Click(System::Object^  sender, System::EventArgs^  e) {
 
		Close();
	}
	
private: System::Void bttnEnter_Click(System::Object^  sender, System::EventArgs^  e) {

	string name = CommonHelper::ConvertToString(textBox1->Text);
	string password = CommonHelper::ConvertToString(textBox2->Text);
	User* user = new User();
	UserList* ul = new UserList();
	ifstream ifs;
	int i = 0;
	int a = 0;
	ifs.open("player.bin", ios::binary);
	if (ifs.fail())
	{
		MessageBox::Show("用户名或密码错误！");
	}
	while (ifs.read((char*)user, sizeof(User)))
	{
		ul->userList[i++] = user;
		user = new User();
	}
	for (int i = 0;i<20;i++)
	{
		if (ul->userList[i] == nullptr)
		{
			break;
		}
		if (ul->userList[i]->name == name)
		{
			a = 1;
			ul->userList[i++] = user;

			user = new User();
			MessageBox::Show("登录成功！来玩游戏吧！");
			FrmSelect^ frm = gcnew FrmSelect();
			frm->Show();
			  
			if (FA)
			{
				FA();
			}
			break;
		}
	}
	if (a = 0)
	{
		MessageBox::Show("用户名或密码错误！");
		ifs.close();
	}
	this->Close();


}
};
}
