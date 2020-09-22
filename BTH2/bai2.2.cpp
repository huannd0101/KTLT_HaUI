/*Bài 2.2. Viết chương trình giải và biện luận phương trình bậc hai với các hệ số a, b, c nhập từ bàn phím.*/
#include<bits\stdc++.h>
using namespace std;
int main(){
    double a, b, c;
    cout << "Nhap a = ";    cin >> a;
    cout << "Nhap b = ";    cin >> b;
    cout << "Nhap c = ";    cin >> c;
    if(a == 0){
        if(b == 0)
            cout << "Phuong trinh vo so nghiem.";
        else
            cout << "Phuong trinh nay la phuong trinh bac nhat voi x = " << -c / b;
    }else{
        double del = pow(b, 2) - (4 * a * c);
        if(del < 0)
            cout << "Phuong trinh vo ngiem.";
        else if(del == 0)
            cout << "Phuong trinh co nghiem kep x = " << -b / (2 * a);
        else{
            cout << "Phuong trinh co 2 nghiem phan biet" << endl;
            cout << "x1 = " << (-b - sqrt(del)) / (2 * a) << endl;
            cout << "x2 = " << (-b + sqrt(del)) / (2 * a);
        }
    }
    return 0;
}