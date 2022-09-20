#pragma once
#include <vector>
#include <cliext/vector>
using namespace System;
using namespace std;

public ref class ThoiGian {
public:
	Int32 Ngay, Thang, Nam;
	bool KiemTraNgay(Double d, Double m, Double y) {
		if (Nam < y) {
			return 0;
		}
		else if (Nam == y) {
			if (Thang < m) {
				return 0;
			}
			else if (Thang == m) {
				if (Ngay < d) {
					return 0;
				}
			}
		}
		return 1;
	}
	/*
	 @Purpose: Ham dung de kiem tra mot ngay voi ngay duoc truyen vao
	 @Parameters: d, m, y tuong ung voi ngay duoc truyen vao
	 @ Return: bool, tra ve 0 neu ngay dang xet be hon ngay truyen vao, tra ve 1 neu nguoc lai
	 @ Author: lebaonhu     Modified: 27.05.2022
	*/

	String^ inNgay() {
		return (Convert::ToString(Ngay) + "/" + Convert::ToString(Thang) + "/" + Convert::ToString(Nam));
	}
	/*
	 @Purpose: Ham dung de xuat ra mot ngay dang dd/mm/yyyy
	 @Parameters: 
	 @ Return: String^
	 @ Author: lebaonhu     Modified: 27.05.2022
	*/
	void setNgay(Double d, Double m, Double y) {
		Ngay = d;
		Thang = m;
		Nam = y;
	}
	/*
	 @Purpose: Ham dung de truyen gia tri cho ngay
	 @Parameters: d, m, y 
	 @ Return: void
	 @ Author: lebaonhu     Modified: 27.05.2022
	*/
	
};

