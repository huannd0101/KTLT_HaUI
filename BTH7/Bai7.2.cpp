#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void CreateFile(char *fileName1, char *fileName2){
    ofstream f(fileName1, ios::out);

    f << "7 2" << endl;
    f << "1 2 3 1" << endl;
    f << "2 2 4 1" << endl;
    f << "3 3 5 1" << endl;
    f.close();

    f.open(fileName2, ios::out);
    f << "4 1 1 2" << endl;
    f << "5 2 2 2" << endl;
    f << "6 3 3 2" << endl;
    f << "7 4 4 2" << endl;

    f.close();
}

void ReadAndWrite(char *fileName1, char *fileName2, char *fileName3){
    ifstream f(fileName1, ios::in);
    ofstream f3(fileName3, ios::out);

    char s[255];
    while(!f.eof()){
        f.getline(s, 255);
        f3 << s << endl;
    }
    f.close();
    f3.close();

    f.open(fileName2, ios::in);
    f3.open(fileName3, ios::app);
    while(!f.eof()){
        f.getline(s, 255);
        f3 << s << endl;
    }

    f.close();
    f3.close();
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
    CreateFile("File1.txt", "File2.txt");
    ReadAndWrite("File1.txt", "File2.txt", "File3.txt");
    ReadFile("File3.txt");
    return 0;
}