#pragma once
#ifndef __HEADER__H__
#define __HEADER__H__
#include<iostream>
#include<string>
#include<list>
#include<iomanip>
#include<fstream>
using namespace std;
class SINHVIEN
{
private:
	string MaKhoa;
public:
	string TenSV;
	string MaSV;
	int Nam;
	SINHVIEN() : MaKhoa("Unknow"), TenSV("Unknow"),Nam(0),MaSV("Unknow") {}
	~SINHVIEN() {}
	SINHVIEN funNhapSV();
	void funSetMaKhoa(string makhoa);
	string funGetMaKhoa();
	void funXuatSV();
	void funNhapDanhSachSinhVien(list <SINHVIEN> &SinhVien);
	void funXuatDanhSachSinhVien(list <SINHVIEN> SinhVien);
};
class KHOA
{
private:
	string TenKhoa;
	int NamThanhLap;
public:
	string MaKhoa;
	KHOA() : TenKhoa("Unknow"),NamThanhLap(0),MaKhoa("Unknow") {}
	~KHOA() {}
	KHOA funNhapKhoa();
	void funSetTenKhoa(string tenkhoa);
	void funSetNamThanhLap(int namthanhlap);
	string funGetTenKhoa();
	int funGetNamThanhLap();
	void funXuatKhoa();
	void funNhapDanhSachKhoa(list<KHOA>& Khoa);
	void funXuatDanhSachKhoa(list<KHOA> Khoa);
};
class MONHOC : public KHOA
{
private:
	string TenMonHoc;
	int TinChi;
public:
	string MaMH;
	MONHOC():TenMonHoc("Unknow"),TinChi(0),MaMH("Unknow"){}
	~MONHOC() {}
	void funSetTenMonHoc(string tenmonhoc);
	void funSetTinChi(int tinchi);
	string funGetTenMonHoc();
	int funGetTinChi();
	MONHOC funNhapMonHoc();
	void funXuatMonHoc();
	void funNhapDanhSachMonHoc(list<MONHOC> &MonHoc);
	void funXuatDanhSachMonHoc(list<MONHOC> MonHoc);
};
class DKIEN : public MONHOC
{
private:
	string MaMonHocTruoc;
public:
	DKIEN(): MaMonHocTruoc("Unknow"){}
	~DKIEN() {}
	DKIEN funNhapDKien();
	void funSetMaMonHocTruoc(string mamonhoctruoc);
	string funGetMaMonHocTruoc();
	void funXuatDKien();
	void funNhapDanhSachDkien(list<DKIEN> &Dkien);
	void funXuatDanhSachDkien(list<DKIEN> Dkien);
};
class HOCPHAN :public MONHOC
{
private:
	int HocKy;
	int Nam;
	string GiaoVien;
public:
	int MaHP;
	HOCPHAN(): HocKy(0),Nam(0),GiaoVien("Unknow"),MaHP(0){}
	~HOCPHAN(){}
	void funSetHocKy(int hocky);
	void funSetNam(int nam);
	void funSetGiaoVien(string giaovien);
	int funGetHocKy();
	int funGetNam();
	string funGetGiaoVien();
	HOCPHAN funNhapHocPhan();
	void funXuatHocPhan();
	void funNhapDanhSachHocPhan(list<HOCPHAN> &HocPhan);
	void funXuatDanhSachHocPhan(list<HOCPHAN> HocPhan);
};
class KETQUA :public SINHVIEN, HOCPHAN
{
public:
	double Diem;
	KETQUA() : Diem(0.0){}
	~KETQUA() {}
	KETQUA funNhapKetQua();
	void funXuatKetQua();
	void funNhapDanhSachKetQua(list<KETQUA>&KetQua);
	void funXuatDanhSachKetQua(list<KETQUA> KetQua);
};
void TraCuuDiem(list<KETQUA> KetQua);
void Ghifile(list<SINHVIEN> SinhVien, list<KETQUA> &KetQua,string Tenfile);
void HoanVi(KETQUA &A, KETQUA &B);
void SapXepDiem(list<KETQUA> &KetQua);
void Docfile(string Tenfile,int nam);
void Menu();
#endif
 