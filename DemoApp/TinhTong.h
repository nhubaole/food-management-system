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
	/// Summary for TinhTong
	/// </summary>
	public ref class TinhTong : public System::Windows::Forms::Form
	{
	public:
		cliext::vector<HangHoaData^> danhsach;
	public:
		TinhTong(void)
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
		~TinhTong()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Button^ button29;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TinhTong::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(43, 39);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(428, 64);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tính tổng tiền hàng hóa đã xuất bán";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(920, 134);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(17, 16);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &TinhTong::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(920, 186);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(17, 16);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &TinhTong::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(920, 239);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(17, 16);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &TinhTong::radioButton3_CheckedChanged);
			// 
			// button29
			// 
			this->button29->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->button29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(1165, 546);
			this->button29->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(108, 42);
			this->button29->TabIndex = 64;
			this->button29->Text = L"OK";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &TinhTong::button29_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->textBox1->Location = System::Drawing::Point(889, 331);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(67, 31);
			this->textBox1->TabIndex = 66;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->textBox2->Location = System::Drawing::Point(889, 382);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(67, 31);
			this->textBox2->TabIndex = 67;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->textBox3->Location = System::Drawing::Point(889, 432);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(67, 31);
			this->textBox3->TabIndex = 68;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(795, 327);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 28);
			this->label3->TabIndex = 69;
			this->label3->Text = L"Ngày";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(795, 382);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 28);
			this->label4->TabIndex = 70;
			this->label4->Text = L"Tháng";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(795, 432);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 28);
			this->label5->TabIndex = 71;
			this->label5->Text = L"Năm";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1051, 366);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 53);
			this->button1->TabIndex = 72;
			this->button1->Text = L"Tính tiền";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TinhTong::button1_Click);
			// 
			// TinhTong
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1312, 618);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"TinhTong";
			this->Text = L"TinhTong";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	Form:Close();
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Visible = true;
		label3->Visible = true;
		textBox2->Visible = true;
		label4->Visible = true;
		textBox3->Visible = true;
		label5->Visible = true;
		/*
		@Purpose: Ham dung de hien thi textbox Ngay, Thang, Nam khi nguoi dung chon tinh theo Ngay
		@Parameters:
		@ Return: void
		@ Author: lebaonhu     Modified: 24.05.2022
		*/
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Visible = false;
		label3->Visible = false;
		textBox2->Visible = true;
		label4->Visible = true;
		textBox3->Visible = true;
		label5->Visible = true;
		/*
		@Purpose: Ham dung de hien thi textbox Thang, Nam khi nguoi dung chon tinh theo Thang
		@Parameters:
		@ Return: void
		@ Author: lebaonhu     Modified: 24.05.2022
		*/
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Visible = false;
		label3->Visible = false;
		textBox2->Visible = false;
		label4->Visible = false;
		textBox3->Visible = true;
		label5->Visible = true;
		/*
		@Purpose: Ham dung de hien thi textbox Nam khi nguoi dung chon tinh theo Nam
		@Parameters:
		@ Return: void
		@ Author: lebaonhu     Modified: 24.05.2022
		*/
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double Tong = 0;
		if (radioButton1->Checked == true) {
			for (auto i = 0; i != danhsach.size(); i++) {
				if (danhsach[i]->NgayXuatKho.Nam == Convert::ToDouble(textBox3->Text)) {
					if (danhsach[i]->NgayXuatKho.Thang == Convert::ToDouble(textBox2->Text)) {
						if (danhsach[i]->NgayXuatKho.Ngay == Convert::ToDouble(textBox1->Text)) {
							Tong = Tong + Convert::ToDouble(danhsach[i]->DonGia);
						}
					}
				}
			}
		}
		else if (radioButton2->Checked == true) {
			for (auto i = 0; i != danhsach.size(); i++) {
				if (danhsach[i]->NgayXuatKho.Nam == Convert::ToDouble(textBox3->Text)) {
					if (danhsach[i]->NgayXuatKho.Thang == Convert::ToDouble(textBox2->Text)) {
						Tong = Tong + Convert::ToDouble(danhsach[i]->DonGia);
					}
				}
			}
		}
		else if (radioButton3->Checked == true) {
			for (auto i = 0; i != danhsach.size(); i++) {
				if (danhsach[i]->NgayXuatKho.Nam == Convert::ToDouble(textBox3->Text)) {
					Tong = Tong + Convert::ToDouble(danhsach[i]->DonGia);
				}
			}
		}
		MessageBox::Show("Tong tien hang hoa da xuat ban la: " + Convert::ToString(Tong), "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		/*
		@Purpose: Ham dung kiem tra du lieu thoi gian nguoi dung nhap vao co trung khop 
					voi ngay xuat kho cua cac hang hoa trong vector danhsachxuat hay khong?
					Neu co, cong gia tien cua hang hoa do vao bien Tong
					In tong tien hang hoa da xuat ban ra thong bao
		@Parameters:
		@ Return: void
		@ Author: lebaonhu     Modified: 27.05.2022
		*/
	}
};
}
