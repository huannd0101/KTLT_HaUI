/*Bài 6.5. Sử dụng con trỏ để nhập vào một mảng a gồm n phần tử nguyên, sao chép các phần tử lẻ của mảng đặt vào cuối mảng. In mảng kết quả ra màn hình. Yêu cầu cấp phát bộ nhớ động*/
#include<bits/stdc++.h>
using namespace std;

void Input(int *a, int n, char k){
    for(int i = 0; i < n; i++){
        cout << "Nhap " << k << "[" << i << "] = ";
        cin >> a[i];
    }
}

void Output(int *a, int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void XuLy(int *a, int &n){
    int m = n;
    for(int i = 0; i < m; i++){
        if(a[i] % 2 != 0){
            realloc(a, (n + 1) * sizeof(int));
            a[n] = a[i];
            n++;
        }
    }
}

int main(){
    int n, *a;
    cout << "Nhap n = ";    cin >> n;
    a = new int[n];
    Input(a, n, 'a');
    cout << "Mang vua nhap la: ";
    Output(a, n);
    XuLy(a, n);
    cout << "\nMang sau khi sap xep la: ";
    Output(a, n);
    delete[] a;
    return 0;
}