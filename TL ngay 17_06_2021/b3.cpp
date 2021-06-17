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
			if(a[i] < a[j] && a[i] % 2 == 0 && a[j] % 2 == 0){
				int tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}

int tong(int *a, int n){
	int sl = 0, tong = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			tong += a[i];
			sl++;
		}	
	}
	if(sl == 0) return 0;
	return tong * 1.0 / sl;
}

void chen(int *a, int &n, int x, int vt){
	for(int i = n ; i >= vt ; i--){
		a[i] = a[i-1];
	}
	a[vt] = x;
	n++;
}

void chenNhoHon5(int *a, int &n){
	int x;
	cout << "nhap x: ";
	cin >> x;
	
	for(int i = 0 ; i < n; i++){
		if(a[i] < 5){
			chen(a,n,x,i);
			i++;
		}
	}
}
int main(){
	int n;
	do{
		cout << "nhap n: ";
		cin >> n;
		
	}while(n < 0);
	
	int *a = new int [100];
	nhap(a,n);
	sapxep(a,n);
	chenNhoHon5(a,n);
	xuat(a,n);
	cout << "\ntong = " << tong(a,n);
	return 0;
}
