/*Bài 6.6. Sử dụng con trỏ cấp phát bộ nhớ động để nhập vào một mảng nguyên gồm n phần tử. Xóa các phần tử chẵn ra khỏi mảng a (chú ý giải phóng ô nhớ khi xóa). In mảng kết quả ra màn hình.*/
#include<bits\stdc++.h>
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
        if(a[i] % 2 == 0){
            for(int j = i; j < m - 1; j++)
                a[j] = a[j + 1];
            realloc(a, (n - 1) * sizeof(int));
            n--;
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