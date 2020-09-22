#include<bits\stdc++.h>
using namespace std;
#define PI 3.14
int main(){
    float x;
    cout << "Nhap x = ";
    cin >> x;
    float f = (pow(x, 2) + exp(fabs(x)) + pow(sin(x * PI / 180), 2)) / pow((pow(x, 2) + 1), (1.0 / 5));
    cout << "F(" << x << ") = " << f;
    return 0;
}