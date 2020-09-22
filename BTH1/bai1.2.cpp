#include<bits\stdc++.h>
using namespace std;

void nghin(int n){
    switch (n)
    {
    case 1:
        cout << "Mot Ngan ";
        break;
    case 2:
        cout << "Hai Ngan ";
        break;
    case 3:
        cout << "Ba Ngan ";
        break;
    case 4:
        cout << "Bon Ngan ";
        break;
    case 5:
        cout << "Nam Ngan ";
        break;
    case 6:
        cout << "Sau Ngan ";
        break;
    case 7:
        cout << "Bay Ngan ";
        break;
    case 8:
        cout << "Tam Ngan ";
        break;
    case 9:
        cout << "Chin Ngan";
        break;
    case 0:
        break;
    }
}
void tram(int n){
    switch (n)
    {
    case 1:
        cout << "Mot Tram ";
        break;
    case 2:
        cout << "Hai Tram ";
        break;
    case 3:
        cout << "Ba Tram ";
        break;
    case 4:
        cout << "Bon Tram ";
        break;
    case 5:
        cout << "Nam Tram ";
        break;
    case 6:
        cout << "Sau Tram ";
        break;
    case 7:
        cout << "Bay Tram ";
        break;
    case 8:
        cout << "Tam Tram ";
        break;
    case 9:
        cout << "Chin Tram";
        break;
    case 0:
        cout << "Khong Tram ";
        break;
    }
}
void chuc(int n){
    switch (n)
    {
    case 1:
        cout << "Muoi ";
        break;
    case 2:
        cout << "Hai Muoi ";
        break;
    case 3:
        cout << "Ba Muoi ";
        break;
    case 4:
        cout << "Bon Muoi ";
        break;
    case 5:
        cout << "Nam Muoi ";
        break;
    case 6:
        cout << "Sau Muoi ";
        break;
    case 7:
        cout << "Bay Muoi ";
        break;
    case 8:
        cout << "Tam Muoi ";
        break;
    case 9:
        cout << "Chin Muoi";
        break;
    case 0:
        cout << "Linh ";
        break;
    }
}
void donvi(int n){
    switch (n)
    {
    case 1:
        cout << "Mot";
        break;
    case 2:
        cout << "Hai";
        break;
    case 3:
        cout << "Ba";
        break;
    case 4:
        cout << "Bon";
        break;
    case 5:
        cout << "Nam";
        break;
    case 6:
        cout << "Sau";
        break;
    case 7:
        cout << "Bay";
        break;
    case 8:
        cout << "Tam";
        break;
    case 9:
        cout << "Chin";
        break;
    case 0:
        break;
    }
}

int main(){
    int D, C, T, N, n;
    cout << "Nhap n = ";
    cin >> n;
    N = n / 1000;
    T = (n % 1000) / 100;
    C = (n % 100) / 10;
    D = n % 10;
    nghin(N);
    if(T == 0 && C == 0 && D == 0){
        return 0;
    }
    tram(T);
    if(D)
        chuc(C);
    else
        cout << "";
    donvi(D);
    return 0;
}
// int main(){
//     int D, C, T, N, n;
//     cout << "Nhap n = ";
//     cin >> n;
//     N = n / 1000;
//     T = (n % 1000) / 100;
//     C = (n % 100) / 10;
//     D = n % 10;
//     cout << N << " ngan " << T << " tram " << C << " chuc " << D << " don vi"; 
//     return 0;
// }