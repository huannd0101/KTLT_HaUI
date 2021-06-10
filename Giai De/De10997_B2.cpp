#include <iostream>
#include <fstream> 

using namespace std;


void vietVaoFile(const char *ten, int *a, int n){
	ofstream f;
	f.open(ten, ios::out);
	for(int i = 0 ; i < n ; i++){
		f << a[i] << " "; 
	}
	f.close(); 
}

void xuat(int *a, int n){
	for(int i = 0 ; i < n ; i++){
		cout << a[i] << " ";
	}
	vietVaoFile("ABC2007.txt",a,n);
}

void sx(int *a , int n){
	int tg;
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(a[i] > a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}	
		} 
	}
	
	vietVaoFile("XYZ2007.txt",a,n);
}

void chen(int *a, int &n, int gt, int vt){
	n++;
	
	for(int i = n ; i >= vt ; i--){
		a[i] = a[i - 1];
	}
	
	a[vt] = gt;
}

void tachMang(int *a , int n){
	int ib = 0, ic = 0;
	int *b = new int [n + 1];
	int *c = new int [n + 1];
	
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			b[ib] = a[i];
			ib++;
		}
		else{
			c[ic] = a[i];
			ic++;
		}
	}
	
	xuat(b,ib);
	cout << endl;
	xuat(c,ic);
}

void kiemtra(int *a, int n){
	for(int i = 0 ; i < n - 2; i++){
		if(a[i] % 2 != 0 || a[i] == a[i+1] == a[i+2]){
			cout << "khum hop le";
			return;
		}
	}
	cout << "hop le";
}
void nhap(int *a, int n){
	for(int i = 0 ; i < n ; i++){
		cout << "nhap a[" << i << "] = ";
		cin >> a[i];
	}	
}


int main(){
	int n;
	cout << "nhap n: ";
	cin >> n;
	int *a = new int [n + 1];
	nhap(a,n);
	xuat(a,n);
	cout << endl;
	kiemtra(a,n);
//	cout << endl;
//	tachMang(a,n);
//	sx(a,n);
	return 0;
}
