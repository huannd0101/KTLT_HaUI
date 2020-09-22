/*Viết chương trình nhập vào một số nguyên n; tính tổng các số nguyên tố thuộc đoạn [1..n]. Cho biết có bao nhiêu số nguyên tố thuộc đoạn đó.*/
#include<bits\stdc++.h>
using namespace std;
bool check(int n){
    if(n < 2)
        return false;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}
int main(){
    int n, s = 0;
    cout << "Nhap n = ";    cin >> n;
    for(int i = 1; i <= n; i++)
        if(check(i))
            s += i;
    cout << "Tong so nguyen to trong [1..." << n << "] = " << s;
    return 0;
}