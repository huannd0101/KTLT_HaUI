#include<bits/stdc++.h>
using namespace std;
void nhap(int &n){
	do{
		cout<<"Nhap n: ";
		cin>>n;
		
		if(n<=0) cout << "nhap lai di ban eiii" << endl;
	}while(n<=0);
}

int tinh_F(int n){
	int s=1;
	for(int i=1;i<=n;i++){
		s = s * (2*i-1);
	}
	return s;
}

double tinh_P(double x,int n){
	double s = fabs(x);
	for(int i = 2;i<=n;i++){
		s= s + 1.0*i / (tinh_F(i)); 
	}
	return s;
}
int main(){
	int n;
	nhap(n);
	float x;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"P="<<tinh_P(x,2*n)<<endl;
}
