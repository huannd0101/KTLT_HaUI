#include<bits/stdc++.h>
using namespace std;
double F(double x, int n){
    return 2 * pow(x, 2) + n * x + n;
}
int main(){
    double x, y, p = 0; int n;
    cout << "Nhap so thuc x = "; cin >> x;
    cout << "Nhap so thuc y = "; cin >> y;
    cout << "Nhap so nguyen n = "; cin >> n;
    p = F(x, n) + F(y, n) - F(x + y, n);
    cout << "P = " << p;
    return 0;
}