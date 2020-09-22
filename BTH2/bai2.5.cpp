/*Bài 2.5. Viết chương trình tính và hiển thị ra màn hình tiền điện phải trả của một hộ gia đình
trong một tháng. Với số kwh điện tiêu thụ trong tháng là n được nhập vào từ bàn phím và giá
1kwh được tính như sau: 100 kwh đầu tiên: 750đ/1kwh; từ kwh thứ 101 đến kwh thứ 200:
1250đ/1kwh; từ kwh thứ 201 đến kwh thứ 300: 1750đ/1kwh; từ kwh thứ 301 trở đi:
3000đ/1kwh.*/
#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Nhap so kwh tieu thu: "; cin >> n;
    if(n < 0)
        cout << "So dien khong hop le.";
    else if(n <= 100)
        cout << "So tien phai tra cho " << n << " so dien la: " << n * 750;
    else if(n <= 200)
        cout << "So tien phai tra cho " << n << " so dien la: " << 75000 + (n - 100) * 1250;
    else if(n <= 300)
        cout << "So tien phai tra cho " << n << " so dien la: " << 75000 + 125000 + (n - 200) * 1750;
    else
        cout << "So tien phai tra cho " << n << " so dien la: " << 75000 + 125000 + 175000 + (n - 300) * 3000;
        
    return 0;
}