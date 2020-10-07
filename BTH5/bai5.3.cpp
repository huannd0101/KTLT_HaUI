/*Bài 5.3. Viết hàm trả về tổng các số chẵn trong đoạn [n, m] với n, m nguyên dương bất kỳ;
Viết hàm trả về trung bình cộng của các số chia hết 3 trong đoạn [n, m] với n, m nguyên dương bất kỳ.
Viết hàm main, nhập vào hai số nguyên n, m. Sử dụng hai hàm trên để tính và in ra: tổng các số chẵn trong đoạn [n, 2m] và trung bình cộng các số chia hết 3 trong đoạn [n, n+m].*/
#include<bits\stdc++.h>
using namespace std;

int SumAllEven(int n, int m){
    int sum = 0;
    for(int i = n; i <= m; i++)
        if(i % 2 == 0)
            sum += i;
    return sum;
}
float TBC3(int n, int m){
    int sum = 0, count = 0;
    for(int i = n; i <= m; i++)
        if(i % 3 == 0){
            count++;
            sum += i;
        }
    return 1.0 * sum / count;
}

int main(){
    int n, m;
    cout << "Nhap n = ";    cin >> n;
    cout << "Nhap m = ";    cin >> m;
    cout << "Tong cac so chan trong doan [" << n << ", " << 2*m << "] = " << SumAllEven(n, 2*m) << endl;
    cout << "Trung binh cong cac so chia het cho 3 trong doan [" << n << ", " << n + m << "] = " << TBC3(n, n + m);
    return 0;
}