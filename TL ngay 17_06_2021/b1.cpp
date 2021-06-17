#include <iostream>
#include<math.h>
using namespace std;

double Q(int n, double x){
	if(n % 2 == 0) return 1;
	
	double tong = 1;
	double tu = 1, mau = 0;
	for(int i = 1 ; i <= n ; i++){
		tu *= -x; 
		mau = i; 
		tong += tu / mau;
	}
	
	return tong;
}

double Q1(int n, double x){
	if(n % 2 == 0) return 1;
	
	double tong = 1;
	for(int i = 1 ; i <= n ; i++){
		tong += pow(-1,i) * pow(x,i) / i;
	}
	return tong;
}

double S1(int n, double x){
	double tong = 1;
	double tu = 1;
	long int mau = 1;
	for(int i = 1; i <= n; i++){
		tu *= x;
		mau *= i;
		tong += tu / mau;
	}
	return tong;
}


int main(){
	cout << S1(3,1.1) << endl;
	return 0;
}
