/*Bài 6.2. Nhập một xâu ký tự có độ dài không quá 50 ký tự từ bàn phím. Một xâu ký tự được gọi là hợp lệ nếu nó không chứa hai dấu cách liền nhau và có không quá 10 từ (một từ được định nghĩa là cụm ký tự liên tiếp, dài nhất không chứa dấu cách). Hãy kiểm tra xem xâu vừa nhập có hợp lệ không.*/
#include<bits\stdc++.h>
using namespace std;
int main(){
    bool check = true;
    int Count = 0;
    char *s = new char;
    cout << "Nhap xau: "; 
    gets(s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == ' ' && s[i + 1] == ' '){
            check = false;
            break;
        }
        if(s[i] == ' ')
            Count++;
    }
    if(check && Count < 10)
        cout << "Hop le.";
    else  
        cout << "Khong hop le.";

    return 0;
}