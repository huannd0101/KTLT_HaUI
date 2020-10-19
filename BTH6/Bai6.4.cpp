/*Bài 6.4. Cho một xâu ký tự gồm toàn các dấu mở/ đóng ngoặc ‘(‘ và ‘)’. Xâu được gọi là hợp lệ nếu các dấu mở/ đóng ngoặc được đặt phù hợp như khi nó đặt trong biểu thức toán học. Ví dụ: (( )( )) hoặc ((( )))( ) là hợp lệ, xâu )( )) hoặc ((( ))…là không hợp lệ. Hãy cho biết xâu vừa nhập có hợp lệ không?*/
#include<bits\stdc++.h>
using namespace std;

int main(){
    int mo = 0, dong = 0;
    bool check = true;
    char *s = new char;
    cout << "Nhap xau: ";   gets(s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '(')
            mo++;
        if(s[i] == ')')
            dong++;
        if(mo < dong){
            check = false;
            break;
        }
    }
    if(check)
        cout << "Xau hop le";
    else  
        cout << "Xau khong hop le";

    return 0;
}