/*Bài 2.1. Viết chương trình nhập vào số tiền phải trả của khách hàng. In ra số tiền khuyến mại
với quy định: nếu số tiền phải trả thuộc [200, 300) thì khuyến mại 20%. Nếu số tiền phải trả
từ 300 trở lên thì khuyến mại 30%. Còn lại thì không khuyến mại.*/
#include<bits\stdc++.h>
using namespace std;
int main(){
    double price;
    cout << "Nhap so tien phai tra: ";  cin >> price;
    if(price >= 200 && price < 300)
        cout << "So tien khuyen mai: " << price * 0.2 << "\nSo tien phai tra la: " << price - price * 0.2;
    else if(price >= 300)
        cout << "So tien khuyen mai: " << price * 0.3 << "\nSo tien phai tra la: " << price - price * 0.3;
    else 
        cout << "Khong khuyen mai\nSo tien phai tra la: " << price;
    
    return 0;
}