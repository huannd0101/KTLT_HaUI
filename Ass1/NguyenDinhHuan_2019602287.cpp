#include<iostream>
#include<cmath>
using namespace std;

void InputX(float &x, char k){
    cout << "Nhap " << k << " = ";  cin >> x;
}

void InputN(int &n, char k){
    cout << "Nhap " << k << " = ";  cin >> n;
}

void Increase(int &n){
    n++;
}

void Decrease(int &n){
    n--;
}

float P(float x, int n){
    float s = 0;
    s = 2018 * pow(x, n);
    for(int i = 2; i <= n; i++){
        s += 1.0 * pow(x, i) / pow(3, i - 1);
    }
    return s;
}

int SumAllEven(int n){
    int s = 0;
    for(int i = 1; i <= n; i++){
        if(i > 5 && i % 2 == 0)
            s += i;
    }
    return s;
}

int main(){
    int n, m;
    float x;
    InputN(n, 'n');
    InputN(m, 'm');
    InputX(x, 'x');
    cout << "n truoc khi tang 1 don vi: " << n << endl;
    cout << "m truoc khi tang 1 don vi: " << m << endl;
    Increase(n);
    Increase(m);
    float p = P(x, n);
    int sumEven = SumAllEven(n);
    cout << "n sau khi tang 1 don vi: " << n << endl;
    cout << "m sau khi tang 1 don vi: " << m << endl;
    cout << "P(x, n) = P(" << x << ", " << n << ") = " << p << endl;
    cout << "Tong so chan lon hon 5 va nho hon " << n << " la: " << sumEven << endl;
    return 0;
}