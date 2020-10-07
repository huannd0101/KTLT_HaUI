/*Bài 5.4. Cho 3 điểm A(x1, y1), B(x2, y2), C(x3, y3) trong mặt phẳng tọa độ XOY. Hãy:
- Viết hàm NHAP: nhập vào một điểm X(x1, y1) bất kỳ.
- Viết hàm KCE: tính khoảng cách Euclidien giữa hai điểm A, B bất kỳ.
- Viết hàm MIND tìm điểm gần tâm O nhất trong số 3 điểm A, B, C.
- Viết hàm MAXD tìm điểm xa tâm O nhất trong số 3 điểm A, B, C.
Viết hàm main sử dụng các hàm ở trên để nhập vào ba điểm A, B, C. Cho biết điểm nào gần tâm O nhất, điểm nào xa tâm O nhất.*/
#include<bits\stdc++.h>
using namespace std;

void Input(char a, int &x, int &y){
    cout << "Nhap toa do " << a << endl;
    cout << "Nhap x = ";    cin >> x;
    cout << "Nhap y = ";    cin >> y;
}

float KCE(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float MIND(int x1, int y1, int x2, int y2, int x3, int y3){
    float a = KCE(x1, y1, 0, 0);
    float b = KCE(x2, y2, 0, 0);
    float c = KCE(x3, y3, 0, 0);
    if(a < b && a < c)
        return 1;
    else if(b < a && b < c)
        return 2;
    return 3;
}
float MAXD(int x1, int y1, int x2, int y2, int x3, int y3){
    float a = KCE(x1, y1, 0, 0);
    float b = KCE(x2, y2, 0, 0);
    float c = KCE(x3, y3, 0, 0);
    if(a > b && a > c)
        return 1;
    else if(b > a && b > c)
        return 2;
    return 3;
}

int main(){
    int x1, x2, x3, y1, y2, y3;
    Input('A', x1, y1);
    Input('B', x2, y2);
    Input('C', x3, y3);
    
    cout << "Khoang cach gia A va B la: " << KCE(x1, y1, x2, y2) << endl;

    float a = KCE(x1, y1, 0, 0);
    float b = KCE(x2, y2, 0, 0);
    float c = KCE(x3, y3, 0, 0);

    int min = MIND(x1, y1, x2, y2, x3, y3);
    int max = MAXD(x1, y1, x2, y2, x3, y3);
    cout << "Diem gan tam nhat la: ";
    if(min == 1)
        cout << "A";
    else if(min == 2)
        cout << "B";
    else  
        cout << "C";

    cout << "\nDiem xa tam nhat la: ";
    if(max == 1)
        cout << "A";
    else if(max == 2)
        cout << "B";
    else  
        cout << "C";
        
    return 0;
}