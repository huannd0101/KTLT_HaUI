/*Bài 4.4.B. Một ma trận a(n×m) gồm toàn các số nguyên thuộc [0, 255]. Phép “làm phẳng” ma trận a sẽ biến đổi các giá trị a[i][j]; theo đó, giá trị a[i][j] (với i thuộc [1, n-2] và j thuộc [1, m-2]) được tính lại bằng trung bình cộng của các phần tử trên, dưới, trái, phải của nó: a[i][j] = (a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1])/4;  i  [1, n-2], j  [1, m-2]
- Hãy “làm phẳng” ma trận a và xuất kết quả.*/
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

void LamPhang(int **a, int n, int m){
    for(int i = 1; i <= n - 2; i++)
        for(int j = 1; j <= m - 2; j++)
            a[i][j] = (a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1]) / 4; 
}

int main(){
    int n, m;
    cout << "Nhap n = ";    cin >> n;
    cout << "Nhap m = ";    cin >> m;
    int **a = new int*[n];
    for(int i = 0; i < n; i++)
        a[i] = new int[m];

    Input(a, n, m, 'a');
    cout << "Ma tran a vua nhap la: " << endl;
    Output(a, n, m);
    
    LamPhang(a, n, m);
    cout << "Ma tran sau khi lam phang la: " << endl;
    Output(a, n, m);
    return 0;
}