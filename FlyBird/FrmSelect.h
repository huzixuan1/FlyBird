#pragma once
#include"FrmGame1.h"
namespace FlyBird {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmSelect 摘要
	/// </summary>
	public ref class FrmSelect : public System::Windows::Forms::Form
	{
	public:
		FrmSelect(void)
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
		~FrmSelect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pbBack;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmSelect::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pbBack = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBack))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(43, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"第一关";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FrmSelect::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(259, 161);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 35);
			this->label1->TabIndex = 4;
			this->label1->Text = L"请选择关卡：";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(246, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 34);
			this->button2->TabIndex = 0;
			this->button2->Text = L"第二关";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FrmSelect::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(427, 356);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 34);
			this->button3->TabIndex = 0;
			this->button3->Text = L"第三关";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FrmSelect::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(627, 356);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 34);
			this->button4->TabIndex = 0;
			this->button4->Text = L"敬请期待";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FrmSelect::button4_Click);
			// 
			// pbBack
			// 
			this->pbBack->BackColor = System::Drawing::Color::Transparent;
			this->pbBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBack.Image")));
			this->pbBack->Location = System::Drawing::Point(703, 22);
			this->pbBack->Name = L"pbBack";
			this->pbBack->Size = System::Drawing::Size(55, 56);
			this->pbBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbBack->TabIndex = 13;
			this->pbBack->TabStop = false;
			this->pbBack->Click += gcnew System::EventHandler(this, &FrmSelect::pbBack_Click);
			// 
			// FrmSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(803, 583);
			this->Controls->Add(this->pbBack);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"FrmSelect";
			this->Text = L"游戏选择界面";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmSelect::FrmSelect_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmSelect::FrmSelect_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBack))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int x, y;
	private: System::Void FrmSelect_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			x = e->X;
			y = e->Y;
		}
	
	
	}

private: System::Void FrmSelect_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->Top = this->Top + (e->Y - y);
		this->Left = this->Left + (e->X - x);
	}


}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	FrmGame1^ frm = gcnew FrmGame1();
	frm->Show();


}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	FrmGame2^ frm = gcnew FrmGame2();
	frm->Show();

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	FrmGame3^ frm = gcnew FrmGame3();
	frm->Show();
}
private: System::Void pbBack_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();


}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
