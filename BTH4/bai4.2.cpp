/*Bài 4.2. Viết chương trình nhập vào một mảng n số nguyên, sắp xếp mảng theo chiều tăng
dần, in kết quả lên màn hình.*/
#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Nhap n = "; cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap a[" << i << "]= "; cin >> a[i];
    }

    //cách 1: InterchangeSort
    // for(int i = 0; i < n - 1; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(a[i] > a[j])
    //             swap(a[i], a[j]);
    //     }
    // }

    //cách 2: BubbleSort
    // for(int i = 0; i < n - 1; i++)
    //     for(int j = n; j > i; j--)
    //         if(a[j - 1] > a[j])
    //             swap(a[j - 1], a[j]);

    //cách 3: InsertionSort 
    // int pos = 0; //lưu vị trí chèn
    // int  x; //lưu các biến a[i] để tránh ghi đè phần tử
    // for(int i = 1; i < n; i++){
    //     x = a[i];
    //     for(pos = i; (pos > 0) && (a[pos - 1] > x); pos--)
    //         a[pos] = a[pos - 1];
    //     a[pos] = x;
    // }

    //cách 4: selectionSort
    int min_pos;
    for(int i = 0; i < n - 1; i++){
        min_pos = i;
        for(int j = i + 1; j < n; j++)
            if(a[min_pos] > a[j])
                min_pos = j;
        if(min_pos != i)
            swap(a[i], a[min_pos]);
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}