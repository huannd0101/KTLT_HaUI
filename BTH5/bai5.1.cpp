/*Bài 5.1. Viết hàm tính: Tổng các số chẵn trong đoạn [1, n]; Tổng các số chia hết 3 trong đoạn [1, n]; Số lượng các số chia hết 5 trong đoạn [1, n]. Viết hàm main, nhập vào 1 số nguyên n. sử dụng các hàm trên để tính và in ra: A, B, C. trong đó: A= tổng các số chẵn trong đoạn [1, n]; B= tổng các số chia hết 3 trong đoạn [1, 2n]; C= số các số chia hết 5 trong đoạn [1, 3n].*/
#include<bits\stdc++.h>
using namespace std;

int SumAllEven(int n){
    int sum = 0;
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0)
            sum += i; 
    }
    return sum;
}

int SumAll3(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0)
            sum += i; 
    }
    return sum;
}
int CountAll5(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(i % 5 == 0)
            count++; 
    }
    return count;
}

int main(){
    int n;
    cout << "Nhap n = ";    cin >> n;
    int A = SumAllEven(n);
    int B = SumAll3(2 * n);
    int C = CountAll5(3 * n);
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C;
    return 0;
}