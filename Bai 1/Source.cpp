#include"Header.h"
void SINHVIEN::funSetMaKhoa(string makhoa)
{
	this->MaKhoa = makhoa;
}
string SINHVIEN::funGetMaKhoa()
{
	return this->MaKhoa;
}
 SINHVIEN SINHVIEN::funNhapSV()
{
	cout << "Nhap ma sinh vien: ";
	getline(cin, this->MaSV);
	cout << "Nhap ma khoa: ";
	getline(cin, this->MaKhoa);
	cout << "Nhap ho va ten sinh vien: ";
	getline(cin, this->TenSV);
	cout << "Nhap nam: ";
	do {
		cin >> this->Nam; cin.ignore(1);
		if (this->Nam <= 0) { cout << "Nam phap lon hon 1\n"; }
	} while (this->Nam <= 0);
	return *this;
}
void SINHVIEN::funXuatSV()
{
	cout << "Ma sinh vien: " << this->MaSV << endl;
	cout << "Ma khoa: " << this->MaKhoa << endl;
	cout << "Ho va ten: " << this->TenSV << endl;
	cout << "Khoa: " << this->Nam << endl;
}
void SINHVIEN::funNhapDanhSachSinhVien(list <SINHVIEN> &SinhVien)
{
	int n;
	SINHVIEN A;
	cout << "Nhap so luong sinh vien: ";
	cin >> n; cin.ignore(1);
	for (int i = 0; i < n; i++)
	{
		SinhVien.push_back(A.funNhapSV());
		cout << endl;
	}
}
void SINHVIEN::funXuatDanhSachSinhVien(list <SINHVIEN> SinhVien)
{
	for (list<SINHVIEN>::iterator i = SinhVien.begin(); i != SinhVien.end(); i++)
	{
		i->funXuatSV();
		cout << endl;
	}
}
void KHOA::funSetTenKhoa(string tenkhoa)
{
	this->TenKhoa = tenkhoa;
}
void KHOA::funSetNamThanhLap(int namthanhlap)
{
	this->NamThanhLap = namthanhlap;
}
string KHOA::funGetTenKhoa()
{
	return this->TenKhoa;
}
int KHOA::funGetNamThanhLap()
{
	return this->NamThanhLap;
}
KHOA KHOA::funNhapKhoa()
{
	cout << "Nhap ten khoa: ";
	getline(cin, this->TenKhoa);
	cout << "Nhap ma khoa: ";
	getline(cin, this->MaKhoa);
	cout << "Nham nam thanh lap: ";
	do {
		cin >> this->NamThanhLap; cin.ignore(1);
		if (this->NamThanhLap <= 0) { cout << "Nam thanh lap phai lon hon 1\n"; }
	} while (this->NamThanhLap <= 0);
	return *this;
}
void KHOA::funXuatKhoa()
{
	cout << "Ten khoa: " << this->TenKhoa << endl;
	cout << "Ma khoa: " << this->MaKhoa << endl;
	cout << "Nam thanh lap: " << this->NamThanhLap << endl;
}
void KHOA::funNhapDanhSachKhoa(list<KHOA> &Khoa)
{
	KHOA A;
	int n;
	cout << "Nhap so luong khoa: ";
	cin >> n; cin.ignore(1);
	for (int i = 0; i < n; i++)
	{
		Khoa.push_back(A.funNhapKhoa());
		cout << endl;
	}
}
void KHOA::funXuatDanhSachKhoa(list<KHOA> Khoa)
{
	for (list<KHOA> ::iterator i = Khoa.begin(); i != Khoa.end(); i++)
	{
		i->funXuatKhoa();
		cout << endl;
	}
}
void MONHOC::funSetTenMonHoc(string tenmonhoc)
{
	this->TenMonHoc = tenmonhoc;
}
void MONHOC::funSetTinChi(int tinchi)
{
	this->TinChi = tinchi;
}
string MONHOC::funGetTenMonHoc()
{
	return this->TenMonHoc;
}
int MONHOC::funGetTinChi()
{
	return this->TinChi;
}
MONHOC MONHOC::funNhapMonHoc()
{
	cout << "Nhap ma khoa: ";
	getline(cin, this->MaKhoa);
	cout << "Nhap ma mon hoc: ";
	getline(cin, this->MaMH);
	cout << "Nhap ten mon hoc: ";
	getline(cin, this->TenMonHoc);
	cout << "Nhap so tin chi: ";
	do {
		cin >> this->TinChi; cin.ignore(1);
		if (this->TinChi <= 0) { cout << "So tin chi khong the bang 0\n"; }
	} while (this ->TinChi <= 0);
	return *this;
}
void MONHOC::funXuatMonHoc()
{
	cout << "Ma khoa: " << this->MaKhoa << endl;
	cout << "Ma MH: " << this->MaMH << endl;
	cout << "Ten mon hoc: " << this->TenMonHoc << endl;
	cout << "So tin chi: " << this->TinChi << endl;
}
void MONHOC::funNhapDanhSachMonHoc(list<MONHOC> &MonHoc)
{
	MONHOC A;
	int n;
	cout << "Nhap so luong mon hoc: ";
	cin >> n; cin.ignore(1);
	for (int i = 0; i < n; i++)
	{
		MonHoc.push_back(A.funNhapMonHoc());
		cout << endl;
	}
}
void MONHOC::funXuatDanhSachMonHoc(list<MONHOC> MonHoc)
{
	for (list<MONHOC>::iterator i = MonHoc.begin(); i != MonHoc.end(); i++)
	{
		i->funXuatMonHoc();
		cout << endl;
	}
}
void DKIEN::funSetMaMonHocTruoc(string mamonhoctruoc)
{
	this->MaMonHocTruoc = mamonhoctruoc;
}
string DKIEN::funGetMaMonHocTruoc()
{
	return this->MaMonHocTruoc;
}
DKIEN DKIEN::funNhapDKien()
{
	cout << "Nhap ma mon hoc: ";
	getline(cin, this->MaMH);
	cout << "Nhap ma mon hoc truoc: ";
	getline(cin, this->MaMonHocTruoc);
	return *this;
}
void DKIEN::funXuatDKien()
{
	cout << "Ma mon hoc: " << this->MaMH << endl;
	cout << "Ma mon hoc truoc: " << this->MaMonHocTruoc << endl;
}
void DKIEN::funNhapDanhSachDkien(list<DKIEN>& Dkien)
{
	DKIEN A;
	int n;
	cout << "Nhap so luong DKien: ";
	cin >> n; cin.ignore(1);
	for (int i = 0; i < n; i++)
	{
		Dkien.push_back(A.funNhapDKien());
		cout << endl;
	}
}
void DKIEN::funXuatDanhSachDkien(list<DKIEN> Dkien)
{
	for (list<DKIEN> ::iterator i = Dkien.begin(); i != Dkien.end(); i++)
	{
		i->funXuatDKien();
		cout << endl;
	}
}
void HOCPHAN::funSetHocKy(int hocky)
{
	this->HocKy = hocky;
}
void HOCPHAN::funSetNam(int nam)
{
	this->Nam = nam;
}
void HOCPHAN::funSetGiaoVien(string giaovien)
{
	this->GiaoVien = giaovien;
}
int HOCPHAN::funGetHocKy()
{
	return this->HocKy;
}
int HOCPHAN::funGetNam()
{
	return this->Nam;
}
string HOCPHAN::funGetGiaoVien()
{
	return this->GiaoVien;
}
HOCPHAN HOCPHAN::funNhapHocPhan()
{
	cout << "Nhap ma mon hoc:  ";
	getline(cin, this->MaMH);
	cout << "Nhap ma hoc phan: ";
	cin >> this->MaHP; cin.ignore(1);
	cout << "Nhap hoc ki: ";
	do {
		cin >> this->HocKy; cin.ignore(1);
		if (this->HocKy < 0) { cout << "Hoc ky phai lon hon 0"; }
	} while (this->HocKy < 0);
	cout << "Nhap nam: ";
	do {
		cin >> this->Nam; cin.ignore(1);
		if (this->Nam <= 0) { cout << "Nam phap lon hon 1\n"; }
	} while (this->Nam <= 0);
	cout << "Nhap ten Giao Vien: ";
	getline(cin, this->GiaoVien);
	return *this;
}
void HOCPHAN::funXuatHocPhan()
{
	cout << "Ma MH: " << this->MaMH << endl;
	cout << "Ma HP: " << this -> MaHP << endl;
	cout << "Hoc Ky: " << this->HocKy << endl;
	cout << "Nam: " << this->Nam << endl;
	cout << "Ten Giao Vien: " << this->GiaoVien << endl;
}
void HOCPHAN::funNhapDanhSachHocPhan(list<HOCPHAN>&HocPhan)
{
	HOCPHAN A;
	int n;
	cout << "Nhap so luong hoc phan: ";
	cin >> n; cin.ignore(1);
	for (int i = 0; i < n; i++)
	{
		HocPhan.push_back(A.funNhapHocPhan());
		cout << endl;
	}
}
void HOCPHAN::funXuatDanhSachHocPhan(list<HOCPHAN>HocPhan)
{
	for (list<HOCPHAN>::iterator i = HocPhan.begin(); i != HocPhan.end(); i++)
	{
		i->funXuatHocPhan();
		cout << endl;
	}
}
KETQUA KETQUA::funNhapKetQua()
{
	cout << "Nhap ma sinh vien: ";
	getline(cin, this-> MaSV);
	cout << "Nhap ma HP: ";
	cin >> this->MaHP; cin.ignore(1);
	do {
		cout << "Nhap diem: ";
		cin >> this->Diem; cin.ignore(1);
		if (this->Diem < 0 || this->Diem >10) { cout << "Diem khong the be hon 0 hoac lon hon 10\n"; }
	} while (this->Diem < 0 || this->Diem >10);
	return *this;
}
void KETQUA::funXuatKetQua()
{
	cout << "Ma SV: " << this->MaSV<<endl;
	cout << "Ma HP: " <<this->MaHP <<endl;
	cout << "Diem: " << this->Diem << endl;
}
void KETQUA::funNhapDanhSachKetQua(list<KETQUA>&KetQua)
{
	KETQUA A;
	int n;
	cout << "Nhap so luong ket qua: ";
	cin >> n; cin.ignore(1);
	for (int i = 0; i < n; i++)
	{
		KetQua.push_back(A.funNhapKetQua());
		cout << endl;
	}
}
void KETQUA::funXuatDanhSachKetQua(list<KETQUA> KetQua)
{
	for (list<KETQUA> ::iterator i = KetQua.begin(); i != KetQua.end(); i++)
	{
		i->funXuatKetQua();
		cout << endl;
	}
}
void TraCuuDiem(list<KETQUA> KetQua)         
{
	string MASV;
	int f = 0;
	cout << "Nhap ma sinh vien can tra cuu: ";
	getline(cin, MASV);
	for (list<KETQUA> ::iterator i = KetQua.begin(); i != KetQua.end(); i++)
	{
		if (i->MaSV == MASV)
		{
			i->funXuatKetQua();
			f++;
		}
	}
	if (f == 0) cout << "Khong tim thay sinh vien\n";
}         
void HoanVi(KETQUA &A, KETQUA &B)
{
	KETQUA temp = A;
	A = B;
	B = temp;
}     // hoan vi diem
void SapXepDiem(list<KETQUA> &KetQua) // Sap xep giam dan
{
	for (list<KETQUA> ::iterator i = KetQua.begin(); i != KetQua.end(); i++)
	{
		for (list<KETQUA>::iterator j = KetQua.begin(); j != KetQua.end(); j++)
		{
			if (i->Diem > j->Diem)
			{
				HoanVi(*i, *j);
			}
		}
	}
}
void Ghifile(list<SINHVIEN> SinhVien, list<KETQUA> &KetQua, string Tenfile)
{
	SapXepDiem(KetQua);
	fstream fileout;
	fileout.open(Tenfile, ios::out);
	if (fileout.fail())
	{
		cout << "Khong mo duoc tep\n";
	}
	else
	{
		
		for (list<KETQUA>::iterator j = KetQua.begin(); j != KetQua.end(); j++)
		{
			for (list<SINHVIEN> ::iterator i = SinhVien.begin(); i != SinhVien.end(); i++)
			{
				if (i->MaSV == j->MaSV)
				{
					fileout << i->MaSV << endl;
					fileout << i->TenSV << endl;
					fileout << i->Nam << endl;
					fileout << j->Diem << endl;
				}
			}
		}
	}
}
void Docfile(string Tenfile,int nam)
{
	fstream filein(Tenfile, ios::in);
	string line[3];
	int f = 0;
	char temp[255];
	if (filein.fail())
	{
		cout << "Khong tim thay file\n";
	}
	else
	{
		while (!filein.eof() && f < 10)
		{
			filein.getline(temp, 255);
			line[0] = temp;
			filein.getline(temp, 255);
			line[1] = temp;
			filein.getline(temp, 255);
			line[2] = temp;
			if (nam == atoi(temp))
			{
				f++;
				cout << "MSSV: " << line[0] << endl;
				cout << "Ho va ten: " << line[1] << endl;
				cout << "Khoa: " << line[2] << endl << endl;
			}
			filein.getline(temp, 255);
		}
		if (f == 0) { cout << "Khong co hoc sinh khoa vua nhap\n"; }
	}
	filein.close();
}
void Menu()
{
	SINHVIEN A;
	KHOA B;
	MONHOC C;
	DKIEN D;
	HOCPHAN E;
	KETQUA F;
	list<SINHVIEN> SinhVien;
	list<KHOA> Khoa;
	list<MONHOC> MonHoc;
	list<DKIEN> Dkien;
	list<HOCPHAN> HocPhan;
	list<KETQUA> KetQua;
	string Tenfile = "";
	int nam;
	int luachon;
	while (true)
	{
		system("cls");
		cout << "0.Thoat chuong trinh\n";
		cout << "1.Nhap danh sach sinh vien\n";
		cout << "2.Nhap danh sach khoa\n";
		cout << "3.Nhap danh sach mon hoc\n";
		cout << "4.Nhap danh sach dkien\n";
		cout << "5.Nhap danh sach hoc phan\n";
		cout << "6.Nhap danh sach ket qua\n";
		cout << "7.Xuat danh sach sinh vien\n";
		cout << "8.Xuat danh sach khoa\n";
		cout << "9.Xuat danh sach mon hoc\n";
		cout << "10.Xuat danh sach Dkien\n";
		cout << "11.Xuat danh sach hoc phan\n";
		cout << "12.Xuat danh sach ket qua\n";
		cout << "13.Tra cuu diem theo MSSV\n";
		cout << "14.Xuat danh sach 10 sien vien co diem cao nhat trong nam\n";
		do {
			cout << "Nhap lua chon: ";
			cin >> luachon;
			cin.ignore(1);
			if (luachon < 0 || luachon >14) { cout << "\nLua chon khong hop le vui long nhap lai\n"; }
		} while (luachon < 0 || luachon >14);
		if (luachon == 1)
		{
			system("cls");
			A.funNhapDanhSachSinhVien(SinhVien);
			system("cls");
		}
		else if (luachon == 2)
		{
			system("cls");
			B.funNhapDanhSachKhoa(Khoa);
			system("cls");
		}
		else if (luachon == 3)
		{
			system("cls");
			C.funNhapDanhSachMonHoc(MonHoc);
			system("cls");
		}
		else if (luachon == 4)
		{
			system("cls");
			D.funNhapDanhSachDkien(Dkien);
			system("cls");
		}
		else if (luachon == 5)
		{
			system("cls");
			E.funNhapDanhSachHocPhan(HocPhan);
			system("cls");
		}
		else if (luachon == 6)
		{
			system("cls");
			F.funNhapDanhSachKetQua(KetQua);
			system("cls");
		}
		else if (luachon == 7)
		{
			system("cls");
			if (SinhVien.empty() == true)
			{
				cout << "Phai nhap danh sach truoc\n";
				system("pause");
				system("cls");
			}
			else { A.funXuatDanhSachSinhVien(SinhVien);  system("pause"); }
		}
		else if (luachon == 8)
		{
			system("cls");
			if (Khoa.empty() == true)
			{
				cout << "Phai nhap danh sach truoc\n";
				system("pause");
				system("cls");
			}
			else { B.funXuatDanhSachKhoa(Khoa); system("pause"); }
		}
		else if (luachon == 9)
		{
			system("cls");
			if (MonHoc.empty() == true)
			{
				cout << "Phai nhap danh sach truoc\n";
				system("pause");
				system("cls");
			}
			else { C.funXuatDanhSachMonHoc(MonHoc); system("pause"); }
		}
		else if (luachon == 10)
		{
			system("cls");
			if (Dkien.empty() == true)
			{
				cout << "Phai nhap danh sach truoc\n";
				system("pause");
				system("cls");
			}
			else { D.funXuatDanhSachDkien(Dkien); system("pause"); }
		}
		else if (luachon == 11)
		{
			system("cls");
			if (HocPhan.empty() == true)
			{
				cout << "Phai nhap danh sach truoc\n";
				system("pause");
				system("cls");
			}
			else { E.funXuatDanhSachHocPhan(HocPhan); system("pause"); }
		}
		else if (luachon == 12)
		{
			system("cls");
			if (KetQua.empty() == true)
			{
				cout << "Phai nhap danh sach truoc\n";
				system("pause");
				system("cls");
			}
			else { F.funXuatDanhSachKetQua(KetQua); system("pause"); }
		}
		else if (luachon == 13)
		{
			system("cls");
			if (KetQua.empty())
			{
				cout << "Phai nhap danh sach truoc\n";
				system("pause");
				system("cls");
			}
			else
			{
				TraCuuDiem(KetQua);
				system("pause");
			}
		}
		else if (luachon == 14)
		{
		        system("cls");
				if (SinhVien.empty() || KetQua.empty())
				{
					cout << "Phai nhap danh sach truoc\n";
					system("pause");
					system("cls");
				}
				else
				{
					Ghifile(SinhVien, KetQua, (char*)"DanhSachDiemSinhVien.txt");
					cout << "Nhap nam can tra cuu: ";
					cin >> nam; cin.ignore(1);
					Docfile((char*)"DanhSachDiemSinhVien.txt", nam);
					system("pause");
				}
		}
		else { system("cls"); cout << "Da thoat chuong trinh\n";  break; }
	}
}