#include "Sach.h"
#include "Sgk.h"
#include "TapChi.h"
#include "TieuThuyet.h"


int main() {
	Sach *a [100];
	int n, k, i;
	cout << "Nhap so luong sach:";
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "\nChon loai sach: " << endl;
		cout << "1.Sach giao khoa: " << endl;
		cout << "2.Tap chi: " << endl;
		cout << "3.Tieu thuyet " << endl;
		cin >> k;
		switch (k)
		{
		case 1: a[i] = new Sgk;
			a[i]->Nhap();
			break;
		case 2: a[i] = new TapChi;
			a[i]->Nhap();
			break;
		case 3: a[i] = new TieuThuyet;
			a[i]->Nhap();
			break;
		}
	}
	cout << "\nDanh sach cac loai sach da nhap la: "<<endl;
	for (i = 0; i < n; i++) {
		a[i]->Xuat();
	}
}