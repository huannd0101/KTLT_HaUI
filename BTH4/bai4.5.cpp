/*Bài 4.5. Một dãy số a gọi là được sắp tăng nếu a[i] <= a[i+1]; Dãy gọi là được sắp giảm nếu a[i] >= a[i+1]; Dãy gọi là được sắp tăng ngặt nếu a[i] < a[i+1]; Dãy gọi là được sắp giảm ngặt nếu a[i] > a[i+1]; (với mọi i=0..n-2).
Viết chương trình nhập một dãy n số thực, kiểm tra xem dãy đã được sắp hay chưa. Nếu đã được sắp thì sắp theo trật tự nào (tăng, tăng ngặt, giảm, giảm ngặt)?*/
#include<bits\stdc++.h>
using namespace std;
void Nhap(int *a, int n, char k){
    for(int i = 0; i < n; i++){
        cout << "Nhap " << k << "[" << i << "] = ";
        cin >> a[i];
    }
}
void Xuat(int *a, int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main(){
    int n, a[100];
    cout << "Mang vua nhap la: "; cin >> n;
    Nhap(a, n, 'a');
    
    Xuat(a, n);
    int increase, decrease, equal;
    increase = decrease = equal = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i] == a[i + 1])
            equal++;
        //tăng
        if(a[i] > a[i + 1])
            increase = 1;
        //giảm
        if(a[i] < a[i + 1])
            decrease = 1;        
    }
    if(equal == n - 1)
        cout << "Mang bang";
    else if(increase == 0 && equal != 0)
        cout << "Mang tang";
    else if(increase == 0 && equal == 0)
        cout << "Mang tang ngoat";
    else if(decrease == 0 && equal != 0)
        cout << "Mang giam";
    else if(decrease == 0 && equal == 0)
        cout << "Mang giam ngoat";
    else  
        cout << "Mang chua sap xep";

    return 0;
}