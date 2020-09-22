#include<bits\stdc++.h>
using namespace std;
int main(){
    float x1, y1, x2, y2;
    cout << "Nhap x1 = ";
    cin >> x1;
    cout << "Nhap y1 = ";
    cin >> y1;
    cout << "Nhap x2 = ";
    cin >> x2;
    cout << "Nhap y2 = ";
    cin >> y2;
    float D = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "Khoang cach Euclidean gia A va B la: " << D << endl;
    float M = fabs(x2 - x1) + fabs(y2 - y1);
    cout << "Khoang cach Manhattan giua A va B la: " << M << endl;
    float C = 1 - (x1 * x2 - y1 * y2) / (sqrt(pow(x1, 2) + pow(y1, 2)) * sqrt(pow(x2, 2) + pow(y2, 2)));
    cout << "Khoang cac Cosin giua A va B la: " << C;
    return 0;
}