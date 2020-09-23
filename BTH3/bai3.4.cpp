/*Bài 3.4. Viết hàm có giá trị trả về để giải phương trình bậc hai. Trong chương trình chính, nhập vào 3 số a,b,c và sử dụng hàm trên để giải phương trình ax2+bx+c=0.*/
#include<bits\stdc++.h>
using namespace std;
void Nhap(float &a, float &b, float &c){
    cout << "Nhap a = ";    cin >> a;
    cout << "Nhap b = ";    cin >> b;
    cout << "Nhap c = ";    cin >> c;
}
int PTB2(float a, float b, float c, float &x1, float &x2){
    if(a == 0){
        if(b == 0)
            return 3;
        x1 = x2 = -1.0 * c / b;
        return 2;
    }
    float del = b * b - 4 * a * c;
    if(del < 0)
        return -1;
    if(del == 0){
        x1 = x2 = -b / (2.0 * a);
        return 0;
    }else {
        x1 = (-b - sqrt(del)) / (2 * a);
        x2 = (-b + sqrt(del)) / (2 * a);
        return 1;
    }
}
int main(){
    float a, b, c, x1, x2;
    Nhap(a, b, c);
    if(PTB2(a, b, c, x1, x2) == 3)
        cout << "Phuong trinh vo so nghiem.";
    else if(PTB2(a, b, c, x1, x2) == 2)
        cout << "Phuong trinh bac 1\nx = " << x1;
    else if(PTB2(a, b, c, x1, x2) == 1)
        cout << "Phuong trinh co 2 nghiem phan biet: \nx1 = " << x1 << "\nx2 = " << x2;
    else if(PTB2(a, b, c, x1, x2) == 0)
        cout << "Phuong trinh co 1 nghiem kep: \nx = " << x1;
    else  
        cout << "Phuong trinh vo nghiem";
    return 0;
}