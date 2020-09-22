#include<bits\stdc++.h>
using namespace std;
int main(){
    float x1, y1, x2, y2, x3, y3, x, y;
    cout << "Nhap x1 = ";
    cin >> x1;
    cout << "Nhap y1 = ";
    cin >> y1;
    cout << "Nhap x2 = ";
    cin >> x2;
    cout << "Nhap y2 = ";
    cin >> y2;
    cout << "Nhap x3 = ";
    cin >> x3;
    cout << "Nhap y3 = ";
    cin >> y3;
    x = (x1 + x2 + x3) / 3;
    y = (y1 + y2 + y3) / 3;
    
    float inter = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2)) + sqrt(pow(x2 - x, 2) + pow(y2 - y, 2)) + sqrt(pow(x3 - x, 2) + pow(y3 - y, 2));
    cout << "Toa do K(" << x << ", " << y << ")" << endl;
    cout << "Do do Inter = " << inter;
    return 0;
}