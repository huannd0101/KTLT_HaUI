/*Bài 4.1.B. Có n đội bóng, mỗi đội đều đã thi đấu trong m trận. Điểm của mỗi đội trong mỗi trận được lưu trữ (thắng: 3 điểm; hòa: 1 điểm; thua: 0 điểm). Hãy:
- Cho biết đội bóng nào đã thi đấu m trận bất bại.
- Cho biết những đội bóng nào đang có điểm cao nhất.*/
#include<bits\stdc++.h>
using namespace std;

int main(){
    int n, m, a[100][100];
    cout << "Nhap so doi bong: ";   cin >> n;
    cout << "Nhap so tran bong da choi: ";   cin >> m;
    for(int i = 0; i < n; i++){
        cout << "Nhap thong tin doi thu " << i + 1 << endl;
        for(int j = 0; j < m; j++){
            cout << "Nhap ket qua cua tran thu " << j + 1 << " la: ";
            cin >> a[i][j];
        }
    }
    cout << endl;
    int max = 0, pos;
    for(int i = 0; i < n; i++){
        int s = 0, check = 0;
        for(int j = 0; j < m; j++){
            s += a[i][j];
            if(a[i][j] == 0)
                check = 1;
        }
        max = (max > s) ? max : s;
        if(!check)
            cout << "Doi thu " << i + 1 << " thi dau bat bai" << endl;
    }
    cout << "\nDoi co diem cao nhat la doi voi " << max << " diem." << endl;
    cout << "Doi do la doi: ";
    for(int i = 0; i < n; i++){
        int s = 0;
        for(int j = 0; j < m; j++){
            s += a[i][j];
        }
        if(s == max)
            cout << i + 1 << " ";
    }
    return 0;
}