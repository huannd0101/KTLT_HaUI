/*Bài 6.3. Nhập một xâu ký tự có độ dài không quá 80 ký tự từ bàn phím. Nhập từ bàn phím một ký tự vào biến C và một số nguyên k (k  [1..n+1]). Hãy chèn ký tự C vào vị trí k trong xâu và in xâu kết quả ra màn hình.*/
#include<bits\stdc++.h>
using namespace std;

int main(){
    int k;
    char c;
    char *s = new char;
    cout << "Nhap xau: ";   gets(s);
    cout << "Nhap k = ";    
    do {
        cin >> k;
        if(!(k > 0 && k <= strlen(s) + 1))
            cout << "Nhap lai k = ";
    }while(!(k > 0 && k <= strlen(s) + 1));
    cout << "Nhap c = ";    cin >> c;
    cout << "Xau truoc khi chen: " << s << endl;

    for(int i = strlen(s); i >= k; i--){
        s[i] = s[i - 1];
    }
    s[k] = c;
    s[strlen(s) + 1] = '\0';

    cout << "Xau sau khi chen: " << s;
    return 0;
}