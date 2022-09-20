#pragma once

#include "HienThiHangNhap.h"
#include "HienThiHangXuat.h"
#include "HienThiHangTon.h"
#include "HangHoaData.h"
#include "TinhTong.h"

namespace DemoApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Nhap
	/// </summary>
	public ref class Nhap : public System::Windows::Forms::Form
	{
	public:
		Nhap(void)
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
		~Nhap()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ btnHeo;
	private: System::Windows::Forms::Button^ btnTom;
	private: System::Windows::Forms::Button^ btnCa;
	private: System::Windows::Forms::Button^ btnThitBo;
	private: System::Windows::Forms::Button^ btnDuaLeo;






	private: System::Windows::Forms::Button^ btnOtChuong;

	private: System::Windows::Forms::Button^ btnCaRot;

	private: System::Windows::Forms::Button^ btnCaChua;
	private: System::Windows::Forms::Button^ btnRau;


	private: System::Windows::Forms::Button^ btnNam;

	private: System::Windows::Forms::Button^ btnChanh;

	private: System::Windows::Forms::Button^ btnBo;
	private: System::Windows::Forms::Button^ btnMatOng;


	private: System::Windows::Forms::Button^ btnPhoMai;

	private: System::Windows::Forms::Button^ btnTrung;

	private: System::Windows::Forms::Button^ btnSo;
	private: System::Windows::Forms::Button^ btnSua;


	private: System::Windows::Forms::Button^ btnBanhQuy;

	private: System::Windows::Forms::Button^ btnBanhMi;
	private: System::Windows::Forms::Button^ btnTuongCa;


	private: System::Windows::Forms::Button^ btnThitHop;

	private: System::Windows::Forms::Button^ btnCaHop;
	private: System::Windows::Forms::Button^ btnTraiCay;


	private: System::Windows::Forms::Button^ btnGiam;

	private: System::Windows::Forms::Button^ btnDauAn;

	private: System::Windows::Forms::Button^ btnThitXongKhoi;
	private: System::Windows::Forms::Button^ btnHat;
	private: System::Windows::Forms::Button^ btnDauHop;
	private: System::Windows::Forms::Button^ button29;
	public:
	private:

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::CheckBox^ checkHeo;
private: System::Windows::Forms::CheckBox^ checkTom;
private: System::Windows::Forms::CheckBox^ checkCa;
private: System::Windows::Forms::CheckBox^ checkThitBo;
private: System::Windows::Forms::CheckBox^ checkDuaLeo;
private: System::Windows::Forms::CheckBox^ checkOtChuong;
private: System::Windows::Forms::CheckBox^ checkCaRot;
private: System::Windows::Forms::CheckBox^ checkCaChua;
private: System::Windows::Forms::CheckBox^ checkRau;
private: System::Windows::Forms::CheckBox^ checkNam;
private: System::Windows::Forms::CheckBox^ checkChanh;
private: System::Windows::Forms::CheckBox^ checkBo;
private: System::Windows::Forms::CheckBox^ checkThitXongKhoi;
private: System::Windows::Forms::CheckBox^ checkPhoMai;
private: System::Windows::Forms::CheckBox^ checkTrung;
private: System::Windows::Forms::CheckBox^ checkSo;
private: System::Windows::Forms::CheckBox^ checkMatOng;
private: System::Windows::Forms::CheckBox^ checkHat;
private: System::Windows::Forms::CheckBox^ checkDauHop;
private: System::Windows::Forms::CheckBox^ checkTraiCay;
private: System::Windows::Forms::CheckBox^ checkGiam;
private: System::Windows::Forms::CheckBox^ checkDauAn;
private: System::Windows::Forms::CheckBox^ checkTuongCa;
private: System::Windows::Forms::CheckBox^ checkThitHop;
private: System::Windows::Forms::CheckBox^ checkCaHop;
private: System::Windows::Forms::CheckBox^ checkSua;
private: System::Windows::Forms::CheckBox^ checkBanhQuy;
private: System::Windows::Forms::CheckBox^ checkBanhMi;
private: System::Windows::Forms::CheckBox^ checkMatOngx;
private: System::Windows::Forms::CheckBox^ checkHatx;
private: System::Windows::Forms::CheckBox^ checkDauHopx;
private: System::Windows::Forms::CheckBox^ checkTraiCayx;
private: System::Windows::Forms::CheckBox^ checkGiamx;
private: System::Windows::Forms::CheckBox^ checkDauAnx;
private: System::Windows::Forms::CheckBox^ checkTuongCax;
private: System::Windows::Forms::CheckBox^ checkThitHopx;
private: System::Windows::Forms::CheckBox^ checkCaHopx;
private: System::Windows::Forms::CheckBox^ checkSuax;
private: System::Windows::Forms::CheckBox^ checkBanhQuyx;
private: System::Windows::Forms::CheckBox^ checkBanhMix;
private: System::Windows::Forms::CheckBox^ checkThitXongKhoix;
private: System::Windows::Forms::CheckBox^ checkPhoMaix;
private: System::Windows::Forms::CheckBox^ checkTrungx;
private: System::Windows::Forms::CheckBox^ checkSox;
private: System::Windows::Forms::CheckBox^ checkRaux;
private: System::Windows::Forms::CheckBox^ checkNamx;
private: System::Windows::Forms::CheckBox^ checkChanhx;
private: System::Windows::Forms::CheckBox^ checkBox;
private: System::Windows::Forms::CheckBox^ checkDuaLeox;
private: System::Windows::Forms::CheckBox^ checkOtChuongx;
private: System::Windows::Forms::CheckBox^ checkCaRotx;
private: System::Windows::Forms::CheckBox^ checkCaChuax;
private: System::Windows::Forms::CheckBox^ checkThitBox;
private: System::Windows::Forms::CheckBox^ checkCax;
private: System::Windows::Forms::CheckBox^ checkTomx;
private: System::Windows::Forms::CheckBox^ checkHeox;
private: System::Windows::Forms::Label^ labelHeo;
private: System::Windows::Forms::Label^ labelTom;
private: System::Windows::Forms::Label^ labelCa;
private: System::Windows::Forms::Label^ labelThitBo;
private: System::Windows::Forms::Label^ labelDuaLeo;
private: System::Windows::Forms::Label^ labelOtChuong;
private: System::Windows::Forms::Label^ labelCaRot;
private: System::Windows::Forms::Label^ labelCaChua;
private: System::Windows::Forms::Label^ labelRau;
private: System::Windows::Forms::Label^ labelNam;
private: System::Windows::Forms::Label^ labelChanh;
private: System::Windows::Forms::Label^ labelBo;
private: System::Windows::Forms::Label^ labelThitXongKhoi;
private: System::Windows::Forms::Label^ labelPhoMai;
private: System::Windows::Forms::Label^ labelTrung;
private: System::Windows::Forms::Label^ labelSo;
private: System::Windows::Forms::Label^ labelMatOng;
private: System::Windows::Forms::Label^ labelHat;
private: System::Windows::Forms::Label^ labelDauHop;
private: System::Windows::Forms::Label^ labelTraiCay;
private: System::Windows::Forms::Label^ labelGiam;
private: System::Windows::Forms::Label^ labelDauAn;
private: System::Windows::Forms::Label^ labelTuongCa;
private: System::Windows::Forms::Label^ labelThitHop;
private: System::Windows::Forms::Label^ labelCaHop;
private: System::Windows::Forms::Label^ labelSua;
private: System::Windows::Forms::Label^ labelBanhQuy;
private: System::Windows::Forms::Label^ labelBanhMi;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Button^ button2;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do      t modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Nhap::typeid));
			this->btnHeo = (gcnew System::Windows::Forms::Button());
			this->btnTom = (gcnew System::Windows::Forms::Button());
			this->btnCa = (gcnew System::Windows::Forms::Button());
			this->btnThitBo = (gcnew System::Windows::Forms::Button());
			this->btnDuaLeo = (gcnew System::Windows::Forms::Button());
			this->btnOtChuong = (gcnew System::Windows::Forms::Button());
			this->btnCaRot = (gcnew System::Windows::Forms::Button());
			this->btnCaChua = (gcnew System::Windows::Forms::Button());
			this->btnRau = (gcnew System::Windows::Forms::Button());
			this->btnNam = (gcnew System::Windows::Forms::Button());
			this->btnChanh = (gcnew System::Windows::Forms::Button());
			this->btnBo = (gcnew System::Windows::Forms::Button());
			this->btnMatOng = (gcnew System::Windows::Forms::Button());
			this->btnPhoMai = (gcnew System::Windows::Forms::Button());
			this->btnTrung = (gcnew System::Windows::Forms::Button());
			this->btnSo = (gcnew System::Windows::Forms::Button());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->btnBanhQuy = (gcnew System::Windows::Forms::Button());
			this->btnBanhMi = (gcnew System::Windows::Forms::Button());
			this->btnTuongCa = (gcnew System::Windows::Forms::Button());
			this->btnThitHop = (gcnew System::Windows::Forms::Button());
			this->btnCaHop = (gcnew System::Windows::Forms::Button());
			this->btnTraiCay = (gcnew System::Windows::Forms::Button());
			this->btnGiam = (gcnew System::Windows::Forms::Button());
			this->btnDauAn = (gcnew System::Windows::Forms::Button());
			this->btnThitXongKhoi = (gcnew System::Windows::Forms::Button());
			this->btnHat = (gcnew System::Windows::Forms::Button());
			this->btnDauHop = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->checkHeo = (gcnew System::Windows::Forms::CheckBox());
			this->checkTom = (gcnew System::Windows::Forms::CheckBox());
			this->checkCa = (gcnew System::Windows::Forms::CheckBox());
			this->checkThitBo = (gcnew System::Windows::Forms::CheckBox());
			this->checkDuaLeo = (gcnew System::Windows::Forms::CheckBox());
			this->checkOtChuong = (gcnew System::Windows::Forms::CheckBox());
			this->checkCaRot = (gcnew System::Windows::Forms::CheckBox());
			this->checkCaChua = (gcnew System::Windows::Forms::CheckBox());
			this->checkRau = (gcnew System::Windows::Forms::CheckBox());
			this->checkNam = (gcnew System::Windows::Forms::CheckBox());
			this->checkChanh = (gcnew System::Windows::Forms::CheckBox());
			this->checkBo = (gcnew System::Windows::Forms::CheckBox());
			this->checkThitXongKhoi = (gcnew System::Windows::Forms::CheckBox());
			this->checkPhoMai = (gcnew System::Windows::Forms::CheckBox());
			this->checkTrung = (gcnew System::Windows::Forms::CheckBox());
			this->checkSo = (gcnew System::Windows::Forms::CheckBox());
			this->checkMatOng = (gcnew System::Windows::Forms::CheckBox());
			this->checkHat = (gcnew System::Windows::Forms::CheckBox());
			this->checkDauHop = (gcnew System::Windows::Forms::CheckBox());
			this->checkTraiCay = (gcnew System::Windows::Forms::CheckBox());
			this->checkGiam = (gcnew System::Windows::Forms::CheckBox());
			this->checkDauAn = (gcnew System::Windows::Forms::CheckBox());
			this->checkTuongCa = (gcnew System::Windows::Forms::CheckBox());
			this->checkThitHop = (gcnew System::Windows::Forms::CheckBox());
			this->checkCaHop = (gcnew System::Windows::Forms::CheckBox());
			this->checkSua = (gcnew System::Windows::Forms::CheckBox());
			this->checkBanhQuy = (gcnew System::Windows::Forms::CheckBox());
			this->checkBanhMi = (gcnew System::Windows::Forms::CheckBox());
			this->checkMatOngx = (gcnew System::Windows::Forms::CheckBox());
			this->checkHatx = (gcnew System::Windows::Forms::CheckBox());
			this->checkDauHopx = (gcnew System::Windows::Forms::CheckBox());
			this->checkTraiCayx = (gcnew System::Windows::Forms::CheckBox());
			this->checkGiamx = (gcnew System::Windows::Forms::CheckBox());
			this->checkDauAnx = (gcnew System::Windows::Forms::CheckBox());
			this->checkTuongCax = (gcnew System::Windows::Forms::CheckBox());
			this->checkThitHopx = (gcnew System::Windows::Forms::CheckBox());
			this->checkCaHopx = (gcnew System::Windows::Forms::CheckBox());
			this->checkSuax = (gcnew System::Windows::Forms::CheckBox());
			this->checkBanhQuyx = (gcnew System::Windows::Forms::CheckBox());
			this->checkBanhMix = (gcnew System::Windows::Forms::CheckBox());
			this->checkThitXongKhoix = (gcnew System::Windows::Forms::CheckBox());
			this->checkPhoMaix = (gcnew System::Windows::Forms::CheckBox());
			this->checkTrungx = (gcnew System::Windows::Forms::CheckBox());
			this->checkSox = (gcnew System::Windows::Forms::CheckBox());
			this->checkRaux = (gcnew System::Windows::Forms::CheckBox());
			this->checkNamx = (gcnew System::Windows::Forms::CheckBox());
			this->checkChanhx = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->checkDuaLeox = (gcnew System::Windows::Forms::CheckBox());
			this->checkOtChuongx = (gcnew System::Windows::Forms::CheckBox());
			this->checkCaRotx = (gcnew System::Windows::Forms::CheckBox());
			this->checkCaChuax = (gcnew System::Windows::Forms::CheckBox());
			this->checkThitBox = (gcnew System::Windows::Forms::CheckBox());
			this->checkCax = (gcnew System::Windows::Forms::CheckBox());
			this->checkTomx = (gcnew System::Windows::Forms::CheckBox());
			this->checkHeox = (gcnew System::Windows::Forms::CheckBox());
			this->labelHeo = (gcnew System::Windows::Forms::Label());
			this->labelTom = (gcnew System::Windows::Forms::Label());
			this->labelCa = (gcnew System::Windows::Forms::Label());
			this->labelThitBo = (gcnew System::Windows::Forms::Label());
			this->labelDuaLeo = (gcnew System::Windows::Forms::Label());
			this->labelOtChuong = (gcnew System::Windows::Forms::Label());
			this->labelCaRot = (gcnew System::Windows::Forms::Label());
			this->labelCaChua = (gcnew System::Windows::Forms::Label());
			this->labelRau = (gcnew System::Windows::Forms::Label());
			this->labelNam = (gcnew System::Windows::Forms::Label());
			this->labelChanh = (gcnew System::Windows::Forms::Label());
			this->labelBo = (gcnew System::Windows::Forms::Label());
			this->labelThitXongKhoi = (gcnew System::Windows::Forms::Label());
			this->labelPhoMai = (gcnew System::Windows::Forms::Label());
			this->labelTrung = (gcnew System::Windows::Forms::Label());
			this->labelSo = (gcnew System::Windows::Forms::Label());
			this->labelMatOng = (gcnew System::Windows::Forms::Label());
			this->labelHat = (gcnew System::Windows::Forms::Label());
			this->labelDauHop = (gcnew System::Windows::Forms::Label());
			this->labelTraiCay = (gcnew System::Windows::Forms::Label());
			this->labelGiam = (gcnew System::Windows::Forms::Label());
			this->labelDauAn = (gcnew System::Windows::Forms::Label());
			this->labelTuongCa = (gcnew System::Windows::Forms::Label());
			this->labelThitHop = (gcnew System::Windows::Forms::Label());
			this->labelCaHop = (gcnew System::Windows::Forms::Label());
			this->labelSua = (gcnew System::Windows::Forms::Label());
			this->labelBanhQuy = (gcnew System::Windows::Forms::Label());
			this->labelBanhMi = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnHeo
			// 
			this->btnHeo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnHeo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHeo.BackgroundImage")));
			this->btnHeo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnHeo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHeo->ForeColor = System::Drawing::Color::White;
			this->btnHeo->Location = System::Drawing::Point(185, 273);
			this->btnHeo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnHeo->Name = L"btnHeo";
			this->btnHeo->Size = System::Drawing::Size(88, 52);
			this->btnHeo->TabIndex = 2;
			this->btnHeo->UseVisualStyleBackColor = false;
			this->btnHeo->Click += gcnew System::EventHandler(this, &Nhap::btnHeo_Click);
			// 
			// btnTom
			// 
			this->btnTom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnTom->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTom.BackgroundImage")));
			this->btnTom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnTom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTom->ForeColor = System::Drawing::Color::White;
			this->btnTom->Location = System::Drawing::Point(335, 273);
			this->btnTom->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTom->Name = L"btnTom";
			this->btnTom->Size = System::Drawing::Size(88, 52);
			this->btnTom->TabIndex = 3;
			this->btnTom->UseVisualStyleBackColor = false;
			this->btnTom->Click += gcnew System::EventHandler(this, &Nhap::btnTom_Click);
			// 
			// btnCa
			// 
			this->btnCa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnCa->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCa.BackgroundImage")));
			this->btnCa->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnCa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCa->ForeColor = System::Drawing::Color::White;
			this->btnCa->Location = System::Drawing::Point(483, 273);
			this->btnCa->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCa->Name = L"btnCa";
			this->btnCa->Size = System::Drawing::Size(88, 52);
			this->btnCa->TabIndex = 4;
			this->btnCa->UseVisualStyleBackColor = false;
			this->btnCa->Click += gcnew System::EventHandler(this, &Nhap::btnCa_Click);
			// 
			// btnThitBo
			// 
			this->btnThitBo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnThitBo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnThitBo.BackgroundImage")));
			this->btnThitBo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnThitBo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThitBo->ForeColor = System::Drawing::Color::White;
			this->btnThitBo->Location = System::Drawing::Point(629, 273);
			this->btnThitBo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnThitBo->Name = L"btnThitBo";
			this->btnThitBo->Size = System::Drawing::Size(88, 52);
			this->btnThitBo->TabIndex = 5;
			this->btnThitBo->UseVisualStyleBackColor = false;
			this->btnThitBo->Click += gcnew System::EventHandler(this, &Nhap::btnThitBo_Click);
			// 
			// btnDuaLeo
			// 
			this->btnDuaLeo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnDuaLeo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDuaLeo.BackgroundImage")));
			this->btnDuaLeo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnDuaLeo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDuaLeo->ForeColor = System::Drawing::Color::White;
			this->btnDuaLeo->Location = System::Drawing::Point(629, 374);
			this->btnDuaLeo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDuaLeo->Name = L"btnDuaLeo";
			this->btnDuaLeo->Size = System::Drawing::Size(88, 52);
			this->btnDuaLeo->TabIndex = 9;
			this->btnDuaLeo->UseVisualStyleBackColor = false;
			this->btnDuaLeo->Click += gcnew System::EventHandler(this, &Nhap::btnDuaLeo_Click);
			// 
			// btnOtChuong
			// 
			this->btnOtChuong->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnOtChuong->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOtChuong.BackgroundImage")));
			this->btnOtChuong->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnOtChuong->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOtChuong->ForeColor = System::Drawing::Color::White;
			this->btnOtChuong->Location = System::Drawing::Point(483, 374);
			this->btnOtChuong->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnOtChuong->Name = L"btnOtChuong";
			this->btnOtChuong->Size = System::Drawing::Size(88, 52);
			this->btnOtChuong->TabIndex = 8;
			this->btnOtChuong->UseVisualStyleBackColor = false;
			this->btnOtChuong->Click += gcnew System::EventHandler(this, &Nhap::btnOtChuong_Click);
			// 
			// btnCaRot
			// 
			this->btnCaRot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnCaRot->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCaRot.BackgroundImage")));
			this->btnCaRot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnCaRot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCaRot->ForeColor = System::Drawing::Color::White;
			this->btnCaRot->Location = System::Drawing::Point(335, 374);
			this->btnCaRot->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCaRot->Name = L"btnCaRot";
			this->btnCaRot->Size = System::Drawing::Size(88, 52);
			this->btnCaRot->TabIndex = 7;
			this->btnCaRot->UseVisualStyleBackColor = false;
			this->btnCaRot->Click += gcnew System::EventHandler(this, &Nhap::btnCaRot_Click);
			// 
			// btnCaChua
			// 
			this->btnCaChua->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnCaChua->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCaChua.BackgroundImage")));
			this->btnCaChua->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnCaChua->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCaChua->ForeColor = System::Drawing::Color::White;
			this->btnCaChua->Location = System::Drawing::Point(185, 374);
			this->btnCaChua->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCaChua->Name = L"btnCaChua";
			this->btnCaChua->Size = System::Drawing::Size(88, 52);
			this->btnCaChua->TabIndex = 6;
			this->btnCaChua->UseVisualStyleBackColor = false;
			this->btnCaChua->Click += gcnew System::EventHandler(this, &Nhap::btnCaChua_Click);
			// 
			// btnRau
			// 
			this->btnRau->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnRau->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRau.BackgroundImage")));
			this->btnRau->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnRau->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRau->ForeColor = System::Drawing::Color::White;
			this->btnRau->Location = System::Drawing::Point(629, 473);
			this->btnRau->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnRau->Name = L"btnRau";
			this->btnRau->Size = System::Drawing::Size(88, 52);
			this->btnRau->TabIndex = 13;
			this->btnRau->UseVisualStyleBackColor = false;
			this->btnRau->Click += gcnew System::EventHandler(this, &Nhap::btnRau_Click);
			// 
			// btnNam
			// 
			this->btnNam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnNam->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNam.BackgroundImage")));
			this->btnNam->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnNam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNam->ForeColor = System::Drawing::Color::White;
			this->btnNam->Location = System::Drawing::Point(483, 473);
			this->btnNam->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnNam->Name = L"btnNam";
			this->btnNam->Size = System::Drawing::Size(88, 52);
			this->btnNam->TabIndex = 12;
			this->btnNam->UseVisualStyleBackColor = false;
			this->btnNam->Click += gcnew System::EventHandler(this, &Nhap::btnNam_Click);
			// 
			// btnChanh
			// 
			this->btnChanh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnChanh->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnChanh.BackgroundImage")));
			this->btnChanh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnChanh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnChanh->ForeColor = System::Drawing::Color::White;
			this->btnChanh->Location = System::Drawing::Point(335, 473);
			this->btnChanh->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnChanh->Name = L"btnChanh";
			this->btnChanh->Size = System::Drawing::Size(88, 52);
			this->btnChanh->TabIndex = 11;
			this->btnChanh->UseVisualStyleBackColor = false;
			this->btnChanh->Click += gcnew System::EventHandler(this, &Nhap::btnChanh_Click);
			// 
			// btnBo
			// 
			this->btnBo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnBo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBo.BackgroundImage")));
			this->btnBo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnBo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBo->ForeColor = System::Drawing::Color::White;
			this->btnBo->Location = System::Drawing::Point(185, 473);
			this->btnBo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnBo->Name = L"btnBo";
			this->btnBo->Size = System::Drawing::Size(88, 52);
			this->btnBo->TabIndex = 10;
			this->btnBo->UseVisualStyleBackColor = false;
			this->btnBo->Click += gcnew System::EventHandler(this, &Nhap::btnBo_Click);
			// 
			// btnMatOng
			// 
			this->btnMatOng->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnMatOng->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMatOng.BackgroundImage")));
			this->btnMatOng->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnMatOng->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMatOng->ForeColor = System::Drawing::Color::White;
			this->btnMatOng->Location = System::Drawing::Point(1219, 571);
			this->btnMatOng->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnMatOng->Name = L"btnMatOng";
			this->btnMatOng->Size = System::Drawing::Size(88, 52);
			this->btnMatOng->TabIndex = 17;
			this->btnMatOng->UseVisualStyleBackColor = false;
			this->btnMatOng->Click += gcnew System::EventHandler(this, &Nhap::btnMatOng_Click);
			// 
			// btnPhoMai
			// 
			this->btnPhoMai->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnPhoMai->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPhoMai.BackgroundImage")));
			this->btnPhoMai->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnPhoMai->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPhoMai->ForeColor = System::Drawing::Color::White;
			this->btnPhoMai->Location = System::Drawing::Point(483, 571);
			this->btnPhoMai->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnPhoMai->Name = L"btnPhoMai";
			this->btnPhoMai->Size = System::Drawing::Size(88, 52);
			this->btnPhoMai->TabIndex = 16;
			this->btnPhoMai->UseVisualStyleBackColor = false;
			this->btnPhoMai->Click += gcnew System::EventHandler(this, &Nhap::btnPhoMai_Click);
			// 
			// btnTrung
			// 
			this->btnTrung->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnTrung->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTrung.BackgroundImage")));
			this->btnTrung->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnTrung->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTrung->ForeColor = System::Drawing::Color::White;
			this->btnTrung->Location = System::Drawing::Point(335, 571);
			this->btnTrung->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTrung->Name = L"btnTrung";
			this->btnTrung->Size = System::Drawing::Size(88, 52);
			this->btnTrung->TabIndex = 15;
			this->btnTrung->UseVisualStyleBackColor = false;
			this->btnTrung->Click += gcnew System::EventHandler(this, &Nhap::btnTrung_Click);
			// 
			// btnSo
			// 
			this->btnSo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnSo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSo.BackgroundImage")));
			this->btnSo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnSo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSo->ForeColor = System::Drawing::Color::White;
			this->btnSo->Location = System::Drawing::Point(185, 571);
			this->btnSo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSo->Name = L"btnSo";
			this->btnSo->Size = System::Drawing::Size(88, 52);
			this->btnSo->TabIndex = 14;
			this->btnSo->UseVisualStyleBackColor = false;
			this->btnSo->Click += gcnew System::EventHandler(this, &Nhap::btnSo_Click);
			// 
			// btnSua
			// 
			this->btnSua->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnSua->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSua.BackgroundImage")));
			this->btnSua->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnSua->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSua->ForeColor = System::Drawing::Color::White;
			this->btnSua->Location = System::Drawing::Point(1219, 273);
			this->btnSua->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(88, 52);
			this->btnSua->TabIndex = 20;
			this->btnSua->UseVisualStyleBackColor = false;
			this->btnSua->Click += gcnew System::EventHandler(this, &Nhap::btnSua_Click);
			// 
			// btnBanhQuy
			// 
			this->btnBanhQuy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnBanhQuy->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBanhQuy.BackgroundImage")));
			this->btnBanhQuy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnBanhQuy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBanhQuy->ForeColor = System::Drawing::Color::White;
			this->btnBanhQuy->Location = System::Drawing::Point(1071, 273);
			this->btnBanhQuy->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnBanhQuy->Name = L"btnBanhQuy";
			this->btnBanhQuy->Size = System::Drawing::Size(88, 52);
			this->btnBanhQuy->TabIndex = 19;
			this->btnBanhQuy->UseVisualStyleBackColor = false;
			this->btnBanhQuy->Click += gcnew System::EventHandler(this, &Nhap::btnBanhQuy_Click);
			// 
			// btnBanhMi
			// 
			this->btnBanhMi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnBanhMi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBanhMi.BackgroundImage")));
			this->btnBanhMi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnBanhMi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBanhMi->ForeColor = System::Drawing::Color::White;
			this->btnBanhMi->Location = System::Drawing::Point(921, 273);
			this->btnBanhMi->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnBanhMi->Name = L"btnBanhMi";
			this->btnBanhMi->Size = System::Drawing::Size(88, 52);
			this->btnBanhMi->TabIndex = 18;
			this->btnBanhMi->UseVisualStyleBackColor = false;
			this->btnBanhMi->Click += gcnew System::EventHandler(this, &Nhap::btnBanhMi_Click);
			// 
			// btnTuongCa
			// 
			this->btnTuongCa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnTuongCa->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTuongCa.BackgroundImage")));
			this->btnTuongCa->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnTuongCa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTuongCa->ForeColor = System::Drawing::Color::White;
			this->btnTuongCa->Location = System::Drawing::Point(1219, 374);
			this->btnTuongCa->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTuongCa->Name = L"btnTuongCa";
			this->btnTuongCa->Size = System::Drawing::Size(88, 52);
			this->btnTuongCa->TabIndex = 23;
			this->btnTuongCa->UseVisualStyleBackColor = false;
			this->btnTuongCa->Click += gcnew System::EventHandler(this, &Nhap::btnTuongCa_Click);
			// 
			// btnThitHop
			// 
			this->btnThitHop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnThitHop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnThitHop.BackgroundImage")));
			this->btnThitHop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnThitHop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThitHop->ForeColor = System::Drawing::Color::White;
			this->btnThitHop->Location = System::Drawing::Point(1071, 374);
			this->btnThitHop->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnThitHop->Name = L"btnThitHop";
			this->btnThitHop->Size = System::Drawing::Size(88, 52);
			this->btnThitHop->TabIndex = 22;
			this->btnThitHop->UseVisualStyleBackColor = false;
			this->btnThitHop->Click += gcnew System::EventHandler(this, &Nhap::btnThitHop_Click);
			// 
			// btnCaHop
			// 
			this->btnCaHop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnCaHop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCaHop.BackgroundImage")));
			this->btnCaHop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnCaHop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCaHop->ForeColor = System::Drawing::Color::White;
			this->btnCaHop->Location = System::Drawing::Point(921, 374);
			this->btnCaHop->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCaHop->Name = L"btnCaHop";
			this->btnCaHop->Size = System::Drawing::Size(88, 52);
			this->btnCaHop->TabIndex = 21;
			this->btnCaHop->UseVisualStyleBackColor = false;
			this->btnCaHop->Click += gcnew System::EventHandler(this, &Nhap::btnCaHop_Click);
			// 
			// btnTraiCay
			// 
			this->btnTraiCay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnTraiCay->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTraiCay.BackgroundImage")));
			this->btnTraiCay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnTraiCay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTraiCay->ForeColor = System::Drawing::Color::White;
			this->btnTraiCay->Location = System::Drawing::Point(1219, 473);
			this->btnTraiCay->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnTraiCay->Name = L"btnTraiCay";
			this->btnTraiCay->Size = System::Drawing::Size(88, 52);
			this->btnTraiCay->TabIndex = 26;
			this->btnTraiCay->UseVisualStyleBackColor = false;
			this->btnTraiCay->Click += gcnew System::EventHandler(this, &Nhap::btnTraiCay_Click);
			// 
			// btnGiam
			// 
			this->btnGiam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnGiam->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGiam.BackgroundImage")));
			this->btnGiam->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnGiam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGiam->ForeColor = System::Drawing::Color::White;
			this->btnGiam->Location = System::Drawing::Point(1071, 473);
			this->btnGiam->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnGiam->Name = L"btnGiam";
			this->btnGiam->Size = System::Drawing::Size(88, 52);
			this->btnGiam->TabIndex = 25;
			this->btnGiam->UseVisualStyleBackColor = false;
			this->btnGiam->Click += gcnew System::EventHandler(this, &Nhap::btnGiam_Click);
			// 
			// btnDauAn
			// 
			this->btnDauAn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnDauAn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDauAn.BackgroundImage")));
			this->btnDauAn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnDauAn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDauAn->ForeColor = System::Drawing::Color::White;
			this->btnDauAn->Location = System::Drawing::Point(921, 473);
			this->btnDauAn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDauAn->Name = L"btnDauAn";
			this->btnDauAn->Size = System::Drawing::Size(88, 52);
			this->btnDauAn->TabIndex = 24;
			this->btnDauAn->UseVisualStyleBackColor = false;
			this->btnDauAn->Click += gcnew System::EventHandler(this, &Nhap::btnDauAn_Click);
			// 
			// btnThitXongKhoi
			// 
			this->btnThitXongKhoi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnThitXongKhoi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnThitXongKhoi.BackgroundImage")));
			this->btnThitXongKhoi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnThitXongKhoi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThitXongKhoi->ForeColor = System::Drawing::Color::White;
			this->btnThitXongKhoi->Location = System::Drawing::Point(629, 571);
			this->btnThitXongKhoi->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnThitXongKhoi->Name = L"btnThitXongKhoi";
			this->btnThitXongKhoi->Size = System::Drawing::Size(88, 52);
			this->btnThitXongKhoi->TabIndex = 29;
			this->btnThitXongKhoi->UseVisualStyleBackColor = false;
			this->btnThitXongKhoi->Click += gcnew System::EventHandler(this, &Nhap::btnThitXongKhoi_Click);
			// 
			// btnHat
			// 
			this->btnHat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnHat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHat.BackgroundImage")));
			this->btnHat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnHat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHat->ForeColor = System::Drawing::Color::White;
			this->btnHat->Location = System::Drawing::Point(1071, 571);
			this->btnHat->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnHat->Name = L"btnHat";
			this->btnHat->Size = System::Drawing::Size(88, 52);
			this->btnHat->TabIndex = 28;
			this->btnHat->UseVisualStyleBackColor = false;
			this->btnHat->Click += gcnew System::EventHandler(this, &Nhap::btnHat_Click);
			// 
			// btnDauHop
			// 
			this->btnDauHop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->btnDauHop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDauHop.BackgroundImage")));
			this->btnDauHop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnDauHop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDauHop->ForeColor = System::Drawing::Color::White;
			this->btnDauHop->Location = System::Drawing::Point(921, 571);
			this->btnDauHop->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDauHop->Name = L"btnDauHop";
			this->btnDauHop->Size = System::Drawing::Size(88, 52);
			this->btnDauHop->TabIndex = 27;
			this->btnDauHop->UseVisualStyleBackColor = false;
			this->btnDauHop->Click += gcnew System::EventHandler(this, &Nhap::btnDauHop_Click);
			// 
			// button29
			// 
			this->button29->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button29->FlatAppearance->BorderSize = 2;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->button29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(1312, 746);
			this->button29->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(103, 38);
			this->button29->TabIndex = 62;
			this->button29->Text = L"OK";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Nhap::button29_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(653, 689);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(233, 43);
			this->button1->TabIndex = 91;
			this->button1->Text = L"Nhập và hiển thị";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Nhap::button1_Click);
			// 
			// button30
			// 
			this->button30->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button30->FlatAppearance->BorderSize = 2;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->button30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(653, 751);
			this->button30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(233, 43);
			this->button30->TabIndex = 93;
			this->button30->Text = L"Xuất và hiển thị";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Nhap::button30_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::White;
			this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(551, 52);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(369, 33);
			this->radioButton1->TabIndex = 94;
			this->radioButton1->Text = L"NHẬP HÀNG HÓA VÀO KHO";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Nhap::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::White;
			this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(973, 52);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(380, 33);
			this->radioButton2->TabIndex = 95;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"XUẤT HÀNG HÓA KHỎI KHO";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Nhap::radioButton2_CheckedChanged);
			// 
			// button31
			// 
			this->button31->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button31->FlatAppearance->BorderSize = 2;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->button31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(1000, 116);
			this->button31->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(159, 54);
			this->button31->TabIndex = 96;
			this->button31->Text = L"RESET";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Nhap::button31_Click);
			// 
			// checkHeo
			// 
			this->checkHeo->AutoSize = true;
			this->checkHeo->Location = System::Drawing::Point(204, 336);
			this->checkHeo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkHeo->Name = L"checkHeo";
			this->checkHeo->Size = System::Drawing::Size(18, 17);
			this->checkHeo->TabIndex = 97;
			this->checkHeo->UseVisualStyleBackColor = true;
			// 
			// checkTom
			// 
			this->checkTom->AutoSize = true;
			this->checkTom->Location = System::Drawing::Point(353, 336);
			this->checkTom->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkTom->Name = L"checkTom";
			this->checkTom->Size = System::Drawing::Size(18, 17);
			this->checkTom->TabIndex = 98;
			this->checkTom->UseVisualStyleBackColor = true;
			// 
			// checkCa
			// 
			this->checkCa->AutoSize = true;
			this->checkCa->Location = System::Drawing::Point(499, 336);
			this->checkCa->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkCa->Name = L"checkCa";
			this->checkCa->Size = System::Drawing::Size(18, 17);
			this->checkCa->TabIndex = 99;
			this->checkCa->UseVisualStyleBackColor = true;
			// 
			// checkThitBo
			// 
			this->checkThitBo->AutoSize = true;
			this->checkThitBo->Location = System::Drawing::Point(648, 336);
			this->checkThitBo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkThitBo->Name = L"checkThitBo";
			this->checkThitBo->Size = System::Drawing::Size(18, 17);
			this->checkThitBo->TabIndex = 100;
			this->checkThitBo->UseVisualStyleBackColor = true;
			// 
			// checkDuaLeo
			// 
			this->checkDuaLeo->AutoSize = true;
			this->checkDuaLeo->Location = System::Drawing::Point(648, 437);
			this->checkDuaLeo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkDuaLeo->Name = L"checkDuaLeo";
			this->checkDuaLeo->Size = System::Drawing::Size(18, 17);
			this->checkDuaLeo->TabIndex = 104;
			this->checkDuaLeo->UseVisualStyleBackColor = true;
			// 
			// checkOtChuong
			// 
			this->checkOtChuong->AutoSize = true;
			this->checkOtChuong->Location = System::Drawing::Point(499, 437);
			this->checkOtChuong->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkOtChuong->Name = L"checkOtChuong";
			this->checkOtChuong->Size = System::Drawing::Size(18, 17);
			this->checkOtChuong->TabIndex = 103;
			this->checkOtChuong->UseVisualStyleBackColor = true;
			// 
			// checkCaRot
			// 
			this->checkCaRot->AutoSize = true;
			this->checkCaRot->Location = System::Drawing::Point(353, 437);
			this->checkCaRot->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkCaRot->Name = L"checkCaRot";
			this->checkCaRot->Size = System::Drawing::Size(18, 17);
			this->checkCaRot->TabIndex = 102;
			this->checkCaRot->UseVisualStyleBackColor = true;
			// 
			// checkCaChua
			// 
			this->checkCaChua->AutoSize = true;
			this->checkCaChua->Location = System::Drawing::Point(204, 437);
			this->checkCaChua->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkCaChua->Name = L"checkCaChua";
			this->checkCaChua->Size = System::Drawing::Size(18, 17);
			this->checkCaChua->TabIndex = 101;
			this->checkCaChua->UseVisualStyleBackColor = true;
			// 
			// checkRau
			// 
			this->checkRau->AutoSize = true;
			this->checkRau->Location = System::Drawing::Point(648, 535);
			this->checkRau->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkRau->Name = L"checkRau";
			this->checkRau->Size = System::Drawing::Size(18, 17);
			this->checkRau->TabIndex = 108;
			this->checkRau->UseVisualStyleBackColor = true;
			// 
			// checkNam
			// 
			this->checkNam->AutoSize = true;
			this->checkNam->Location = System::Drawing::Point(499, 535);
			this->checkNam->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkNam->Name = L"checkNam";
			this->checkNam->Size = System::Drawing::Size(18, 17);
			this->checkNam->TabIndex = 107;
			this->checkNam->UseVisualStyleBackColor = true;
			// 
			// checkChanh
			// 
			this->checkChanh->AutoSize = true;
			this->checkChanh->Location = System::Drawing::Point(353, 535);
			this->checkChanh->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkChanh->Name = L"checkChanh";
			this->checkChanh->Size = System::Drawing::Size(18, 17);
			this->checkChanh->TabIndex = 106;
			this->checkChanh->UseVisualStyleBackColor = true;
			// 
			// checkBo
			// 
			this->checkBo->AutoSize = true;
			this->checkBo->Location = System::Drawing::Point(204, 535);
			this->checkBo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBo->Name = L"checkBo";
			this->checkBo->Size = System::Drawing::Size(18, 17);
			this->checkBo->TabIndex = 105;
			this->checkBo->UseVisualStyleBackColor = true;
			// 
			// checkThitXongKhoi
			// 
			this->checkThitXongKhoi->AutoSize = true;
			this->checkThitXongKhoi->Location = System::Drawing::Point(648, 634);
			this->checkThitXongKhoi->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkThitXongKhoi->Name = L"checkThitXongKhoi";
			this->checkThitXongKhoi->Size = System::Drawing::Size(18, 17);
			this->checkThitXongKhoi->TabIndex = 112;
			this->checkThitXongKhoi->UseVisualStyleBackColor = true;
			// 
			// checkPhoMai
			// 
			this->checkPhoMai->AutoSize = true;
			this->checkPhoMai->Location = System::Drawing::Point(499, 634);
			this->checkPhoMai->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkPhoMai->Name = L"checkPhoMai";
			this->checkPhoMai->Size = System::Drawing::Size(18, 17);
			this->checkPhoMai->TabIndex = 111;
			this->checkPhoMai->UseVisualStyleBackColor = true;
			// 
			// checkTrung
			// 
			this->checkTrung->AutoSize = true;
			this->checkTrung->Location = System::Drawing::Point(353, 634);
			this->checkTrung->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkTrung->Name = L"checkTrung";
			this->checkTrung->Size = System::Drawing::Size(18, 17);
			this->checkTrung->TabIndex = 110;
			this->checkTrung->UseVisualStyleBackColor = true;
			// 
			// checkSo
			// 
			this->checkSo->AutoSize = true;
			this->checkSo->Location = System::Drawing::Point(204, 634);
			this->checkSo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkSo->Name = L"checkSo";
			this->checkSo->Size = System::Drawing::Size(18, 17);
			this->checkSo->TabIndex = 109;
			this->checkSo->UseVisualStyleBackColor = true;
			// 
			// checkMatOng
			// 
			this->checkMatOng->AutoSize = true;
			this->checkMatOng->Location = System::Drawing::Point(1240, 634);
			this->checkMatOng->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkMatOng->Name = L"checkMatOng";
			this->checkMatOng->Size = System::Drawing::Size(18, 17);
			this->checkMatOng->TabIndex = 124;
			this->checkMatOng->UseVisualStyleBackColor = true;
			// 
			// checkHat
			// 
			this->checkHat->AutoSize = true;
			this->checkHat->Location = System::Drawing::Point(1091, 634);
			this->checkHat->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkHat->Name = L"checkHat";
			this->checkHat->Size = System::Drawing::Size(18, 17);
			this->checkHat->TabIndex = 123;
			this->checkHat->UseVisualStyleBackColor = true;
			// 
			// checkDauHop
			// 
			this->checkDauHop->AutoSize = true;
			this->checkDauHop->Location = System::Drawing::Point(945, 634);
			this->checkDauHop->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkDauHop->Name = L"checkDauHop";
			this->checkDauHop->Size = System::Drawing::Size(18, 17);
			this->checkDauHop->TabIndex = 122;
			this->checkDauHop->UseVisualStyleBackColor = true;
			// 
			// checkTraiCay
			// 
			this->checkTraiCay->AutoSize = true;
			this->checkTraiCay->Location = System::Drawing::Point(1240, 535);
			this->checkTraiCay->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkTraiCay->Name = L"checkTraiCay";
			this->checkTraiCay->Size = System::Drawing::Size(18, 17);
			this->checkTraiCay->TabIndex = 121;
			this->checkTraiCay->UseVisualStyleBackColor = true;
			// 
			// checkGiam
			// 
			this->checkGiam->AutoSize = true;
			this->checkGiam->Location = System::Drawing::Point(1091, 535);
			this->checkGiam->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkGiam->Name = L"checkGiam";
			this->checkGiam->Size = System::Drawing::Size(18, 17);
			this->checkGiam->TabIndex = 120;
			this->checkGiam->UseVisualStyleBackColor = true;
			// 
			// checkDauAn
			// 
			this->checkDauAn->AutoSize = true;
			this->checkDauAn->Location = System::Drawing::Point(945, 535);
			this->checkDauAn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkDauAn->Name = L"checkDauAn";
			this->checkDauAn->Size = System::Drawing::Size(18, 17);
			this->checkDauAn->TabIndex = 119;
			this->checkDauAn->UseVisualStyleBackColor = true;
			// 
			// checkTuongCa
			// 
			this->checkTuongCa->AutoSize = true;
			this->checkTuongCa->Location = System::Drawing::Point(1240, 437);
			this->checkTuongCa->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkTuongCa->Name = L"checkTuongCa";
			this->checkTuongCa->Size = System::Drawing::Size(18, 17);
			this->checkTuongCa->TabIndex = 118;
			this->checkTuongCa->UseVisualStyleBackColor = true;
			// 
			// checkThitHop
			// 
			this->checkThitHop->AutoSize = true;
			this->checkThitHop->Location = System::Drawing::Point(1091, 437);
			this->checkThitHop->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkThitHop->Name = L"checkThitHop";
			this->checkThitHop->Size = System::Drawing::Size(18, 17);
			this->checkThitHop->TabIndex = 117;
			this->checkThitHop->UseVisualStyleBackColor = true;
			// 
			// checkCaHop
			// 
			this->checkCaHop->AutoSize = true;
			this->checkCaHop->Location = System::Drawing::Point(945, 437);
			this->checkCaHop->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkCaHop->Name = L"checkCaHop";
			this->checkCaHop->Size = System::Drawing::Size(18, 17);
			this->checkCaHop->TabIndex = 116;
			this->checkCaHop->UseVisualStyleBackColor = true;
			// 
			// checkSua
			// 
			this->checkSua->AutoSize = true;
			this->checkSua->Location = System::Drawing::Point(1240, 336);
			this->checkSua->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkSua->Name = L"checkSua";
			this->checkSua->Size = System::Drawing::Size(18, 17);
			this->checkSua->TabIndex = 115;
			this->checkSua->UseVisualStyleBackColor = true;
			// 
			// checkBanhQuy
			// 
			this->checkBanhQuy->AutoSize = true;
			this->checkBanhQuy->Location = System::Drawing::Point(1091, 336);
			this->checkBanhQuy->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBanhQuy->Name = L"checkBanhQuy";
			this->checkBanhQuy->Size = System::Drawing::Size(18, 17);
			this->checkBanhQuy->TabIndex = 114;
			this->checkBanhQuy->UseVisualStyleBackColor = true;
			// 
			// checkBanhMi
			// 
			this->checkBanhMi->AutoSize = true;
			this->checkBanhMi->Location = System::Drawing::Point(945, 336);
			this->checkBanhMi->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBanhMi->Name = L"checkBanhMi";
			this->checkBanhMi->Size = System::Drawing::Size(18, 17);
			this->checkBanhMi->TabIndex = 113;
			this->checkBanhMi->UseVisualStyleBackColor = true;
			// 
			// checkMatOngx
			// 
			this->checkMatOngx->AutoSize = true;
			this->checkMatOngx->Location = System::Drawing::Point(1268, 634);
			this->checkMatOngx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkMatOngx->Name = L"checkMatOngx";
			this->checkMatOngx->Size = System::Drawing::Size(18, 17);
			this->checkMatOngx->TabIndex = 152;
			this->checkMatOngx->UseVisualStyleBackColor = true;
			// 
			// checkHatx
			// 
			this->checkHatx->AutoSize = true;
			this->checkHatx->Location = System::Drawing::Point(1119, 634);
			this->checkHatx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkHatx->Name = L"checkHatx";
			this->checkHatx->Size = System::Drawing::Size(18, 17);
			this->checkHatx->TabIndex = 151;
			this->checkHatx->UseVisualStyleBackColor = true;
			// 
			// checkDauHopx
			// 
			this->checkDauHopx->AutoSize = true;
			this->checkDauHopx->Location = System::Drawing::Point(973, 634);
			this->checkDauHopx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkDauHopx->Name = L"checkDauHopx";
			this->checkDauHopx->Size = System::Drawing::Size(18, 17);
			this->checkDauHopx->TabIndex = 150;
			this->checkDauHopx->UseVisualStyleBackColor = true;
			// 
			// checkTraiCayx
			// 
			this->checkTraiCayx->AutoSize = true;
			this->checkTraiCayx->Location = System::Drawing::Point(1268, 535);
			this->checkTraiCayx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkTraiCayx->Name = L"checkTraiCayx";
			this->checkTraiCayx->Size = System::Drawing::Size(18, 17);
			this->checkTraiCayx->TabIndex = 149;
			this->checkTraiCayx->UseVisualStyleBackColor = true;
			// 
			// checkGiamx
			// 
			this->checkGiamx->AutoSize = true;
			this->checkGiamx->Location = System::Drawing::Point(1119, 535);
			this->checkGiamx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkGiamx->Name = L"checkGiamx";
			this->checkGiamx->Size = System::Drawing::Size(18, 17);
			this->checkGiamx->TabIndex = 148;
			this->checkGiamx->UseVisualStyleBackColor = true;
			// 
			// checkDauAnx
			// 
			this->checkDauAnx->AutoSize = true;
			this->checkDauAnx->Location = System::Drawing::Point(973, 535);
			this->checkDauAnx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkDauAnx->Name = L"checkDauAnx";
			this->checkDauAnx->Size = System::Drawing::Size(18, 17);
			this->checkDauAnx->TabIndex = 147;
			this->checkDauAnx->UseVisualStyleBackColor = true;
			// 
			// checkTuongCax
			// 
			this->checkTuongCax->AutoSize = true;
			this->checkTuongCax->Location = System::Drawing::Point(1268, 437);
			this->checkTuongCax->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkTuongCax->Name = L"checkTuongCax";
			this->checkTuongCax->Size = System::Drawing::Size(18, 17);
			this->checkTuongCax->TabIndex = 146;
			this->checkTuongCax->UseVisualStyleBackColor = true;
			// 
			// checkThitHopx
			// 
			this->checkThitHopx->AutoSize = true;
			this->checkThitHopx->Location = System::Drawing::Point(1119, 437);
			this->checkThitHopx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkThitHopx->Name = L"checkThitHopx";
			this->checkThitHopx->Size = System::Drawing::Size(18, 17);
			this->checkThitHopx->TabIndex = 145;
			this->checkThitHopx->UseVisualStyleBackColor = true;
			// 
			// checkCaHopx
			// 
			this->checkCaHopx->AutoSize = true;
			this->checkCaHopx->Location = System::Drawing::Point(973, 437);
			this->checkCaHopx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkCaHopx->Name = L"checkCaHopx";
			this->checkCaHopx->Size = System::Drawing::Size(18, 17);
			this->checkCaHopx->TabIndex = 144;
			this->checkCaHopx->UseVisualStyleBackColor = true;
			// 
			// checkSuax
			// 
			this->checkSuax->AutoSize = true;
			this->checkSuax->Location = System::Drawing::Point(1268, 336);
			this->checkSuax->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkSuax->Name = L"checkSuax";
			this->checkSuax->Size = System::Drawing::Size(18, 17);
			this->checkSuax->TabIndex = 143;
			this->checkSuax->UseVisualStyleBackColor = true;
			// 
			// checkBanhQuyx
			// 
			this->checkBanhQuyx->AutoSize = true;
			this->checkBanhQuyx->Location = System::Drawing::Point(1119, 336);
			this->checkBanhQuyx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBanhQuyx->Name = L"checkBanhQuyx";
			this->checkBanhQuyx->Size = System::Drawing::Size(18, 17);
			this->checkBanhQuyx->TabIndex = 142;
			this->checkBanhQuyx->UseVisualStyleBackColor = true;
			// 
			// checkBanhMix
			// 
			this->checkBanhMix->AutoSize = true;
			this->checkBanhMix->Location = System::Drawing::Point(973, 336);
			this->checkBanhMix->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBanhMix->Name = L"checkBanhMix";
			this->checkBanhMix->Size = System::Drawing::Size(18, 17);
			this->checkBanhMix->TabIndex = 141;
			this->checkBanhMix->UseVisualStyleBackColor = true;
			// 
			// checkThitXongKhoix
			// 
			this->checkThitXongKhoix->AutoSize = true;
			this->checkThitXongKhoix->Location = System::Drawing::Point(676, 634);
			this->checkThitXongKhoix->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkThitXongKhoix->Name = L"checkThitXongKhoix";
			this->checkThitXongKhoix->Size = System::Drawing::Size(18, 17);
			this->checkThitXongKhoix->TabIndex = 140;
			this->checkThitXongKhoix->UseVisualStyleBackColor = true;
			// 
			// checkPhoMaix
			// 
			this->checkPhoMaix->AutoSize = true;
			this->checkPhoMaix->Location = System::Drawing::Point(527, 634);
			this->checkPhoMaix->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkPhoMaix->Name = L"checkPhoMaix";
			this->checkPhoMaix->Size = System::Drawing::Size(18, 17);
			this->checkPhoMaix->TabIndex = 139;
			this->checkPhoMaix->UseVisualStyleBackColor = true;
			// 
			// checkTrungx
			// 
			this->checkTrungx->AutoSize = true;
			this->checkTrungx->Location = System::Drawing::Point(381, 634);
			this->checkTrungx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkTrungx->Name = L"checkTrungx";
			this->checkTrungx->Size = System::Drawing::Size(18, 17);
			this->checkTrungx->TabIndex = 138;
			this->checkTrungx->UseVisualStyleBackColor = true;
			// 
			// checkSox
			// 
			this->checkSox->AutoSize = true;
			this->checkSox->Location = System::Drawing::Point(232, 634);
			this->checkSox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkSox->Name = L"checkSox";
			this->checkSox->Size = System::Drawing::Size(18, 17);
			this->checkSox->TabIndex = 137;
			this->checkSox->UseVisualStyleBackColor = true;
			// 
			// checkRaux
			// 
			this->checkRaux->AutoSize = true;
			this->checkRaux->Location = System::Drawing::Point(676, 535);
			this->checkRaux->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkRaux->Name = L"checkRaux";
			this->checkRaux->Size = System::Drawing::Size(18, 17);
			this->checkRaux->TabIndex = 136;
			this->checkRaux->UseVisualStyleBackColor = true;
			// 
			// checkNamx
			// 
			this->checkNamx->AutoSize = true;
			this->checkNamx->Location = System::Drawing::Point(527, 535);
			this->checkNamx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkNamx->Name = L"checkNamx";
			this->checkNamx->Size = System::Drawing::Size(18, 17);
			this->checkNamx->TabIndex = 135;
			this->checkNamx->UseVisualStyleBackColor = true;
			// 
			// checkChanhx
			// 
			this->checkChanhx->AutoSize = true;
			this->checkChanhx->Location = System::Drawing::Point(381, 535);
			this->checkChanhx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkChanhx->Name = L"checkChanhx";
			this->checkChanhx->Size = System::Drawing::Size(18, 17);
			this->checkChanhx->TabIndex = 134;
			this->checkChanhx->UseVisualStyleBackColor = true;
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(232, 535);
			this->checkBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(18, 17);
			this->checkBox->TabIndex = 133;
			this->checkBox->UseVisualStyleBackColor = true;
			// 
			// checkDuaLeox
			// 
			this->checkDuaLeox->AutoSize = true;
			this->checkDuaLeox->Location = System::Drawing::Point(676, 437);
			this->checkDuaLeox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkDuaLeox->Name = L"checkDuaLeox";
			this->checkDuaLeox->Size = System::Drawing::Size(18, 17);
			this->checkDuaLeox->TabIndex = 132;
			this->checkDuaLeox->UseVisualStyleBackColor = true;
			// 
			// checkOtChuongx
			// 
			this->checkOtChuongx->AutoSize = true;
			this->checkOtChuongx->Location = System::Drawing::Point(527, 437);
			this->checkOtChuongx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkOtChuongx->Name = L"checkOtChuongx";
			this->checkOtChuongx->Size = System::Drawing::Size(18, 17);
			this->checkOtChuongx->TabIndex = 131;
			this->checkOtChuongx->UseVisualStyleBackColor = true;
			// 
			// checkCaRotx
			// 
			this->checkCaRotx->AutoSize = true;
			this->checkCaRotx->Location = System::Drawing::Point(381, 437);
			this->checkCaRotx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkCaRotx->Name = L"checkCaRotx";
			this->checkCaRotx->Size = System::Drawing::Size(18, 17);
			this->checkCaRotx->TabIndex = 130;
			this->checkCaRotx->UseVisualStyleBackColor = true;
			// 
			// checkCaChuax
			// 
			this->checkCaChuax->AutoSize = true;
			this->checkCaChuax->Location = System::Drawing::Point(232, 437);
			this->checkCaChuax->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkCaChuax->Name = L"checkCaChuax";
			this->checkCaChuax->Size = System::Drawing::Size(18, 17);
			this->checkCaChuax->TabIndex = 129;
			this->checkCaChuax->UseVisualStyleBackColor = true;
			// 
			// checkThitBox
			// 
			this->checkThitBox->AutoSize = true;
			this->checkThitBox->Location = System::Drawing::Point(676, 336);
			this->checkThitBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkThitBox->Name = L"checkThitBox";
			this->checkThitBox->Size = System::Drawing::Size(18, 17);
			this->checkThitBox->TabIndex = 128;
			this->checkThitBox->UseVisualStyleBackColor = true;
			// 
			// checkCax
			// 
			this->checkCax->AutoSize = true;
			this->checkCax->Location = System::Drawing::Point(527, 336);
			this->checkCax->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkCax->Name = L"checkCax";
			this->checkCax->Size = System::Drawing::Size(18, 17);
			this->checkCax->TabIndex = 127;
			this->checkCax->UseVisualStyleBackColor = true;
			// 
			// checkTomx
			// 
			this->checkTomx->AutoSize = true;
			this->checkTomx->Location = System::Drawing::Point(381, 336);
			this->checkTomx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkTomx->Name = L"checkTomx";
			this->checkTomx->Size = System::Drawing::Size(18, 17);
			this->checkTomx->TabIndex = 126;
			this->checkTomx->UseVisualStyleBackColor = true;
			// 
			// checkHeox
			// 
			this->checkHeox->AutoSize = true;
			this->checkHeox->Location = System::Drawing::Point(232, 336);
			this->checkHeox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkHeox->Name = L"checkHeox";
			this->checkHeox->Size = System::Drawing::Size(18, 17);
			this->checkHeox->TabIndex = 125;
			this->checkHeox->UseVisualStyleBackColor = true;
			// 
			// labelHeo
			// 
			this->labelHeo->AutoSize = true;
			this->labelHeo->BackColor = System::Drawing::Color::Yellow;
			this->labelHeo->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelHeo->Location = System::Drawing::Point(139, 293);
			this->labelHeo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelHeo->Name = L"labelHeo";
			this->labelHeo->Size = System::Drawing::Size(40, 24);
			this->labelHeo->TabIndex = 153;
			this->labelHeo->Text = L"     ";
			// 
			// labelTom
			// 
			this->labelTom->AutoSize = true;
			this->labelTom->BackColor = System::Drawing::Color::Yellow;
			this->labelTom->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelTom->Location = System::Drawing::Point(285, 293);
			this->labelTom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTom->Name = L"labelTom";
			this->labelTom->Size = System::Drawing::Size(40, 24);
			this->labelTom->TabIndex = 154;
			this->labelTom->Text = L"     ";
			// 
			// labelCa
			// 
			this->labelCa->AutoSize = true;
			this->labelCa->BackColor = System::Drawing::Color::Yellow;
			this->labelCa->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelCa->Location = System::Drawing::Point(433, 293);
			this->labelCa->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCa->Name = L"labelCa";
			this->labelCa->Size = System::Drawing::Size(40, 24);
			this->labelCa->TabIndex = 155;
			this->labelCa->Text = L"     ";
			// 
			// labelThitBo
			// 
			this->labelThitBo->AutoSize = true;
			this->labelThitBo->BackColor = System::Drawing::Color::Yellow;
			this->labelThitBo->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelThitBo->Location = System::Drawing::Point(580, 293);
			this->labelThitBo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelThitBo->Name = L"labelThitBo";
			this->labelThitBo->Size = System::Drawing::Size(40, 24);
			this->labelThitBo->TabIndex = 156;
			this->labelThitBo->Text = L"     ";
			// 
			// labelDuaLeo
			// 
			this->labelDuaLeo->AutoSize = true;
			this->labelDuaLeo->BackColor = System::Drawing::Color::Yellow;
			this->labelDuaLeo->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelDuaLeo->Location = System::Drawing::Point(580, 394);
			this->labelDuaLeo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDuaLeo->Name = L"labelDuaLeo";
			this->labelDuaLeo->Size = System::Drawing::Size(40, 24);
			this->labelDuaLeo->TabIndex = 160;
			this->labelDuaLeo->Text = L"     ";
			// 
			// labelOtChuong
			// 
			this->labelOtChuong->AutoSize = true;
			this->labelOtChuong->BackColor = System::Drawing::Color::Yellow;
			this->labelOtChuong->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelOtChuong->Location = System::Drawing::Point(433, 394);
			this->labelOtChuong->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelOtChuong->Name = L"labelOtChuong";
			this->labelOtChuong->Size = System::Drawing::Size(40, 24);
			this->labelOtChuong->TabIndex = 159;
			this->labelOtChuong->Text = L"     ";
			// 
			// labelCaRot
			// 
			this->labelCaRot->AutoSize = true;
			this->labelCaRot->BackColor = System::Drawing::Color::Yellow;
			this->labelCaRot->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelCaRot->Location = System::Drawing::Point(285, 394);
			this->labelCaRot->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCaRot->Name = L"labelCaRot";
			this->labelCaRot->Size = System::Drawing::Size(40, 24);
			this->labelCaRot->TabIndex = 158;
			this->labelCaRot->Text = L"     ";
			// 
			// labelCaChua
			// 
			this->labelCaChua->AutoSize = true;
			this->labelCaChua->BackColor = System::Drawing::Color::Yellow;
			this->labelCaChua->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelCaChua->Location = System::Drawing::Point(139, 394);
			this->labelCaChua->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCaChua->Name = L"labelCaChua";
			this->labelCaChua->Size = System::Drawing::Size(40, 24);
			this->labelCaChua->TabIndex = 157;
			this->labelCaChua->Text = L"     ";
			// 
			// labelRau
			// 
			this->labelRau->AutoSize = true;
			this->labelRau->BackColor = System::Drawing::Color::Yellow;
			this->labelRau->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelRau->Location = System::Drawing::Point(580, 492);
			this->labelRau->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelRau->Name = L"labelRau";
			this->labelRau->Size = System::Drawing::Size(40, 24);
			this->labelRau->TabIndex = 164;
			this->labelRau->Text = L"     ";
			// 
			// labelNam
			// 
			this->labelNam->AutoSize = true;
			this->labelNam->BackColor = System::Drawing::Color::Yellow;
			this->labelNam->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelNam->Location = System::Drawing::Point(433, 492);
			this->labelNam->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNam->Name = L"labelNam";
			this->labelNam->Size = System::Drawing::Size(40, 24);
			this->labelNam->TabIndex = 163;
			this->labelNam->Text = L"     ";
			// 
			// labelChanh
			// 
			this->labelChanh->AutoSize = true;
			this->labelChanh->BackColor = System::Drawing::Color::Yellow;
			this->labelChanh->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelChanh->Location = System::Drawing::Point(285, 492);
			this->labelChanh->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelChanh->Name = L"labelChanh";
			this->labelChanh->Size = System::Drawing::Size(40, 24);
			this->labelChanh->TabIndex = 162;
			this->labelChanh->Text = L"     ";
			// 
			// labelBo
			// 
			this->labelBo->AutoSize = true;
			this->labelBo->BackColor = System::Drawing::Color::Yellow;
			this->labelBo->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelBo->Location = System::Drawing::Point(139, 492);
			this->labelBo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelBo->Name = L"labelBo";
			this->labelBo->Size = System::Drawing::Size(40, 24);
			this->labelBo->TabIndex = 161;
			this->labelBo->Text = L"     ";
			// 
			// labelThitXongKhoi
			// 
			this->labelThitXongKhoi->AutoSize = true;
			this->labelThitXongKhoi->BackColor = System::Drawing::Color::Yellow;
			this->labelThitXongKhoi->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelThitXongKhoi->Location = System::Drawing::Point(580, 591);
			this->labelThitXongKhoi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelThitXongKhoi->Name = L"labelThitXongKhoi";
			this->labelThitXongKhoi->Size = System::Drawing::Size(40, 24);
			this->labelThitXongKhoi->TabIndex = 168;
			this->labelThitXongKhoi->Text = L"     ";
			// 
			// labelPhoMai
			// 
			this->labelPhoMai->AutoSize = true;
			this->labelPhoMai->BackColor = System::Drawing::Color::Yellow;
			this->labelPhoMai->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelPhoMai->Location = System::Drawing::Point(433, 591);
			this->labelPhoMai->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPhoMai->Name = L"labelPhoMai";
			this->labelPhoMai->Size = System::Drawing::Size(40, 24);
			this->labelPhoMai->TabIndex = 167;
			this->labelPhoMai->Text = L"     ";
			// 
			// labelTrung
			// 
			this->labelTrung->AutoSize = true;
			this->labelTrung->BackColor = System::Drawing::Color::Yellow;
			this->labelTrung->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelTrung->Location = System::Drawing::Point(285, 591);
			this->labelTrung->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTrung->Name = L"labelTrung";
			this->labelTrung->Size = System::Drawing::Size(40, 24);
			this->labelTrung->TabIndex = 166;
			this->labelTrung->Text = L"     ";
			// 
			// labelSo
			// 
			this->labelSo->AutoSize = true;
			this->labelSo->BackColor = System::Drawing::Color::Yellow;
			this->labelSo->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelSo->Location = System::Drawing::Point(139, 591);
			this->labelSo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSo->Name = L"labelSo";
			this->labelSo->Size = System::Drawing::Size(40, 24);
			this->labelSo->TabIndex = 165;
			this->labelSo->Text = L"     ";
			// 
			// labelMatOng
			// 
			this->labelMatOng->AutoSize = true;
			this->labelMatOng->BackColor = System::Drawing::Color::Yellow;
			this->labelMatOng->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelMatOng->Location = System::Drawing::Point(1169, 591);
			this->labelMatOng->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelMatOng->Name = L"labelMatOng";
			this->labelMatOng->Size = System::Drawing::Size(40, 24);
			this->labelMatOng->TabIndex = 180;
			this->labelMatOng->Text = L"     ";
			// 
			// labelHat
			// 
			this->labelHat->AutoSize = true;
			this->labelHat->BackColor = System::Drawing::Color::Yellow;
			this->labelHat->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelHat->Location = System::Drawing::Point(1021, 591);
			this->labelHat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelHat->Name = L"labelHat";
			this->labelHat->Size = System::Drawing::Size(40, 24);
			this->labelHat->TabIndex = 179;
			this->labelHat->Text = L"     ";
			// 
			// labelDauHop
			// 
			this->labelDauHop->AutoSize = true;
			this->labelDauHop->BackColor = System::Drawing::Color::Yellow;
			this->labelDauHop->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelDauHop->Location = System::Drawing::Point(872, 591);
			this->labelDauHop->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDauHop->Name = L"labelDauHop";
			this->labelDauHop->Size = System::Drawing::Size(40, 24);
			this->labelDauHop->TabIndex = 178;
			this->labelDauHop->Text = L"     ";
			// 
			// labelTraiCay
			// 
			this->labelTraiCay->AutoSize = true;
			this->labelTraiCay->BackColor = System::Drawing::Color::Yellow;
			this->labelTraiCay->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelTraiCay->Location = System::Drawing::Point(1169, 492);
			this->labelTraiCay->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTraiCay->Name = L"labelTraiCay";
			this->labelTraiCay->Size = System::Drawing::Size(40, 24);
			this->labelTraiCay->TabIndex = 177;
			this->labelTraiCay->Text = L"     ";
			// 
			// labelGiam
			// 
			this->labelGiam->AutoSize = true;
			this->labelGiam->BackColor = System::Drawing::Color::Yellow;
			this->labelGiam->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelGiam->Location = System::Drawing::Point(1021, 492);
			this->labelGiam->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelGiam->Name = L"labelGiam";
			this->labelGiam->Size = System::Drawing::Size(40, 24);
			this->labelGiam->TabIndex = 176;
			this->labelGiam->Text = L"     ";
			// 
			// labelDauAn
			// 
			this->labelDauAn->AutoSize = true;
			this->labelDauAn->BackColor = System::Drawing::Color::Yellow;
			this->labelDauAn->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelDauAn->Location = System::Drawing::Point(872, 492);
			this->labelDauAn->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDauAn->Name = L"labelDauAn";
			this->labelDauAn->Size = System::Drawing::Size(40, 24);
			this->labelDauAn->TabIndex = 175;
			this->labelDauAn->Text = L"     ";
			// 
			// labelTuongCa
			// 
			this->labelTuongCa->AutoSize = true;
			this->labelTuongCa->BackColor = System::Drawing::Color::Yellow;
			this->labelTuongCa->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelTuongCa->Location = System::Drawing::Point(1169, 394);
			this->labelTuongCa->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTuongCa->Name = L"labelTuongCa";
			this->labelTuongCa->Size = System::Drawing::Size(40, 24);
			this->labelTuongCa->TabIndex = 174;
			this->labelTuongCa->Text = L"     ";
			// 
			// labelThitHop
			// 
			this->labelThitHop->AutoSize = true;
			this->labelThitHop->BackColor = System::Drawing::Color::Yellow;
			this->labelThitHop->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelThitHop->Location = System::Drawing::Point(1021, 394);
			this->labelThitHop->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelThitHop->Name = L"labelThitHop";
			this->labelThitHop->Size = System::Drawing::Size(40, 24);
			this->labelThitHop->TabIndex = 173;
			this->labelThitHop->Text = L"     ";
			// 
			// labelCaHop
			// 
			this->labelCaHop->AutoSize = true;
			this->labelCaHop->BackColor = System::Drawing::Color::Yellow;
			this->labelCaHop->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelCaHop->Location = System::Drawing::Point(872, 394);
			this->labelCaHop->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCaHop->Name = L"labelCaHop";
			this->labelCaHop->Size = System::Drawing::Size(40, 24);
			this->labelCaHop->TabIndex = 172;
			this->labelCaHop->Text = L"     ";
			// 
			// labelSua
			// 
			this->labelSua->AutoSize = true;
			this->labelSua->BackColor = System::Drawing::Color::Yellow;
			this->labelSua->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelSua->Location = System::Drawing::Point(1169, 293);
			this->labelSua->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSua->Name = L"labelSua";
			this->labelSua->Size = System::Drawing::Size(40, 24);
			this->labelSua->TabIndex = 171;
			this->labelSua->Text = L"     ";
			// 
			// labelBanhQuy
			// 
			this->labelBanhQuy->AutoSize = true;
			this->labelBanhQuy->BackColor = System::Drawing::Color::Yellow;
			this->labelBanhQuy->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelBanhQuy->Location = System::Drawing::Point(1021, 293);
			this->labelBanhQuy->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelBanhQuy->Name = L"labelBanhQuy";
			this->labelBanhQuy->Size = System::Drawing::Size(40, 24);
			this->labelBanhQuy->TabIndex = 170;
			this->labelBanhQuy->Text = L"     ";
			// 
			// labelBanhMi
			// 
			this->labelBanhMi->AutoSize = true;
			this->labelBanhMi->BackColor = System::Drawing::Color::Yellow;
			this->labelBanhMi->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->labelBanhMi->Location = System::Drawing::Point(872, 293);
			this->labelBanhMi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelBanhMi->Name = L"labelBanhMi";
			this->labelBanhMi->Size = System::Drawing::Size(40, 24);
			this->labelBanhMi->TabIndex = 169;
			this->labelBanhMi->Text = L"     ";
			// 
			// button32
			// 
			this->button32->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button32->FlatAppearance->BorderSize = 2;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->button32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(920, 689);
			this->button32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(233, 43);
			this->button32->TabIndex = 181;
			this->button32->Text = L"Tính tổng tiền ";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Nhap::button32_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->textBox1->Location = System::Drawing::Point(548, 105);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 31);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->textBox2->Location = System::Drawing::Point(629, 105);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(65, 31);
			this->textBox2->TabIndex = 182;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::LightGray;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->textBox3->Location = System::Drawing::Point(701, 105);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(96, 31);
			this->textBox3->TabIndex = 183;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"iCiel Gotham Bold", 12));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(920, 751);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(233, 43);
			this->button2->TabIndex = 184;
			this->button2->Text = L"Hiển thị hàng tồn kho";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Nhap::button2_Click);
			// 
			// Nhap
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1461, 823);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->labelMatOng);
			this->Controls->Add(this->labelHat);
			this->Controls->Add(this->labelDauHop);
			this->Controls->Add(this->labelTraiCay);
			this->Controls->Add(this->labelGiam);
			this->Controls->Add(this->labelDauAn);
			this->Controls->Add(this->labelTuongCa);
			this->Controls->Add(this->labelThitHop);
			this->Controls->Add(this->labelCaHop);
			this->Controls->Add(this->labelSua);
			this->Controls->Add(this->labelBanhQuy);
			this->Controls->Add(this->labelBanhMi);
			this->Controls->Add(this->labelThitXongKhoi);
			this->Controls->Add(this->labelPhoMai);
			this->Controls->Add(this->labelTrung);
			this->Controls->Add(this->labelSo);
			this->Controls->Add(this->labelRau);
			this->Controls->Add(this->labelNam);
			this->Controls->Add(this->labelChanh);
			this->Controls->Add(this->labelBo);
			this->Controls->Add(this->labelDuaLeo);
			this->Controls->Add(this->labelOtChuong);
			this->Controls->Add(this->labelCaRot);
			this->Controls->Add(this->labelCaChua);
			this->Controls->Add(this->labelThitBo);
			this->Controls->Add(this->labelCa);
			this->Controls->Add(this->labelTom);
			this->Controls->Add(this->labelHeo);
			this->Controls->Add(this->checkMatOngx);
			this->Controls->Add(this->checkHatx);
			this->Controls->Add(this->checkDauHopx);
			this->Controls->Add(this->checkTraiCayx);
			this->Controls->Add(this->checkGiamx);
			this->Controls->Add(this->checkDauAnx);
			this->Controls->Add(this->checkTuongCax);
			this->Controls->Add(this->checkThitHopx);
			this->Controls->Add(this->checkCaHopx);
			this->Controls->Add(this->checkSuax);
			this->Controls->Add(this->checkBanhQuyx);
			this->Controls->Add(this->checkBanhMix);
			this->Controls->Add(this->checkThitXongKhoix);
			this->Controls->Add(this->checkPhoMaix);
			this->Controls->Add(this->checkTrungx);
			this->Controls->Add(this->checkSox);
			this->Controls->Add(this->checkRaux);
			this->Controls->Add(this->checkNamx);
			this->Controls->Add(this->checkChanhx);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->checkDuaLeox);
			this->Controls->Add(this->checkOtChuongx);
			this->Controls->Add(this->checkCaRotx);
			this->Controls->Add(this->checkCaChuax);
			this->Controls->Add(this->checkThitBox);
			this->Controls->Add(this->checkCax);
			this->Controls->Add(this->checkTomx);
			this->Controls->Add(this->checkHeox);
			this->Controls->Add(this->checkMatOng);
			this->Controls->Add(this->checkHat);
			this->Controls->Add(this->checkDauHop);
			this->Controls->Add(this->checkTraiCay);
			this->Controls->Add(this->checkGiam);
			this->Controls->Add(this->checkDauAn);
			this->Controls->Add(this->checkTuongCa);
			this->Controls->Add(this->checkThitHop);
			this->Controls->Add(this->checkCaHop);
			this->Controls->Add(this->checkSua);
			this->Controls->Add(this->checkBanhQuy);
			this->Controls->Add(this->checkBanhMi);
			this->Controls->Add(this->checkThitXongKhoi);
			this->Controls->Add(this->checkPhoMai);
			this->Controls->Add(this->checkTrung);
			this->Controls->Add(this->checkSo);
			this->Controls->Add(this->checkRau);
			this->Controls->Add(this->checkNam);
			this->Controls->Add(this->checkChanh);
			this->Controls->Add(this->checkBo);
			this->Controls->Add(this->checkDuaLeo);
			this->Controls->Add(this->checkOtChuong);
			this->Controls->Add(this->checkCaRot);
			this->Controls->Add(this->checkCaChua);
			this->Controls->Add(this->checkThitBo);
			this->Controls->Add(this->checkCa);
			this->Controls->Add(this->checkTom);
			this->Controls->Add(this->checkHeo);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->btnThitXongKhoi);
			this->Controls->Add(this->btnHat);
			this->Controls->Add(this->btnDauHop);
			this->Controls->Add(this->btnTraiCay);
			this->Controls->Add(this->btnGiam);
			this->Controls->Add(this->btnDauAn);
			this->Controls->Add(this->btnTuongCa);
			this->Controls->Add(this->btnThitHop);
			this->Controls->Add(this->btnCaHop);
			this->Controls->Add(this->btnSua);
			this->Controls->Add(this->btnBanhQuy);
			this->Controls->Add(this->btnBanhMi);
			this->Controls->Add(this->btnMatOng);
			this->Controls->Add(this->btnPhoMai);
			this->Controls->Add(this->btnTrung);
			this->Controls->Add(this->btnSo);
			this->Controls->Add(this->btnRau);
			this->Controls->Add(this->btnNam);
			this->Controls->Add(this->btnChanh);
			this->Controls->Add(this->btnBo);
			this->Controls->Add(this->btnDuaLeo);
			this->Controls->Add(this->btnOtChuong);
			this->Controls->Add(this->btnCaRot);
			this->Controls->Add(this->btnCaChua);
			this->Controls->Add(this->btnThitBo);
			this->Controls->Add(this->btnCa);
			this->Controls->Add(this->btnTom);
			this->Controls->Add(this->btnHeo);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Nhap";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Nhap::Nhap_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
	cliext::vector<HangHoaData^> danhsach;
	cliext::vector<HangHoaData^> danhsachxuat;
	cliext::vector<HangHoaData^> danhsachton;
	/*
	@Purpose: Khai bao cac vector danhsach, danhsachxuat, danhsachton de luu tru cac doi tuong hang hoa
	@ Author: lebaonhu     Modified: 27.05.2022
	*/
	ThitHeo^ tHeo = gcnew ThitHeo();
	ThitTom^ tTom = gcnew ThitTom();
	ThitCa^ tCa = gcnew ThitCa();
	ThitBo^ tBo = gcnew ThitBo();
	CaChua^ cChua = gcnew CaChua();
	CaRot^ cRot = gcnew CaRot();
	OtChuong^ oChuong = gcnew OtChuong();
	DuaLeo^ dLeo = gcnew DuaLeo();
	Bo^ bo = gcnew Bo();
	Chanh^ chanh = gcnew Chanh();
	Nam^ nam = gcnew Nam();
	Rau^ rau = gcnew Rau();
	Trung^ trung = gcnew Trung();
	PhoMai^ pMai = gcnew PhoMai();
	ThitXongKhoi^ txKhoi = gcnew ThitXongKhoi();
	BanhMi^ bMi = gcnew BanhMi();
	Sua^ sua = gcnew Sua();
	CaHop^ cHop = gcnew CaHop();
	ThitHop^ tHop = gcnew ThitHop();
	TuongCa^ tuCa = gcnew TuongCa();
	DauAn^ dAn = gcnew DauAn();
	Giam^ giam = gcnew Giam();
	TraiCay^ tCay = gcnew TraiCay();
	DauHop^ dHop = gcnew DauHop();
	Hat^ hat = gcnew Hat();
	MatOng^ mOng = gcnew MatOng();
	So^ so = gcnew So();
	BanhQuy^ bQuy = gcnew BanhQuy();
	/*
	@Purpose: Khai bao cac doi tuong hang hoa
	@ Author: lebaonhu     Modified: 27.05.2022
	*/
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
		MessageBox::Show("Xin chao. Cam on da su dung!", "Thông báo",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		/*
		@Purpose: Ham dung de dong form Nhap va in ra thong bao "Xin chao. Cam on da su dung!" khi click vao button29
		@Parameters:
		@ Return: void
		@ Author: lebaonhu     Modified: 24.05.2022
		*/
	}
	private: System::Void btnHeo_Click(System::Object^ sender, System::EventArgs^ e) {
		bool check = tHeo->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
		MessageBox::Show("Ma hang: " + Convert::ToString(tHeo->MaHang) + "\nTen hang: " + Convert::ToString(tHeo->Ten) + "\nDon gia: " + Convert::ToString(tHeo->DonGia) + "\nLoai hang: " + Convert::ToString(tHeo->LoaiHang) + "\nNgay san xuat: " + tHeo->NgaySX.inNgay() +"\nNgay het han: " + tHeo->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		/*
		@Purpose: Ham dung de in ra thong tin san pham ThitHeo khi click vao btnHeo
		@Parameters:
		@ Return: void
		@ Author: lebaonhu     Modified: 25.05.2022
		*/
	}
	private: System::Void Nhap_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkHeo->Checked == true) {
			danhsach.push_back(gcnew ThitHeo);
			labelHeo->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew ThitHeo);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkTom->Checked == true) {
			danhsach.push_back(gcnew ThitTom);
			labelTom->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew ThitTom);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkCa->Checked == true) {
			danhsach.push_back(gcnew ThitCa);
			labelCa->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew ThitCa);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkThitBo->Checked == true) {
			danhsach.push_back(gcnew ThitBo);
			labelThitBo->Text = "Kho";
			danhsachton.push_back(gcnew ThitBo);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));

			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkCaChua->Checked == true) {
			danhsach.push_back(gcnew CaChua);
			labelCaChua->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew CaChua);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkCaRot->Checked == true) {
			danhsach.push_back(gcnew CaRot);
			labelCaRot->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew CaRot);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkDuaLeo->Checked == true) {
			danhsach.push_back(gcnew DuaLeo);
			labelDuaLeo->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew DuaLeo);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkBo->Checked == true) {
			danhsach.push_back(gcnew Bo);
			labelBo->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew Bo);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkChanh->Checked == true) {
			danhsach.push_back(gcnew Chanh);
			labelChanh->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew Chanh);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkNam->Checked == true) {
			danhsach.push_back(gcnew Nam);
			labelNam->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew Nam);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkRau->Checked == true) {
			danhsach.push_back(gcnew Rau);
			labelRau->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew Rau);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkBanhMi->Checked == true) {
			danhsach.push_back(gcnew BanhMi);
			labelBanhMi->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew BanhMi);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkOtChuong->Checked == true) {
			danhsach.push_back(gcnew OtChuong);
			labelOtChuong->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew OtChuong);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkBanhQuy->Checked == true) {
			danhsach.push_back(gcnew BanhQuy);
			labelBanhQuy->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew BanhQuy);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkSua->Checked == true) {
			danhsach.push_back(gcnew Sua);
			labelSua->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew Sua);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkCaHop->Checked == true) {
			danhsach.push_back(gcnew CaHop);
			labelCaHop->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew CaHop);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkThitHop->Checked == true) {
			danhsach.push_back(gcnew ThitHop);
			labelThitHop->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew ThitHop);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkTuongCa->Checked == true) {
			danhsach.push_back(gcnew TuongCa);
			labelTuongCa->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew TuongCa);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkDauAn->Checked == true) {
			danhsach.push_back(gcnew DauAn);
			labelDauAn->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew DauAn);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkGiam->Checked == true) {
			danhsach.push_back(gcnew Giam);
			labelGiam->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew Giam);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkTraiCay->Checked == true) {
			danhsach.push_back(gcnew TraiCay);
			labelTraiCay->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew TraiCay);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkDauHop->Checked == true) {
			danhsach.push_back(gcnew DauHop);
			labelDauHop->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew DauHop);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkHat->Checked == true) {
			danhsach.push_back(gcnew Hat);
			labelHat->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew Hat);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkThitXongKhoi->Checked == true) {
			danhsach.push_back(gcnew ThitXongKhoi);
			labelThitXongKhoi->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew ThitXongKhoi);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkMatOng->Checked == true) {
			danhsach.push_back(gcnew MatOng);
			labelMatOng->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew MatOng);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkPhoMai->Checked == true) {
			danhsach.push_back(gcnew PhoMai);
			labelPhoMai->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew PhoMai);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkTrung->Checked == true) {
			danhsach.push_back(gcnew Trung);
			labelTrung->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew Trung);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
		if (checkSo->Checked == true) {
			danhsach.push_back(gcnew So);
			labelSo->Text = "Kho";
			danhsach.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			danhsachton.push_back(gcnew So);
			danhsachton.back()->NgayNhapKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
		}
	
		HienThiHangNhap^ sif = gcnew HienThiHangNhap();
		sif->danhsach = danhsach;
		sif->Show();
		/*
		@Purpose: Ham dung de 
		Truyen ngay nhap kho cho doi tuong duoc nguoi dung chon (check vao checkbox tuong ung)
		Them doi tuong do vao vector danhsach va danhsachton
		Doi label trang thai doi tuong do thanh "Kho"
		@Parameters:
		@ Return: void
		@ Author: lebaonhu     Modified: 27.05.2022
		*/
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkHeo->Visible = true;
	checkHeox->Visible = false;

	checkTom->Visible = true;
	checkTomx->Visible = false;

	checkCa->Visible = true;
	checkCax->Visible = false;

	checkThitBo->Visible = true;
	checkThitBox->Visible = false;

	checkCaChua->Visible = true;
	checkCaChuax->Visible = false;

	checkCaRot->Visible = true;
	checkCaRotx->Visible = false;


	checkDuaLeo->Visible = true;
	checkDuaLeox->Visible = false;

	checkBo->Visible = true;
	checkBox->Visible = false;

	checkChanh->Visible = true;
	checkChanhx->Visible = false;

	checkNam->Visible = true;
	checkNamx->Visible = false;

	checkRau->Visible = true;
	checkRaux->Visible = false;

	checkBanhMi->Visible = true;
	checkBanhMix->Visible = false;

	checkOtChuong->Visible = true;
	checkOtChuongx->Visible = false;

	checkBanhQuy->Visible = true;
	checkBanhQuyx->Visible = false;

	checkSua->Visible = true;
	checkSuax->Visible = false;

	checkCaHop->Visible = true;
	checkCaHopx->Visible = false;

	checkThitHop -> Visible = true;
	checkThitHopx->Visible = false;

	checkTuongCa->Visible = true;
	checkTuongCax->Visible = false;

	checkDauAn->Visible = true;
	checkDauAnx->Visible = false;

	checkGiam->Visible = true;
	checkGiamx->Visible = false;

	checkTraiCay->Visible = true;
	checkTraiCayx->Visible = false;

	checkDauHop->Visible = true;
	checkDauHopx->Visible = false;

	checkHat->Visible = true;
	checkHatx->Visible = false;

	checkThitXongKhoi->Visible = true;
	checkThitXongKhoix->Visible = false;

	checkMatOng->Visible = true;
	checkMatOngx->Visible = false;

	checkPhoMai->Visible = true;
	checkPhoMaix->Visible = false;

	checkTrung->Visible = true;
	checkTrungx->Visible = false;

	checkSo->Visible = true;
	checkSox->Visible = false;
	/*
	@Purpose: Ham dung de hien thi cac checkbox ho tro nhap va an cac checkbox ho tro xuat
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkHeo->Visible = false;
	checkHeox->Visible = true;

	checkTom->Visible = false;
	checkTomx->Visible = true;

	checkCa->Visible = false;
	checkCax->Visible = true;

	checkThitBo->Visible = false;
	checkThitBox->Visible = true;

	checkCaChua->Visible = false;
	checkCaChuax->Visible = true;

	checkCaRot->Visible = false;
	checkCaRotx->Visible = true;


	checkDuaLeo->Visible = false;
	checkDuaLeox->Visible = true;

	checkBo->Visible = false;
	checkBox->Visible = true;

	checkChanh->Visible = false;
	checkChanhx->Visible = true;

	checkNam->Visible = false;
	checkNamx->Visible = true;

	checkRau->Visible = false;
	checkRaux->Visible = true;

	checkBanhMi->Visible = false;
	checkBanhMix->Visible = true;

	checkOtChuong->Visible = false;
	checkOtChuongx->Visible = true;

	checkBanhQuy->Visible = false;
	checkBanhQuyx->Visible = true;

	checkSua->Visible = false;
	checkSuax->Visible = true;

	checkCaHop->Visible = false;
	checkCaHopx->Visible = true;

	checkThitHop->Visible = false;
	checkThitHopx->Visible = true;

	checkTuongCa->Visible = false;
	checkTuongCax->Visible = true;

	checkDauAn->Visible = false;
	checkDauAnx->Visible = true;

	checkGiam->Visible = false;
	checkGiamx->Visible = true;

	checkTraiCay->Visible = false;
	checkTraiCayx->Visible = true;

	checkDauHop->Visible = false;
	checkDauHopx->Visible = true;

	checkHat->Visible = false;
	checkHatx->Visible = true;

	checkThitXongKhoi->Visible = false;
	checkThitXongKhoix->Visible = true;

	checkMatOng->Visible = false;
	checkMatOngx->Visible = true;

	checkPhoMai->Visible = false;
	checkPhoMaix->Visible = true;

	checkTrung->Visible = false;
	checkTrungx->Visible = true;

	checkSo->Visible = false;
	checkSox->Visible = true;
	/*
	@Purpose: Ham dung de an cac checkbox ho tro nhap va hien thi cac checkbox ho tro xuat
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (checkHeox->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Thit Heo") {
				danhsachxuat.push_back(danhsach[i]);
				labelHeo->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Thit Heo") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkTomx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Thit Tom") {
				danhsachxuat.push_back(danhsach[i]);
				labelTom->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Thit Tom") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkCax->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Thit Ca") {
				danhsachxuat.push_back(danhsach[i]);
				labelCa->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Thit Ca") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkThitBox->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Thit Bo") {
				danhsachxuat.push_back(danhsach[i]);
				labelThitBo->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Thit Bo") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkCaChuax->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Ca Chua") {
				danhsachxuat.push_back(danhsach[i]);
				labelCaChua->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Ca Chua") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkCaRotx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Ca Rot") {
				danhsachxuat.push_back(danhsach[i]);
				labelCaRot->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Ca Rot") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkDuaLeox->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Dua Leo") {
				danhsachxuat.push_back(danhsach[i]);
				labelDuaLeo->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Dua Leo") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkBox->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Bo") {
				danhsachxuat.push_back(danhsach[i]);
				labelBo->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Bo") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkChanhx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Chanh") {
				danhsachxuat.push_back(danhsach[i]);
				labelChanh->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Chanh") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkNamx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Nam") {
				danhsachxuat.push_back(danhsach[i]);
				labelNam->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Nam") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkRaux->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Rau") {
				danhsachxuat.push_back(danhsach[i]);
				labelRau->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Rau") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkBanhMix->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Banh Mi") {
				danhsachxuat.push_back(danhsach[i]);
				labelBanhMi->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Banh Mi") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkOtChuongx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Ot Chuong") {
				danhsachxuat.push_back(danhsach[i]);
				labelOtChuong->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Ot Chuong") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkBanhQuyx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Banh Quy") {
				danhsachxuat.push_back(danhsach[i]);
				labelBanhQuy->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Banh Quy") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkSuax->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Sua") {
				danhsachxuat.push_back(danhsach[i]);
				labelSua->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Sua") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkCaHopx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Ca Hop") {
				danhsachxuat.push_back(danhsach[i]);
				labelCaHop->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Ca Hop") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkThitHopx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Thit Hop") {
				danhsachxuat.push_back(danhsach[i]);
				labelThitHop->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Thit Hop") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkTuongCax->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Tuong Ca") {
				danhsachxuat.push_back(danhsach[i]);
				labelTuongCa->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Tuong Ca") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkDauAnx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Dau An") {
				danhsachxuat.push_back(danhsach[i]);
				labelDauAn->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Dau An") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkGiamx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Giam") {
				danhsachxuat.push_back(danhsach[i]);
				labelGiam->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Giam") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkTraiCayx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Trai Cay") {
				danhsachxuat.push_back(danhsach[i]);
				labelTraiCay->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Trai Cay") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkDauHopx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Dau Hop") {
				danhsachxuat.push_back(danhsach[i]);
				labelDauHop->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Dau Hop") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}

	}
	if (checkHatx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Hat") {
				danhsachxuat.push_back(danhsach[i]);
				labelHat->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Hat") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkThitXongKhoix->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Thit Xong Khoi") {
				danhsachxuat.push_back(danhsach[i]);
				labelThitXongKhoi->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Thit Xong Khoi") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkMatOngx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Mat Ong") {
				danhsachxuat.push_back(danhsach[i]);
				labelMatOng->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Mat Ong") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkPhoMaix->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Pho Mai") {
				danhsachxuat.push_back(danhsach[i]);
				labelPhoMai->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Pho Mai") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkTrungx->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "Trung") {
				danhsachxuat.push_back(danhsach[i]);
				labelTrung->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "Trung") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}
	if (checkSox->Checked == true) {
		for (auto i = 0; i != danhsach.size(); i++) {
			if (danhsach[i]->Ten == "So") {
				danhsachxuat.push_back(danhsach[i]);
				labelSo->Text = "     ";
				danhsachxuat.back()->NgayXuatKho.setNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
			}
		}
		for (auto i = 0; i != danhsachton.size(); i++) {
			if (danhsachton[i]->Ten == "So") {
				danhsachton.erase(danhsachton.begin() + i);
			}
		}
	}

	HienThiHangXuat^ sif = gcnew HienThiHangXuat();
	sif->danhsach = danhsachxuat;
	sif->Show();

	/*
	@Purpose: Ham dung de
	Truyen ngay xuat kho cho doi tuong duoc nguoi dung chon (check vao checkbox tuong ung)
	Them doi tuong do vao vector danhsachxuat
	Xoa doi tuong do khoi vector danhsachton
	Doi label trang thai doi tuong do thanh "    "
	@Parameters:
	@ Return: void
	@ Author: lebaonhu     Modified: 27.05.2022
	*/
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	checkHeo->Checked = false;
	checkTom->Checked = false;
	checkCa->Checked = false;
	checkThitBo->Checked = false;
	checkCaChua->Checked = false;
	checkCaRot->Checked = false;
	checkDuaLeo->Checked = false;
	checkBo->Checked = false;
	checkChanh->Checked = false;
	checkNam->Checked = false;
	checkRau->Checked = false;
	checkBanhMi->Checked = false;
	checkOtChuong->Checked = false;
	checkBanhQuy->Checked = false;
	checkSua->Checked = false;
	checkCaHop->Checked = false;
	checkThitHop->Checked = false;
	checkTuongCa->Checked = false;
	checkDauAn->Checked = false;
	checkGiam->Checked = false;
	checkTraiCay->Checked = false;
	checkDauHop->Checked = false;
	checkHat->Checked = false;
	checkThitXongKhoi->Checked = false;
	checkMatOng->Checked = false;
	checkPhoMai->Checked = false;
	checkTrung->Checked = false;
	checkSo->Checked = false;

	checkHeox->Checked = false;
	checkTomx->Checked = false;
	checkCax->Checked = false;
	checkThitBox->Checked = false;
	checkCaChuax->Checked = false;
	checkCaRotx->Checked = false;
	checkDuaLeox->Checked = false;
	checkBox->Checked = false;
	checkChanhx->Checked = false;
	checkNamx->Checked = false;
	checkRaux->Checked = false;
	checkBanhMix->Checked = false;
	checkOtChuongx->Checked = false;
	checkBanhQuyx->Checked = false;
	checkSuax->Checked = false;
	checkCaHopx->Checked = false;
	checkThitHopx->Checked = false;
	checkTuongCax->Checked = false;
	checkDauAnx->Checked = false;
	checkGiamx->Checked = false;
	checkTraiCayx->Checked = false;
	checkDauHopx->Checked = false;
	checkHatx->Checked = false;
	checkThitXongKhoix->Checked = false;
	checkMatOngx->Checked = false;
	checkPhoMaix->Checked = false;
	checkTrungx->Checked = false;
	checkSox->Checked = false;
	textBox1->ResetText();
	textBox2->ResetText();
	textBox3->ResetText();
	/*
	@Purpose: Ham dung de reset cac checkbox va textbox ngay thao cac
	@Parameters:
	@ Return: void
	@ Author: lebaonhu     Modified: 27.05.2022
	*/
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	TinhTong^ sif = gcnew TinhTong();
	sif->danhsach = danhsachxuat;
	sif->Show();
	/*
	@Purpose: Ham dung de hien thi form TinhTong khi click vao button32
	@Parameters:
	@ Return: void
	@ Author: lebaonhu     Modified: 27.05.2022
	*/
}
private: System::Void btnTom_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = tTom -> NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(tTom->MaHang) + "\nTen hang: " + Convert::ToString(tTom->Ten) + "\nDon gia: " + Convert::ToString(tTom->DonGia) + "\nLoai hang: " + Convert::ToString(tTom->LoaiHang) + "\nNgay san xuat: " + tTom->NgaySX.inNgay() + "\nNgay het han: " + tTom->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham ThitTom khi click vao btnTom
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnCa_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = tCa->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(tCa->MaHang) + "\nTen hang: " + Convert::ToString(tCa->Ten) + "\nDon gia: " + Convert::ToString(tCa->DonGia) + "\nLoai hang: " + Convert::ToString(tCa->LoaiHang) + "\nNgay san xuat: " + tCa->NgaySX.inNgay() + "\nNgay het han: " + tCa->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham ThitCa khi click vao btnCa
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnThitBo_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = tBo->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(tBo->MaHang) + "\nTen hang: " + Convert::ToString(tBo->Ten) + "\nDon gia: " + Convert::ToString(tBo->DonGia) + "\nLoai hang: " + Convert::ToString(tBo->LoaiHang) + "\nNgay san xuat: " + tBo->NgaySX.inNgay() + "\nNgay het han: " + tBo->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham ThitBo khi click vao btnThitBo
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnCaChua_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = -cChua->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(cChua->MaHang) + "\nTen hang: " + Convert::ToString(cChua->Ten) + "\nDon gia: " + Convert::ToString(cChua->DonGia) + "\nLoai hang: " + Convert::ToString(cChua->LoaiHang) + "\nNgay san xuat: " + cChua->NgaySX.inNgay() + "\nNgay het han: " + cChua->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham CaChua khi click vao btnCaChua
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnCaRot_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = cRot->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(cRot->MaHang) + "\nTen hang: " + Convert::ToString(cRot->Ten) + "\nDon gia: " + Convert::ToString(cRot->DonGia) + "\nLoai hang: " + Convert::ToString(cRot->LoaiHang) + "\nNgay san xuat: " + cRot->NgaySX.inNgay() + "\nNgay het han: " + cRot->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham CaRot khi click vao btnCaRot
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnOtChuong_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = oChuong->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(oChuong->MaHang) + "\nTen hang: " + Convert::ToString(oChuong->Ten) + "\nDon gia: " + Convert::ToString(oChuong->DonGia) + "\nLoai hang: " + Convert::ToString(oChuong->LoaiHang) + "\nNgay san xuat: " + oChuong->NgaySX.inNgay() + "\nNgay het han: " + oChuong->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham OtChuong khi click vao btnOtChuong
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnDuaLeo_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = dLeo->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(dLeo->MaHang) + "\nTen hang: " + Convert::ToString(dLeo->Ten) + "\nDon gia: " + Convert::ToString(dLeo->DonGia) + "\nLoai hang: " + Convert::ToString(dLeo->LoaiHang) + "\nNgay san xuat: " + dLeo->NgaySX.inNgay() + "\nNgay het han: " + dLeo->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham DuaLeo khi click vao btnDuaLeo
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnBo_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = bo->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(bo->MaHang) + "\nTen hang: " + Convert::ToString(bo->Ten) + "\nDon gia: " + Convert::ToString(bo->DonGia) + "\nLoai hang: " + Convert::ToString(bo->LoaiHang) + "\nNgay san xuat: " + bo->NgaySX.inNgay() + "\nNgay het han: " + bo->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham Bo khi click vao btnBo
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnChanh_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = chanh->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(chanh->MaHang) + "\nTen hang: " + Convert::ToString(chanh->Ten) + "\nDon gia: " + Convert::ToString(chanh->DonGia) + "\nLoai hang: " + Convert::ToString(chanh->LoaiHang) + "\nNgay san xuat: " + chanh->NgaySX.inNgay() + "\nNgay het han: " + chanh->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham Chanh khi click vao btnChanh
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnNam_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = nam->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(nam->MaHang) + "\nTen hang: " + Convert::ToString(nam->Ten) + "\nDon gia: " + Convert::ToString(nam->DonGia) + "\nLoai hang: " + Convert::ToString(nam->LoaiHang) + "\nNgay san xuat: " + nam->NgaySX.inNgay() + "\nNgay het han: " + nam->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham Nam khi click vao btnNam
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnRau_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = rau->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(rau->MaHang) + "\nTen hang: " + Convert::ToString(rau->Ten) + "\nDon gia: " + Convert::ToString(rau->DonGia) + "\nLoai hang: " + Convert::ToString(rau->LoaiHang) + "\nNgay san xuat: " + rau->NgaySX.inNgay() + "\nNgay het han: " + rau->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham Rau khi click vao btnRau
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnSo_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = so->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(so->MaHang) + "\nTen hang: " + Convert::ToString(so->Ten) + "\nDon gia: " + Convert::ToString(so->DonGia) + "\nLoai hang: " + Convert::ToString(so->LoaiHang) + "\nNgay san xuat: " + so->NgaySX.inNgay() + "\nNgay het han: " + so->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham So khi click vao btnSo
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnTrung_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = trung->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(trung->MaHang) + "\nTen hang: " + Convert::ToString(trung->Ten) + "\nDon gia: " + Convert::ToString(trung->DonGia) + "\nLoai hang: " + Convert::ToString(trung->LoaiHang) + "\nNgay san xuat: " + trung->NgaySX.inNgay() + "\nNgay het han: " + trung->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham Trung khi click vao btnTrung
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnPhoMai_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = pMai->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(pMai->MaHang) + "\nTen hang: " + Convert::ToString(pMai->Ten) + "\nDon gia: " + Convert::ToString(pMai->DonGia) + "\nLoai hang: " + Convert::ToString(pMai->LoaiHang) + "\nNgay san xuat: " + pMai->NgaySX.inNgay() + "\nNgay het han: " + pMai->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham PhoMai khi click vao btnPhoMai
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnThitXongKhoi_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = txKhoi->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(txKhoi->MaHang) + "\nTen hang: " + Convert::ToString(txKhoi->Ten) + "\nDon gia: " + Convert::ToString(txKhoi->DonGia) + "\nLoai hang: " + Convert::ToString(txKhoi->LoaiHang) + "\nNgay san xuat: " + txKhoi->NgaySX.inNgay() + "\nNgay het han: " + txKhoi->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham ThitXongKhoi khi click vao btnThitXongKhoi
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnBanhMi_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = bMi->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(bMi->MaHang) + "\nTen hang: " + Convert::ToString(bMi->Ten) + "\nDon gia: " + Convert::ToString(bMi->DonGia) + "\nLoai hang: " + Convert::ToString(bMi->LoaiHang) + "\nNgay san xuat: " + bMi->NgaySX.inNgay() + "\nNgay het han: " + bMi->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham BanhMi khi click vao btnBanhMi
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnBanhQuy_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = bQuy->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(bQuy->MaHang) + "\nTen hang: " + Convert::ToString(bQuy->Ten) + "\nDon gia: " + Convert::ToString(bQuy->DonGia) + "\nLoai hang: " + Convert::ToString(bQuy->LoaiHang) + "\nNgay san xuat: " + bQuy->NgaySX.inNgay() + "\nNgay het han: " + bQuy->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham BanhQuy khi click vao btnBanhQuy
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnSua_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = sua->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(sua->MaHang) + "\nTen hang: " + Convert::ToString(sua->Ten) + "\nDon gia: " + Convert::ToString(sua->DonGia) + "\nLoai hang: " + Convert::ToString(sua->LoaiHang) + "\nNgay san xuat: " + sua->NgaySX.inNgay() + "\nNgay het han: " + sua->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham Sua khi click vao btnSua
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnCaHop_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = cHop->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(cHop->MaHang) + "\nTen hang: " + Convert::ToString(cHop->Ten) + "\nDon gia: " + Convert::ToString(cHop->DonGia) + "\nLoai hang: " + Convert::ToString(cHop->LoaiHang) + "\nNgay san xuat: " + cHop->NgaySX.inNgay() + "\nNgay het han: " + cHop->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham CaHop khi click vao btnCaHop
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnThitHop_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = tHop->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(tHop->MaHang) + "\nTen hang: " + Convert::ToString(tHop->Ten) + "\nDon gia: " + Convert::ToString(tHop->DonGia) + "\nLoai hang: " + Convert::ToString(tHop->LoaiHang) + "\nNgay san xuat: " + tHop->NgaySX.inNgay() + "\nNgay het han: " + tHop->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham ThitHop khi click vao btnThitHop
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnTuongCa_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = tuCa->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(tuCa->MaHang) + "\nTen hang: " + Convert::ToString(tuCa->Ten) + "\nDon gia: " + Convert::ToString(tuCa->DonGia) + "\nLoai hang: " + Convert::ToString(tuCa->LoaiHang) + "\nNgay san xuat: " + tuCa->NgaySX.inNgay() + "\nNgay het han: " + tuCa->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham TuongCa khi click vao btnTuongCa
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnDauAn_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = dAn->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(dAn->MaHang) + "\nTen hang: " + Convert::ToString(dAn->Ten) + "\nDon gia: " + Convert::ToString(dAn->DonGia) + "\nLoai hang: " + Convert::ToString(dAn->LoaiHang) + "\nNgay san xuat: " + dAn->NgaySX.inNgay() + "\nNgay het han: " + dAn->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham DauAn khi click vao btnDauAn
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnGiam_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = giam->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(giam->MaHang) + "\nTen hang: " + Convert::ToString(giam->Ten) + "\nDon gia: " + Convert::ToString(giam->DonGia) + "\nLoai hang: " + Convert::ToString(giam->LoaiHang) + "\nNgay san xuat: " + giam->NgaySX.inNgay() + "\nNgay het han: " + giam->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham Giam khi click vao btnGiam
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnTraiCay_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = tCay->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(tCay->MaHang) + "\nTen hang: " + Convert::ToString(tCay->Ten) + "\nDon gia: " + Convert::ToString(tCay->DonGia) + "\nLoai hang: " + Convert::ToString(tCay->LoaiHang) + "\nNgay san xuat: " + tCay->NgaySX.inNgay() + "\nNgay het han: " + tCay->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham TraiCay khi click vao btnTraiCay
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnDauHop_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = dHop->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(dHop->MaHang) + "\nTen hang: " + Convert::ToString(dHop->Ten) + "\nDon gia: " + Convert::ToString(dHop->DonGia) + "\nLoai hang: " + Convert::ToString(dHop->LoaiHang) + "\nNgay san xuat: " + dHop->NgaySX.inNgay() + "\nNgay het han: " + dHop->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham DauHop khi click vao btnDauHop
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnHat_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = hat->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(hat->MaHang) + "\nTen hang: " + Convert::ToString(hat->Ten) + "\nDon gia: " + Convert::ToString(hat->DonGia) + "\nLoai hang: " + Convert::ToString(hat->LoaiHang) + "\nNgay san xuat: " + hat->NgaySX.inNgay() + "\nNgay het han: " + hat->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham Hat khi click vao btnHat
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void btnMatOng_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = mOng->NgayHetHan.KiemTraNgay(Convert::ToDouble(textBox1->Text), Convert::ToDouble(textBox2->Text), Convert::ToDouble(textBox3->Text));
	String^ res = check == 1 ? "Con han su dung" : "Het han su dung";
	MessageBox::Show("Ma hang: " + Convert::ToString(mOng->MaHang) + "\nTen hang: " + Convert::ToString(mOng->Ten) + "\nDon gia: " + Convert::ToString(mOng->DonGia) + "\nLoai hang: " + Convert::ToString(mOng->LoaiHang) + "\nNgay san xuat: " + mOng->NgaySX.inNgay() + "\nNgay het han: " + mOng->NgayHetHan.inNgay() + "\nTinh trang: " + res, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	/*
	@Purpose: Ham dung de in ra thong tin san pham MatOng khi click vao btnMatOng
	@Parameters:
	@ Return: void
	@ Author: huynhngocynhi     Modified: 27.05.2022
	*/
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	HienThiHangTon^ sif = gcnew HienThiHangTon();
	sif->danhsach = danhsachton;
	sif->Show();
}
};
}
