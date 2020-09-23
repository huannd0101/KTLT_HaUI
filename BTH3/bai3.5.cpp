/*Bài 3.5. Viết hàm có giá trị trả về để giải hệ phương trình bậc nhất với sáu đối vào là a, b, c, d, e, f và 2 đối ra là x và y. Viết chương trình chính minh họa việc sử dụng hàm trên.*/
#include<bits\stdc++.h>
using namespace std;
int HPTB1(int a, int b, int c, int d, int e, int f, float &x, float &y){
    //phương pháp Cramer
    int D = a * e  - b * d;
    if(D == 0)
        return 0;
    int Dx = c * e - b * f;
    int Dy = a * f - c * d;
    x = 1.0 * Dx / D;
    y = 1.0 * Dy / D;
    return 1;
}
int main(){
    int a, b, c, d, e, f;   float x, y;
    cout << "Nhap a = ";    cin >> a;
    cout << "Nhap b = ";    cin >> b;
    cout << "Nhap c = ";    cin >> c;
    cout << "Nhap d = ";    cin >> d;
    cout << "Nhap e = ";    cin >> e;
    cout << "Nhap f = ";    cin >> f;
    int T = HPTB1(a, b, c, d, e, f, x, y);
    if(T)
        cout << "x = " << x << "\ny = " << y;
    else
        cout << "Phuong trinh vo so nghiem.";
    return 0;
}