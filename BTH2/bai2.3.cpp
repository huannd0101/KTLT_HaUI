#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    double x;
    cout << "Nhap so thuc x = ";    cin >> x;
    cout << "Nhap so nguyen n = ";  cin >> n;
    double s = 0;
    if(n % 2 == 0){
        for(int i = 2; i <= n; i++)
            s += pow(x, i) / pow(3, i - 1);
        s += 2016 * x;
    }
    cout << "Gia tri bieu thuc la: " << s;
    return 0;
}