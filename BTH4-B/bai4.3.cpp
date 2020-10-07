/*Bài 4.3.B. Một ma trận a (nm) gồm toàn các số nguyên thuộc [0, 255]. Gọi TB là trung bình cộng của tất cả các phần tử trên a. Phép “lọc nhiễu” trên a sẽ biến đổi các giá trị a[i][j] theo công thức:*/
#include<bits\stdc++.h>
using namespace std;

void Input(int **a, int n, int m, char k){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cout << "Nhap " << k << "[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
}

void Output(int **a, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << a[i][j] << "  ";
        cout << endl;
    }
}

float TBC(int **a, int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            sum += a[i][j];
    return 1.0 * sum / (m * n);
}

void LocNhieu(int **a, int n, int m, int k){
    float tbc = TBC(a, n, m);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] > k)
                a[i][j] = tbc;
}

int main(){
    int n, m, k;
    cout << "Nhap n = ";    cin >> n;
    cout << "Nhap m = ";    cin >> m;
    int **a = new int*[n];
    for(int i = 0; i < n; i++)
        a[i] = new int[m];

    Input(a, n, m, 'a');
    cout << "Ma tran a vua nhap la: " << endl;
    Output(a, n, m);
    cout << "\nNhap k = ";  cin >> k;
    LocNhieu(a, n, m, k);
    cout << "Ma tran a sau khi loc nhieu la: " << endl;
    Output(a, n, m);
    return 0;
}