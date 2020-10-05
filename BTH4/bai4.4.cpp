/*Bài 4.4. Nhập một mảng a gồm n phần tử thực. hãy sắp xếp mảng a sao cho: các phần tử lớn nhất ở đầu mảng, các phần tử bé nhất ở cuối mảng, các phần tử còn lại sắp tăng dần. In mảng đã sắp ra màn hình.*/
#include<bits\stdc++.h>
using namespace std;

void sortDec(float *a, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            if(a[j - 1] < a[j])
                swap(a[j - 1], a[j]);
        }
    }
}

int main(){
    int n;
    float a[100];
    cout << "Nhap n = ";    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
    //xử lý
    sortDec(a, n);
    int left = 0, right = n - 1;
    while(a[left] == a[0]) left++;
    while(a[right] == a[n - 1]) right--;
    for(int i = left; i <= right; i++)
        for(int j = i + 1; j <= right; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);
    //xong :v
    cout << "Mang sau khi sap xep la: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}