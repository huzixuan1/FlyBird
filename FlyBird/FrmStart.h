#pragma once
#include"FrmLanding.h"
#include"CommonHelper.h"
#include"stdafx.h"

namespace FlyBird {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmStart 摘要
	/// </summary>
	public ref class FrmStart : public System::Windows::Forms::Form
	{
	public:
		FrmStart(void)
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
		~FrmStart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pbOK;
	private: System::Windows::Forms::PictureBox^  pbClose;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmStart::typeid));
			this->pbOK = (gcnew System::Windows::Forms::PictureBox());
			this->pbClose = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOK))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbClose))->BeginInit();
			this->SuspendLayout();
			// 
			// pbOK
			// 
			this->pbOK->BackColor = System::Drawing::Color::Transparent;
			this->pbOK->Location = System::Drawing::Point(166, 220);
			this->pbOK->Name = L"pbOK";
			this->pbOK->Size = System::Drawing::Size(212, 75);
			this->pbOK->TabIndex = 1;
			this->pbOK->TabStop = false;
			this->pbOK->Click += gcnew System::EventHandler(this, &FrmStart::pbOK_Click);
			// 
			// pbClose
			// 
			this->pbClose->BackColor = System::Drawing::Color::Transparent;
			this->pbClose->Location = System::Drawing::Point(392, 2);
			this->pbClose->Name = L"pbClose";
			this->pbClose->Size = System::Drawing::Size(130, 60);
			this->pbClose->TabIndex = 2;
			this->pbClose->TabStop = false;
			this->pbClose->Click += gcnew System::EventHandler(this, &FrmStart::pbClose_Click);
			// 
			// FrmStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(546, 343);
			this->Controls->Add(this->pbClose);
			this->Controls->Add(this->pbOK);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"FrmStart";
			this->Text = L"启动拦截页面";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmStart::FrmStart_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmStart::FrmStart_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOK))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbClose))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int x, y;
	private: System::Void FrmStart_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			x = e->X;
			y = e->Y;
		}



	}
	private: System::Void FrmStart_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			this->Top = this->Top + (e->Y - y);
			this->Left = this->Left + (e->X - x);
		}


	}
	private: System::Void pbOK_Click(System::Object^  sender, System::EventArgs^  e) {
	
		FrmLanding^frm = gcnew FrmLanding;
		frm->Show();
		this->Hide();
}
private: System::Void pbClose_Click(System::Object^  sender, System::EventArgs^  e) {
    
	
	this->Hide();



}
};
}
