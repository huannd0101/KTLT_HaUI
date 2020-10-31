#include<iostream>
#include<fstream>
using namespace std;

void WriteFile(int **a, int n, int m, char *fileName){
    ofstream f(fileName, ios::out);
    f << n << " " << m << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            f << a[i][j] << " ";
        f << endl;
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
    int **a, n, m;
    cout << "Nhap n = ";    cin >> n;
    cout << "Nhap m = ";    cin >> m;
    a = new int*[n];
    for(int i = 0; i < n; i++)
        a[i] = new int[m];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cout << "Nhap a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
            
    WriteFile(a, n, m, "Matrix.txt");
    ReadFile("Matrix.txt");
    return 0;
}