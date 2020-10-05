/*Bài thực hành 4.6 - ktlt*/
#include<bits\stdc++.h>
using namespace std;
void Nhap(int *a, int n, char c){
    for(int i = 0; i < n; i++){
        cout << "Nhap " << c << "[" << i << "] = ";
        cin >> a[i];
    }
}
void Xuat(int *a, int n){
    for(int i = 0; i < n - 1; i++)
        cout << a[i] << ", ";
    cout << a[n - 1];
}

int main(){
    int n, x[100];
    cout << "Nhap so chieu cua vector: ";    cin >> n;
    Nhap(x, n, 'X');
    cout << "X(";
    Xuat(x, n);
    cout << ")" << endl;

    float chuan1, chuan2, chuanVC, chuan0;
    chuan1 = chuan2 = chuan0 = 0;
    chuanVC = x[0];
    for(int i = 0; i < n; i++){
        chuan1 += fabs(x[i]);
        chuan2 += pow(x[i], 2);
        chuanVC = (chuanVC > x[i]) ? chuanVC : x[i];
        if(x[i] != 0)
            chuan0++;
    }
    cout << "Chuan 1: ||X|| = " << chuan1 << endl;
    chuan2 = sqrt(chuan2);
    cout << "Chuan 2: ||X|| = "  << chuan2 << endl;
    cout << "Chuan vo cung ||X|| = " << chuanVC << endl;
    cout << "Chuan 0: ||X|| = " << chuan0;
    return 0;
}