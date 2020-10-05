/*Bài 3.2.B. Viết hàm đệ quy tính giá trị của biểu thức: F(x, n) = xn / n!; viết chương trình chính minh họa cách sử dụng hàm trên.*/
#include<bits\stdc++.h>
using namespace std;
double F(int n, float x){
    if(n == 1)
        return x;
    return F(x, n - 1) * x / n;
}
int main(){
    int n;
    float x;
    cout << "Nhap n = "; cin >> n;
    cout << "Nhap x = "; cin >> x;
    cout << "F(" << x << ", " << n << ") = " << F(x, n);
    return 0;
}