public ref class HangHoaData {
public:
	String^ Ten;
	String^ MaHang;
	Int32^ DonGia;
	String^ LoaiHang;
	String^ MaLuuKho;
	ThoiGian NgaySX;
	ThoiGian NgayHetHan;
	ThoiGian NgayNhapKho;
	ThoiGian NgayXuatKho;
public:

	String^ getTen() {
		return Ten;
	}
	/*
	 @Purpose: Ham dung de lay du lieu Ten
	 @Parameters: 
	 @ Return: String^
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/

	String^ getMaHang() {
		return MaHang;
	}
	/*
	 @Purpose: Ham dung de lay du lieu Ma Hang
	 @Parameters:
	 @ Return: String^
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/

	Int32^ getDonGia() {
		return DonGia;
	};
	/*
	 @Purpose: Ham dung de lay du lieu DonGia
	 @Parameters:
	 @ Return: Int32^
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/

	String^ getLoaiHang() {
		return LoaiHang;
	};
	/*
	 @Purpose: Ham dung de lay du lieu LoaiHang
	 @Parameters:
	 @ Return: String^
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/

	String^ getMaLuuKho() {
		return MaLuuKho;
	};
	/*
	 @Purpose: Ham dung de lay du lieu MaLuuKho
	 @Parameters:
	 @ Return: String^
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class ThitHeo : public HangHoaData {
public:
	ThitHeo() {
		Ten = "Thit Heo";
		LoaiHang = "Ngan han";
		MaHang = "Pork01";
		DonGia = 63000;
		MaLuuKho = "K01PK01";
		NgaySX.Ngay = 20;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 25;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		 @Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		 @ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong ThitHeo
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class  ThitTom : public HangHoaData {
public:
	ThitTom() {
		Ten = "Thit Tom";
		LoaiHang = "Ngan han";
		MaHang = "Shrimp02";
		DonGia = 150000;
		MaLuuKho = "K01SP02";
		NgaySX.Ngay = 19;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 23;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		 @Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		 @ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong ThitTom
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class ThitCa : public HangHoaData {
public:
	ThitCa() {
		Ten = "Thit Ca";
		LoaiHang = "Ngan han";
		MaHang = "Fish03";
		DonGia = 33000;
		MaLuuKho = "K01FH03";
		NgaySX.Ngay = 16;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 20;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong ThitCa
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};
//
public ref class ThitBo : public HangHoaData {
public:
	ThitBo() {
		Ten = "Thit Bo";
		LoaiHang = "Ngan han";
		MaHang = "Beef04";
		DonGia = 200000;
		MaLuuKho = "K01BF04";
		NgaySX.Ngay = 21;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 26;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong ThitBo
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class CaChua : public HangHoaData {
public:
	CaChua() {
		Ten = "Ca Chua";
		LoaiHang = "Ngan han";
		MaHang = "Tomato05";
		DonGia = 48000;
		MaLuuKho = "K01TO05";
		NgaySX.Ngay = 19;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 22;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong CaChua
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class CaRot : public HangHoaData {
public:
	CaRot() {
		Ten = "Ca Rot";
		LoaiHang = "Ngan han";
		MaHang = "Carrot06";
		DonGia = 17000;
		MaLuuKho = "K01CT06";
		NgaySX.Ngay = 19;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 26;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong CaRot
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};
public ref class DuaLeo : public HangHoaData {
public:
	DuaLeo() {
		Ten = "Dua Leo";
		LoaiHang = "Ngan han";
		MaHang = "Ccber07";
		DonGia = 22000;
		MaLuuKho = "K01CR07";
		NgaySX.Ngay = 18;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 28;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong DuaLeo
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class Bo : public HangHoaData {
public:
	Bo() {
		Ten = "Bo";
		LoaiHang = "Ngan han";
		MaHang = "Avcdo08";
		DonGia = 35000;
		MaLuuKho = "K01AO08";
		NgaySX.Ngay = 18;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 24;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong Bo
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class Chanh : public HangHoaData {
public:
	Chanh() {
		Ten = "Chanh";
		LoaiHang = "Ngan han";
		MaHang = "Lemon09";
		DonGia = 16000;
		MaLuuKho = "K01LN09";
		NgaySX.Ngay = 17;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 29;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong Chanh
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class Nam : public HangHoaData {
public:
	Nam() {
		Ten = "Nam";
		LoaiHang = "Ngan han";
		MaHang = "Mushrm10";
		DonGia = 60000;
		MaLuuKho = "K01MM10";
		NgaySX.Ngay = 16;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 23;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong Nam
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class Rau : public HangHoaData {
public:
	Rau() {
		Ten = "Rau";
		LoaiHang = "Ngan han";
		MaHang = "Vgtble11";
		DonGia = 5000;
		MaLuuKho = "K01VE11";
		NgaySX.Ngay = 17;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 19;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong Rau
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class BanhMi : public HangHoaData {
public:
	BanhMi() {
		Ten = "Banh Mi";
		LoaiHang = "Dai han";
		MaHang = "Bread13";
		DonGia = 3000;
		MaLuuKho = "K02BD13";
		NgaySX.Ngay = 14;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 14;
		NgayHetHan.Thang = 7;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong BanhMi
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class OtChuong : public HangHoaData {
public:
	OtChuong() {
		Ten = "Ot Chuong";
		LoaiHang = "Ngan han";
		MaHang = "Pepper12";
		DonGia = 40000;
		MaLuuKho = "K01PR12";
		NgaySX.Ngay = 17;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 24;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong OtChuong
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class BanhQuy : public HangHoaData {
public:
	BanhQuy() {
		Ten = "Banh Quy";
		LoaiHang = "Dai han";
		MaHang = "Cookie14";
		DonGia = 65000;
		MaLuuKho = "K02CE14";
		NgaySX.Ngay = 15;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 16;
		NgayHetHan.Thang = 11;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong BanhQuy
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class Sua : public HangHoaData {
public:
	Sua() {
		Ten = "Sua";
		LoaiHang = "Dai han";
		MaHang = "Milk15";
		DonGia = 30000;
		MaLuuKho = "K02MK15";
		NgaySX.Ngay = 14;
		NgaySX.Thang = 3;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 14;
		NgayHetHan.Thang = 12;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong Sua
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class CaHop : public HangHoaData {
public:
	CaHop() {
		Ten = "Ca Hop";
		LoaiHang = "Dai han";
		MaHang = "Fishcan16";
		DonGia = 40000;
		MaLuuKho = "K02FN16";
		NgaySX.Ngay = 14;
		NgaySX.Thang = 4;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 14;
		NgayHetHan.Thang = 7;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong CaHop
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class ThitHop : public HangHoaData {
public:
	ThitHop() {
		Ten = "Thit Hop";
		LoaiHang = "Dai han";
		MaHang = "Meatcan17";
		DonGia = 35000;
		MaLuuKho = "K02MN17";
		NgaySX.Ngay = 13;
		NgaySX.Thang = 4;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 13;
		NgayHetHan.Thang = 7;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong ThitHop
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class TuongCa : public HangHoaData {
public:
	TuongCa() {
		Ten = "Tuong Ca";
		LoaiHang = "Dai han";
		MaHang = "Tmtsauce18";
		DonGia = 27000;
		MaLuuKho = "K02TE18";
		NgaySX.Ngay = 16;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 16;
		NgayHetHan.Thang = 12;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong TuongCa
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class DauAn : public HangHoaData {
public:
	DauAn() {
		Ten = "Dau An";
		LoaiHang = "Dai han";
		MaHang = "Oil19";
		DonGia = 60000;
		MaLuuKho = "K02OL19";
		NgaySX.Ngay = 17;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 17;
		NgayHetHan.Thang = 11;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong DauAn
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class Giam : public HangHoaData {
public:
	Giam() {
		Ten = "Giam";
		LoaiHang = "Dai han";
		MaHang = "Vinegar20";
		DonGia = 19000;
		MaLuuKho = "K02VR20";
		NgaySX.Ngay = 10;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 10;
		NgayHetHan.Thang = 11;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong Giam
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class TraiCay : public HangHoaData {
public:
	TraiCay() {
		Ten = "Trai Cay";
		LoaiHang = "Dai han";
		MaHang = "Fruit21";
		DonGia = 80000;
		MaLuuKho = "K02FT21";
		NgaySX.Ngay = 11;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 11;
		NgayHetHan.Thang = 9;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong TraiCay
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class DauHop : public HangHoaData {
public:
	DauHop() {
		Ten = "Dau Hop";
		LoaiHang = "Dai han";
		MaHang = "Strbrcan22";
		DonGia = 200000;
		MaLuuKho = "K02SN22";
		NgaySX.Ngay = 13;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 13;
		NgayHetHan.Thang = 8;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong DauHop
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class Hat : public HangHoaData {
public:
	Hat() {
		Ten = "Hat";
		LoaiHang = "Dai han";
		MaHang = "Nut23";
		DonGia = 240000;
		MaLuuKho = "K02NT23";
		NgaySX.Ngay = 13;
		NgaySX.Thang = 2;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 13;
		NgayHetHan.Thang = 9;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong Hat
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class ThitXongKhoi : public HangHoaData {
public:
	ThitXongKhoi() {
		Ten = "Bacon";
		LoaiHang = "Ngan han";
		MaHang = "Bacon24";
		DonGia = 150000;
		MaLuuKho = "K01BN24";
		NgaySX.Ngay = 13;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 16;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong ThitXongKhoi
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class MatOng : public HangHoaData {
public:
	MatOng() {
		Ten = "Mat Ong";
		LoaiHang = "Dai han";
		MaHang = "Honey25";
		DonGia = 500000;
		MaLuuKho = "K02HY25";
		NgaySX.Ngay = 21;
		NgaySX.Thang = 3;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 21;
		NgayHetHan.Thang = 3;
		NgayHetHan.Nam = 2024;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong MatOng
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class PhoMai : public HangHoaData {
public:
	PhoMai() {
		Ten = "Pho Mai";
		LoaiHang = "Ngan han";
		MaHang = "Chesse26";
		DonGia = 140000;
		MaLuuKho = "K01CE26";
		NgaySX.Ngay = 11;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 25;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong PhoMai
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class Trung : public HangHoaData {
public:
	Trung() {
		Ten = "Trung";
		LoaiHang = "Ngan han";
		MaHang = "Egg27";
		DonGia = 30000;
		MaLuuKho = "K01EG27";
		NgaySX.Ngay = 21;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 31;
		NgayHetHan.Thang = 5;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong Trung
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};

public ref class So : public HangHoaData {
public:
	So() {
		Ten = "So";
		LoaiHang = "Ngan han";
		MaHang = "Oyster28";
		DonGia = 125000;
		MaLuuKho = "K01OR28";
		NgaySX.Ngay = 20;
		NgaySX.Thang = 5;
		NgaySX.Nam = 2022;
		NgayHetHan.Ngay = 24;
		NgayHetHan.Thang = 11;
		NgayHetHan.Nam = 2022;
		/*
		@Purpose: ham khoi tao mac dinh gia tri cho doi tuong
		@ Author: huynhngocynhi     Modified: 26.05.2022
		*/
	}
	/*
	 @Purpose: class luu tru du lieu doi tuong So
	 @ Author: huynhngocynhi     Modified: 26.05.2022
	*/
};