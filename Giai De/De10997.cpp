#include<iostream>
#include<cmath>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

/*//bài 1
//a
int Factorial(int n){
    if(n == 1)
        return 1;
    return n * Factorial(n - 1);
}
//b
double P(double x, int n){
    double s = 2020 * exp(fabs(x));
    for(int i = 1; i <= n + 1; i++)
        s += pow(x, i);
    return 1.0*s/Factorial(n);
}
//c
double K(double x, int n, int m){
    return (P(x, n) + P(x, m)) / P(x, n + m);
}
//d
int main(){
    int n, m;
    double x, Q;
    cout << "Nhap n = ";    cin >> n;
    cout << "Nhap m = ";    cin >> m;
    cout << "Nhap x = ";    cin >> x;
    Q = K(x, n, m) + P(x, n) + P(x, m);
    cout << "Q = " << Q;
    return 0;
}
*/
//Bài 2
//a 
void Input(int *&a, int &n){
    cout << "Nhap n = ";
    cin >> n;
    a = new int[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}
//b: fileName = "ABC2007.TXT"
void Output(int *a, int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void WriteArrayToFile(char *fileName, int *a, int n){
    ofstream f(fileName, ios::out);
    for(int i = 0; i < n; i++)
        f << a[i] << " ";
    f.close();
}
//c: fileName = "XYZ2007.TXT" và sử dụng hàm ý b
void Sort(int *a, int n){//Thuật toán tùy chọn :v
    for(int i = 0; i < n - 1; i++)
        for(int j = n - 1; j > i; j--)
            if(a[j - 1] > a[j]){
                int tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
            }
}
//d
void SeparateTheArray(int *a, int n){
    int *arrayEven, *arrayOdd, x = 0, y = 0;
    arrayEven = new int[1];
    arrayOdd = new int[1];
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0){
            arrayEven[x++] = a[i];
            arrayEven = (int*)realloc(arrayEven, x*sizeof(int));
        }else {
            arrayOdd[y++] = a[i];
            arrayOdd = (int*)realloc(arrayOdd, y*sizeof(int));
        }
    cout << "\nMang so chan: ";
    Output(arrayEven, x);
    cout << "\nMang so le: ";
    Output(arrayOdd, y);
}
//e
bool ValidArray(int *a, int n){
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0)
            return false;
    for(int i = 0; i < n - 2; i++)
        if(a[i] == a[i + 1] == a[i + 1])
            return false;
    return true;
}

int main(){
    int n, *a;
    //a
    Input(a, n);
    //b
    cout << "Mang vua nhap: ";
    Output(a, n);
    WriteArrayToFile("ABC2017.TXT", a, n);
    //c
    Sort(a, n);
    WriteArrayToFile("XYZ2007.TXT", a, n);
    //d
    SeparateTheArray(a, n);
    //e
    if(ValidArray(a, n))
        cout << "\nMang hop le";
    else 
        cout << "\nMang khong hop le";
    return 0;
}