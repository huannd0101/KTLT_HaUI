/*Bài 5.2. Viết hàm tính: 
F1 = 1+2+3+4+...+n;
F2 = 1 + 2^2 + 3^3 + ... + n^n;
F3 = 1/3 + 1/5 + ... + 1/(2n+1).
Viết chương trình chính nhập vào một biến nguyên n. Tính và in ra: T = F1 + F2 + F3.*/
#include<bits\stdc++.h>
using namespace std;

int F1(int n){
    if(n == 1)
        return 1;
    return n + F1(n - 1);
}
int F2(int n){
    if(n == 1)
        return 1;
    return pow(n, n) + F2(n - 1);
}
float F3(int n){
    float sum = 0;
    for(int i = 3; i <= 2 * n + 1; i += 2)
        sum += 1.0 / i;
    return sum;
}

int main(){
    int n;
    cout << "Nhap n = ";    cin >> n;
    cout << "T = F1 + F2 + F3 = " << F1(n) + F2(n) + F3(n);
    return 0;
}