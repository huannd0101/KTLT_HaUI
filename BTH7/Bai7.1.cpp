#include<iostream>
#include<fstream>
using namespace std;

void WriteFile(char *fileName){
    ofstream f(fileName, ios::out);
    f << "Problem name: exp1" << endl;
    f << "Maximize" << endl;
    f << "Obj:            x1 + 2 x2 + 3 x3 + x4" << endl;
    f << "Subject To " << endl;
    f << "c1:     x2 - 3.5 x4 = 0" << endl;
    f << "Bounds" << endl;
    f << "0 <= x1 <= 40" << endl;
    f << "General" << endl;
    f << "      x4" << endl;
    f << "End" << endl;
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
    WriteFile("FIRSTFILE.txt");
    ReadFile("FIRSTFILE.txt");
    return 0;
}