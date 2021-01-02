#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

void Input(int *a, int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void Output(int *a, int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void SortIncrease(int *a, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){//giảm dần thì đổi lại dấu
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

//ghi mảng vào file
void WriteArrayToFile(char *fileName, int *a, int n){
    ofstream f(fileName, ios::out);//khai báo đối tượng file
    f << n << endl;//ghi số lượng phần tử vào file
    for(int i = 0; i < n; i++)
        f << a[i] << " ";
    f.close();//đóng file
}

//đọc mảng từ file ra
void ReadArrayFromFile(char *fileName, int *a, int n){
    ifstream f(fileName, ios::in);
    char s[255];
    f.getline(s, 255);
    cout << s << endl;
    while(!f.eof()){
        f.getline(s, 255);
        cout << s;
    }
    f.close();
}
//tìm max, min
int FindMax(int *a, int n){
    int max = a[0];
    for(int i = 1; i < n; i++)
        if(max < a[i])
            max = a[i];
    return max;
}

//tổng số nguyên tố
int SumAllPrime(int *a, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        int dem = 0;
        for(int j = 2; j <= sqrt(a[i]); j++)
            if(a[i] % j == 0)
                dem++;
        if(dem == 0)
            sum += a[i];
    }
    return sum;
}

//kiểm tra xem có 3 số dương gần nhau hay khong
bool Check(int *a, int n)
{
    for(int i = 0; i < n - 2; i++)
        if(a[i] > 0 && a[i + 1] > 0 && a[i + 2] > 0)
            return true;
    return false;
}

void DeleteNumber(int *a, int &n, int number)
{
    for(int i = 0; i < n; i++)
        while(a[i] > number)
        {
            for(int j = i; j < n; j++)
                a[j] = a[j + 1];
            n--;
            a = (int*)realloc(a, n * sizeof(int));
        }
}
int main(){
    int *a, n;
    cout << "Nhap n = ";
    cin >> n;
    a = new int[n];
    //nhập mảng
    Input(a, n);
    //ghi mảng vào file
    WriteArrayToFile("file.txt", a, n);
    //đọc mảng từ file
    cout << "Doc file: " << endl;
    ReadArrayFromFile("file.txt", a, n);
    //tìm max
    cout << "\nMax = " << FindMax(a, n) << endl;
    //tổng số nguyên tố trong mảng
    cout << "Tong so nguyen to trong mang " << SumAllPrime(a, n) << endl;
    //Xóa số trong mảng
    int x;
    cout << "Nhap so can xoa: ";
    cin >> x;
    DeleteNumber(a, n, x);
    //kiểm tra xem có 3 số dương gần nhau hay không
    if(Check(a, n))
        cout << "\nCo 3 so duong gan nhau trong mang";
    else
        cout << "\nKhong co 3 so duong gan nhau trong mang";
    return 0;
}