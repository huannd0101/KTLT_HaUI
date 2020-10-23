// /*
// Viết chương trình sử dụng con trỏ, cấp phát bộ nhớ động để:
// - Nhập vào một mảng a gồm n phần tử thực từ bàn phím.
// - Xuất mảng a (chưa sắp và sắp tăng) vào tệp “ABS.TXT”.
// - Xuất các phẩn tử > 5 của a sang tệp ABS1.TXT và các
// phần tử còn lại của a sang ABS2.txt.
// - Đọc toàn bộ ba tệp và in ra màn hình.
// */
#include<bits\stdc++.h>
#include<fstream>
using namespace std;

void Input(float *&a, int &n){
    cout << "Nhap n = ";    cin >> n;
    a = new float[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void SapXep(float *a, int n){
    for(int i = 0; i < n - 1; i++)
        for(int j = n - 1; j > i; j--)
            if(a[j - 1] > a[j])
                swap(a[j - 1], a[j]);
}

void XuatTep(float *a, int n, char *fileName){
    ofstream f(fileName, ios::app);
    f << n << endl;
    for(int i = 0; i < n; i++)
        f << a[i] << " ";

    f << endl;
    f.close();
}

void DocTep(char *fileName){
    ifstream f(fileName, ios::in);
    char s[200];
    while(!f.eof()){
        f.getline(s, 200);
        cout << s << endl;
    }
    cout << endl;
    f.close();
}

void TachFile(float *a, int n, char *fileName1, char *fileName2){
    ofstream f1(fileName1, ios::out);
    ofstream f2(fileName2, ios::out);
    for(int i = 0; i < n; i++)
        if(a[i] > 5)
            f1 << a[i] << " ";
        else  
            f2 << a[i] << " ";
    f1.close();
    f2.close();
}

int main(){
    float *a; 
    int n;
    Input(a, n);
    XuatTep(a, n, "ABS.TXT");
    SapXep(a, n);
    XuatTep(a, n, "ABS.TXT");
    TachFile(a, n, "ABS1.TXT", "ABS2.TXT");
    DocTep("ABS.TXT");
    DocTep("ABS1.TXT");
    DocTep("ABS2.TXT");
    return 0;
}