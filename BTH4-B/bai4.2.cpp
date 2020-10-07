/*Bài 4.2.B. Nhập vào một ma trận A(n  m) gồm các số thực. Gọi L là phần tử có giá trị lớn nhất trong ma trận vừa nhập, hãy tính ma trận B biết B[i, j] = L – A[i, j]  i  [1..n] và j  [1..m]. Xuất ma trận B ra màn hình.*/
#include<bits\stdc++.h>
using namespace std;

void Input(float **a, int n, int m, char k){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cout << "Nhap " << k << "[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
}

void Output(float **a, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << a[i][j] << "  ";
        cout << endl;
    }
}

float MaxOfArray(float **a, int n, int m){
    float max = a[0][0];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            max = (max > a[i][j]) ? max : a[i][j];
    return max;
}

void MaTranB(float **a, float **b, int n, int m){
    float L = MaxOfArray(a, n, m);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            b[i][j] = L - a[i][j];
}

int main(){
    int n, m;
    cout << "Nhap n = ";    cin >> n;
    cout << "Nhap m = ";    cin >> m;
    float **a = new float*[n];
    float **b = new float*[n];
    for(int i = 0; i < n; i++){
        a[i] = new float[m];
        b[i] = new float[m];
    }
  
    Input(a, n, m, 'a');
    cout << "Ma tran a vua nhap la: " << endl;
    Output(a, n, m);
    cout << "\nMa tran b la: " << endl;
    MaTranB(a, b, n, m);
    Output(b, n, m);
    return 0;
}