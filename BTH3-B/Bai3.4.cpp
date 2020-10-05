/*Bài 3.4.B. Viết hàm đệ quy tính số chữ số trong 1 số nguyên? (ví dụ số 1423 có 4 chữ số). Viết chương trình chính nhập vào một số nguyên n, sử dụng hàm trên để cho biết số n có bao nhiêu chữ số.*/
#include<bits\stdc++.h>
using namespace std;
int Count(int n){
    if(n == 0)
        return 0;
    return 1 + Count(n / 10);
}
int main(){
    int n;
    cout << "Nhap n = "; cin >> n;
    cout << "So chu so cua " << n << " la: " << Count(n);
    return 0;
}