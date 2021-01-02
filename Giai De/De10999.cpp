#include<iostream>
#include<cmath>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
/*
//bài 1
//a
void Input(int &n, int &m){
    cout << "Nhap n = ";    cin >> n;
    cout << "Nhap m = ";    cin >> m;
    if(n > m)
        n^=m^=n^=m;
    //có nhiều cách swap khác nữa
}
//b
int Sum(int n, int m){
    int s = 0;
    for(int i = n; i <= m; i++)
        if(i % 3 == 0 || i % 5 == 0)
            s += i;
    return s;
}
//c
float F(float x, int n){
    if(n < 0)
        return 1;
    else {
        float s = 2020 * fabs(n*x);
        for(int i = 1; i <= n; i++)
            s += x/(2*n - i);
        return s;
    }
}
//d
int main(){
    int n, m;
    float x;
    Input(n, m);
    cout << "Nhap x = ";    cin >> x;
    cout << "Tong cac so chia het cho cả 3 va 5 trong doan [ " << n << "," << m << "]: " << Sum(n, m) << endl;
    cout << "Tong cac so chia het cho cả 3 va 5 trong doan [1" << "," << n << "]: " << Sum(1, n) << endl;
    cout << "T = " << F(x, m) - F(x, n) << endl;
    return 0;
}
*/
//Bài 2
//a 
void Input(float *&a, int &n){
    cout << "Nhap n = ";
    cin >> n;
    a = new float[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}
//b: fileName = "ABC2007.TXT"
void Output(float *a, int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void WriteArrayToFile(char *fileName, float *a, int n){
    ofstream f(fileName, ios::app);
    for(int i = 0; i < n; i++)
        f << a[i] << " ";
    f << endl;
    f.close();
}
//c: fileName = "XYZ2007.TXT" và sử dụng hàm ý b
void Sort(float *a, int n){//Thuật toán tùy chọn :v
    for(int i = 0; i < n - 1; i++)
        for(int j = n - 1; j > i; j--)
            if(a[j - 1] > a[j]){
                int tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
            }
}
//d: 
int FindMinOffArrray(float *a, int n){
    int min = a[0];
    for(int i = 1; i < n; i++)
        if(min > a[i])
            min = a[i];
    return min;
}
int CountMinOffArray(float *a, int n){
    int count = 0, min = FindMinOffArrray(a, n);
    for(int i = 0; i < n; i++)
        if(min == a[i])
            count++;
    return count;
}
//e: 
void InsertNumberToArrray(float *&a, int &n){
    int check = 0;
    float x;
    cout << "\nNhap x = ";
    cin >> x;
    for(int i = 0; i < n; i++)
        if(x < a[i]){
            a = (float*)realloc(a, (n + 1)*sizeof(float));
            for(int j = n; j > i; j--)
                a[j] = a[j - 1];
            a[i+1] = x;
            n++;
            check = 1;
            break;
        }
    if(check == 1){
        cout << "Mang sau khi chen la: ";
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
    }else 
        cout << "Khong co phan tu lon hon x" << endl;
}

int main(){
    int n;
    float *a;
    //a
    Input(a, n);
    //b
    cout << "Mang vua nhap: ";
    Output(a, n);
    WriteArrayToFile("ABC2017.TXT", a, n);
    //c
    Sort(a, n);
    WriteArrayToFile("ABC2017.TXT", a, n);
    //d
    cout << "\nMin = " << FindMinOffArrray(a, n) << "\nSo cac phan tu min: " << CountMinOffArray(a, n) << endl;
    InsertNumberToArrray(a, n);
    return 0;
}
