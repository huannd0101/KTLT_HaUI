/*Bài 6.1. Viết chương trình cho phép nhập vào một xâu ký tự bất kỳ. Hãy cho biết xâu vừa nhập có bao nhiêu chữ cái thường? Xóa mọi ký tự ‘a’ ra khỏi xâu vừa nhập và in kết quả ra màn hình.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    char *s = new char;
    cout << "Nhap xau: ";
    gets(s);

    int length = strlen(s);
    int  Count = 0;
    for(int i = 0; i < length; i++)
        if(s[i] >= 'a' && s[i] <= 'z')
            Count++;

    for(int i = 0; i < length; i++)
        if(s[i] == 'a'){
            for(int j = i; j < strlen(s) - 1; j++){
                s[j] = s[j + 1];
            }
            s[strlen(s) - 1] = '\0';
        }
    cout << "Do dai sau la: " << length << endl;
    cout << "Co " << Count << " ky tu in thuong.'" << endl;
    cout << "Xau sau khi xoa ky tu \'a\': " << s;
    

    return 0;
}