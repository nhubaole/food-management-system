#pragma once
#include "HangHoaData.h"

namespace DemoApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HienThiHangTon
	/// </summary>
	public ref class HienThiHangTon : public System::Windows::Forms::Form
	{
	public:
		cliext::vector<HangHoaData^> danhsach;
	public:
		HienThiHangTon(void)
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
		~HienThiHangTon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HienThiHangTon::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(43, 19);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(297, 43);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Hiển thị hàng tồn kho";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button29
			// 
			this->button29->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->button29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(1117, 597);
			this->button29->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(108, 42);
			this->button29->TabIndex = 65;
			this->button29->Text = L"OK";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &HienThiHangTon::button29_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold));
			this->richTextBox1->Location = System::Drawing::Point(116, 156);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1057, 418);
			this->richTextBox1->TabIndex = 66;
			this->richTextBox1->Text = L"";
			// 
			// HienThiHangTon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1259, 666);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"HienThiHangTon";
			this->Text = L"HienThiHangTon";
			this->Load += gcnew System::EventHandler(this, &HienThiHangTon::HienThiHangTon_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
		/*
		 @Purpose: Ham dung de dong form HienThiHangTon khi click vao button29
		 @Parameters:
		 @ Return: void
		 @ Author: lebaonhu     Modified: 24.05.2022
		*/
	}
	private: System::Void HienThiHangTon_Load(System::Object^ sender, System::EventArgs^ e) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Thit Heo") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Thit Tom") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Thit Ca") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Thit Bo") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Ca Chua") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Ca Rot") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Ot Chuong") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Dua Leo") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Bo") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Chanh") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Nam") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Rau") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Trung") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Pho Mai") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Bacon") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "    " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Banh Mi") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Sua") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Ca Hop") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Thit Hop") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Tuong Ca") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Dau An") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Giam") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Trai Cay") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Dau Hop") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Hat") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t\t" + Convert::ToString(danhsach[i]->Ten) + "\t\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Mat Ong") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());

			}
			else if (danhsach[i]->Ten == "So") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			else if (danhsach[i]->Ten == "Banh Quy") {
				richTextBox1->AppendText("\n" + Convert::ToString(danhsach[i]->MaHang) + "\t" + Convert::ToString(danhsach[i]->Ten) + "\t        " + Convert::ToString(danhsach[i]->DonGia) + "\t   " + Convert::ToString(danhsach[i]->LoaiHang) + "\t   " + Convert::ToString(danhsach[i]->MaLuuKho) + "\t" + danhsach[i]->NgaySX.inNgay() + "\t" + danhsach[i]->NgayHetHan.inNgay() + "\t" + danhsach[i]->NgayNhapKho.inNgay());
			}
			/*
			 @Purpose: Ham dung de in hang hoa ton kho ra form HienThiHangTon
			 @Parameters:
			 @ Return: void
			 @ Author: lebaonhu     Modified: 27.05.2022
			*/
		}
	}
};
}
