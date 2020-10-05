#include<bits\stdc++.h>
using namespace std;
int Count(int n){
    if(n == 1 || n == 2)
        return 1;
    int tong = 0;
    for(int i = 1; i < n; i++){
        tong += Count(i) * Count(n - i);
    }
    return tong;
}

int main(){
    int n;
    cout << "Nhap n = ";    cin >> n;
    cout << "C(" << n << ") = " << Count(n);
    return 0;
}