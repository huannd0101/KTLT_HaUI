#include<bits\stdc++.h>
using namespace std;
void Nhap(float &n){
    cout << "Nhap so thuc: "; cin >> n;
}
float MAX(float a, float b, float c){
    float max = a;
    if(max < b) 
        max = b;
    if(max < c)
        max = c;
    return max;
}
float MIN(float a, float b, float c){
    float min = a;
    if(min > b) 
        min = b;
    if(min > c)
        min = c;
    return min;
}
int main(){
    float a, b, c, d, e;

    Nhap(a);    Nhap(b);    Nhap(c);
    
    cout << "Min(a, b, c) = " << "Min(" << a << ", " << b << ", " << c << ") = " << MIN(a, b, c) << endl;
    cout << "Max(a, b, c) = " << "Max(" << a << ", " << b << ", " << c << ") = " << MAX(a, b, c) << endl;

    Nhap(d);    Nhap(e);
    
    cout << "Min(a, b, c, d, e) = " << "Min(" << a << ", " << b << ", " << c << ", " << d << ", " << e << ") = " << MIN(MIN(a, b, c), d, e) << endl;
    cout << "Max(a, b, c, d, e) = " << "Max(" << a << ", " << b << ", " << c << ", " << d << ", " << e << ") = " << MAX(MAX(a, b, c), d, e) << endl;

    return 0;
}







