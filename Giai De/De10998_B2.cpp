#include <iostream>
#include <malloc.h>
#include <fstream>
#include <math.h>

using namespace std;

void NhapMang(int *&a, int &n) {
	cout<<"Nhap so luong phan tu mang : ";
	do{
		cin>>n;
		if(n<0) {
			cout<<"Nhap lai n : ";
		}
	} while (n < 0);
	a = new int[n];
	for(int i=0; i<n; i++) {
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<endl;
}
void XuatMang(int *a, int n) {
	for(int i=0; i<n; i++) {
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}

void GhiTep(int *a, int n, const char *FileName) {
	ofstream f(FileName, ios :: out);
	for(int i=0; i<n; i++) {
		f<<a[i]<<"\t";
	}
	f<<endl;
	f.close();
}

void SapXep(int *a, int n) {
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i] > a[j]) {
				swap(a[i],a[j]);
			}
		}
	}
}

void BoSung(int *a, int n, const char *FileName) {
	ofstream f(FileName, ios :: app);
	SapXep(a,n);
	for(int i=0; i<n; i++) {
		f<<a[i]<<"\t";
	}
	f.close();
}
void Tong(int *a, int n) {
	int x,sum = 0;
	cout<<"Nhap x : ";
	cin>>x;
	for(int i=0; i<n; i++) {
		if(a[i] < abs(x)) {
			sum += a[i];
			cout<<a[i]<<"\t";
		}
	}
	cout<<"\nTong = "<<sum<<endl;
}
void Xoa1Ptu(int *&a, int &n, int vt) {
	for(int i=vt; i<n; i++) {
		a[i] = a[i+1];
	}
	n--;
	a = (int*) realloc(a,n*sizeof(int));
}
int Max(int *a, int n) {
	int max = a[0];
	for(int i=1; i<n; i++) {
		if(a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
void XoaAll(int *&a, int &n) {
	int max = Max(a,n);
	for(int i=0; i<n; i++) {
		if(a[i] == max) {
			Xoa1Ptu(a,n,i);
			i--;
		}
	}
	XuatMang(a,n);
}
int main() {
	int *a, n;
	NhapMang(a,n);
	XuatMang(a,n);
	GhiTep(a,n,"ABC2006.TXT");
	BoSung(a,n,"ABC2006.TXT");
	Tong(a,n);
	XoaAll(a,n);
	return 0;
}
