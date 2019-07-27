#pragma once
#include "User.h"
#include "UserList.h"
#include "CommonHelper.h"
#include "stdafx.h"
namespace FlyBird {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmTop 摘要
	/// </summary>
	public ref class FrmTop : public System::Windows::Forms::Form
	{
	public:
		FrmTop(void)
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
		~FrmTop()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::PictureBox^  pbClose;
	private: System::Windows::Forms::ToolTip^  toolTip1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmTop::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->pbClose = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbClose))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Location = System::Drawing::Point(40, 71);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(294, 350);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmTop::listView1_MouseDown);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"名次";
			this->columnHeader1->Width = 83;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"姓名";
			this->columnHeader2->Width = 102;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"分数";
			this->columnHeader3->Width = 85;
			// 
			// pbClose
			// 
			this->pbClose->BackColor = System::Drawing::Color::Transparent;
			this->pbClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbClose.Image")));
			this->pbClose->Location = System::Drawing::Point(336, 1);
			this->pbClose->Margin = System::Windows::Forms::Padding(2);
			this->pbClose->Name = L"pbClose";
			this->pbClose->Size = System::Drawing::Size(59, 50);
			this->pbClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbClose->TabIndex = 15;
			this->pbClose->TabStop = false;
			this->pbClose->Click += gcnew System::EventHandler(this, &FrmTop::pbClose_Click);
			this->pbClose->MouseHover += gcnew System::EventHandler(this, &FrmTop::pbClose_MouseHover);
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &FrmTop::toolTip1_Popup);
			// 
			// FrmTop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(396, 518);
			this->Controls->Add(this->pbClose);
			this->Controls->Add(this->listView1);
			this->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Name = L"FrmTop";
			this->Text = L"排行榜";
			this->Load += gcnew System::EventHandler(this, &FrmTop::FrmTop_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmTop::FrmTop_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmTop::FrmTop_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbClose))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FrmTop_Load(System::Object^  sender, System::EventArgs^  e) {
		User* user = new User();
		UserList* ul = new UserList();
		ifstream ifs;

		ifs.open("player.bin", ios::binary);//从文件中载入玩家信息
		int i = 0;
		while (ifs.read((char*)user, sizeof(User)))
		{
			ul->userList[i++] = user;
			user = new User();
		}
		ifs.close();
		ListViewItem^ item = gcnew ListViewItem();
		listView1->Items->Add(item);
		for (int i = 0;i<20;i++)
		{
			if (ul->userList[i] == nullptr)
			{
				break;
			}
			item->SubItems->Add(String(ul->userList[i]->name.data()).ToString());
			item->SubItems->Add(ul->userList[i]->point + "");
		}

	}
private: System::Void pbClose_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	this->toolTip1->SetToolTip((PictureBox^)sender, "关闭");
}

private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
}
		 int x, y;
private: System::Void listView1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void FrmTop_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		x = e->X;//记录鼠标点击位置
		y = e->Y;
	}
}

private: System::Void FrmTop_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->Top = this->Top + (e->Y - y);//鼠标的移动
		this->Left = this->Left + (e->X - x);
	}
}

private: System::Void pbClose_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
