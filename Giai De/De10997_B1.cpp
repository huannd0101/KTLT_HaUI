#include <iostream>
#include<math.h>
using namespace std;

int giaithua(int n){
	int kq = 1;
	for(int i = 2; i <= n; i++){
		kq *= i;
	}
	return kq;
}

int giaithua1(int n){
	if(n == 1) return 1;
	return n * giaithua1(n-1);
}

double P(int n, double x){
	double kq = 2020 * exp(fabs(x));
	double tich = 1, tong = 0;
	for(int i = 1; i <= n + 1 ; i++){
		tich *= x;
		tong += tich;
	}
	return 1.0/giaithua1(n) * (kq + tong);
}

double K(int n, int m, double x){
	return (P(x,n)+ P(x,m)) / (P(x,n+m));
}
int main(){
	int n,m;
	double x;
	cout << "nhap n, m: ";
	cin >> n >> m;
	
	cout << "nhap x: ";
	cin >> x;
	
	cout << "kq = " << K(x,n,m) + P(x,n) + P(x,m);
	
	return 0;
}
