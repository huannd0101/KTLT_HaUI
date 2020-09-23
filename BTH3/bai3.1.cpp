#include<bits/stdc++.h>
using namespace std;
int gt(int n){
    if(n < 2)
        return 1;
    return n * gt(n - 1);
}
int main(){
    int n;
    cout << "Nhap n = ";    cin >> n;
    double s = 1.0 * (gt(n) + 1) / gt(n + 1);
    cout << "S = " << s;
    return 0;
}