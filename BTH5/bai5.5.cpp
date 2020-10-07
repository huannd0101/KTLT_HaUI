/*Bài 5.5. Tự xác định các hàm (với số lượng hàm nhiều nhất có thể) để nhập vào hai giá trị nguyên n, m. Tính và in ra: trung bình cộng của n và m; hiệu của n và m; tổng các số lẻ trong đoạn [n, m].*/
#include<bits\stdc++.h>
using namespace std;

void InputN(int &n){
    cout << "Nhap n = ";    cin >> n;
}

void InputM(int &m){
    cout << "Nhap m = ";    cin >> m;
}

float TBC(int n, int m){
    return (n + m) / 2.0;
}

int Hieu(int n, int m){
    return n - m;
}

int SumAllOdd(int n, int m){
    int sum = 0;
    for(int i = n; i <= m; i++){
        if(i % 2 != 0)
            sum += i;
    }
    return sum;
}

int main(){
    int n, m;
    InputN(n);
    InputM(m);
    cout << "TBC = " << TBC(n, m) << endl;
    cout << n << " - " << m << " = " << Hieu(n, m) << endl;
    cout << "Sum all odd of [" << n << ", " << m << "] = " << SumAllOdd(n, m);
    return 0;
}