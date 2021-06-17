#include <iostream>
#include <fstream>

using namespace std;
void nhap(int *a, int n){
	for(int i = 0 ; i < n; i++){
		cout << "nhap a[" << i << "]= ";
		cin >> a[i];
	}
}

void xuat(int *a, int n){
	for(int i = 0 ; i < n; i++){
		cout << a[i] << " ";
	}
}


void sapxep(int *a, int n){
	for(int i = 0 ; i < n - 1; i++){
		for(int j = i + 1 ; j < n; j++){
			if(a[i] > a[j]){
				int tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}

int tong(int *a, int n){
	int tong = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 15 == 0)
			tong += a[i];
	}
	return tong;
}

void ghiFile(int *a, int n){
	ofstream f;
	f.open("SX.txt", ios::out);
	for(int i = 0 ; i < n; i++){
		f << a[i] << " ";
	}
	f.close();
}
int main(){
	int n;
	do{
		cout << "nhap n: ";
		cin >> n;
		
	}while(n < 0);
	int *a = new int [100];
	nhap(a,n);
	xuat(a,n);
	
	sapxep(a,n);
	cout << endl;
	xuat(a,n);
	ghiFile(a,n);
	cout << "tong chia het cho 3 va 5 la: " << tong(a,n);
	return 0;
}
