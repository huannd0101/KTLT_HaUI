#include<iostream>
#include<fstream>
using namespace std;

void WriteFile(int *a, int n, char *fileName){
    ofstream f(fileName, ios::out);
    f << n << endl;
    for(int i = 0; i < n; i++)
        f << a[i] << " ";

    f << endl;
    for(int i = 0; i < n; i++){
        f << a[i] << "x" << i;
        if(i < n - 1)
            f << " + ";
    }
    f.close();
}

void ReadFile(char *fileName){
    ifstream f(fileName, ios::in);
    char s[255];
    while(!f.eof()){
        f.getline(s, 255);
        cout << s << endl;
    }
    f.close();
}

int main(){
    int *a, n;
    cout << "Nhap n = ";    cin >> n;
    a = new int[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }

    WriteFile(a, n, "DaThuc.txt");
    ReadFile("DaThuc.txt");
    return 0;
}