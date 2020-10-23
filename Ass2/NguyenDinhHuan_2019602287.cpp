#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

void Input(double *&a, int &n)
{
    cout << "Nhap n = ";    cin >> n;
    a = new double[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void Sort(double *a, int n)
{
    for(int i = 0; i < n - 1; i++)
        for(int j = n - 1; j > i; j--)
            if(a[j - 1] > a[j])
                swap(a[j - 1], a[j]);
}

double SumEven(double *a, int n)
{
    double sum = 0;
    for(int i = 0; i < n; i++)
        if((int)a[i] % 2 == 0)
            sum += a[i];
    return sum;
}

void Output(double *a, int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void Xuat_File(double *a, int n, char *fileName)
{
    ofstream f(fileName, ios::app);
    f << n << endl;
    f << setiosflags(ios::showpoint) << setprecision(3);
    for(int i = 0; i < n; i++)
    {
        f << a[i] << " ";
    }
    f << endl;
    f.close();
}

void FindAndDisplay(double *a, int n)
{
    double firstMax, secondMax;
    if(a[0] > a[1])
    {
        firstMax = a[0];
        secondMax = a[1];
    }
    else 
    {
        firstMax = a[1];
        secondMax = a[0];
    }
    for(int i = 2; i < n; i++)
    {
        if(firstMax <= a[i])
        {
            secondMax = firstMax;
            firstMax = a[i];
        }
        else if(secondMax < a[i])
        {
            secondMax = a[i];
        }
    }
    cout << "\nSo lon nhat trong mang la: " << firstMax << endl;
    cout << "So lon thu hai trong mang la: " << secondMax << endl;
}

bool Check(double *a, int n)
{
    for(int i = 0; i < n - 2; i++)
        if(a[i] > 0 && a[i + 1] > 0 && a[i + 2] > 0)
            return true;
        else  
            return false;
}

void DeleteNumber(double *a, int &n, int number)
{
    for(int i = 0; i < n; i++)
        while(a[i] > number)
        {
            for(int j = i; j < n; j++)
                a[j] = a[j + 1];
            n--;
            a = (double*)realloc(a, n * sizeof(double));
        }
}

int main()
{
    double *a;  int n;
    Input(a, n);

    cout << "Mang a vua nhap la: ";
    Output(a, n);

    cout << "\nTong cac phan tu co chi so chan la: " << SumEven(a, n) << endl;
    
    Sort(a, n);
    cout << "Mang a vua sap xep la: ";
    Output(a, n);

    Xuat_File(a, n, "ARRAY.TXT");

    FindAndDisplay(a, n);

    if(Check(a, n))
        cout << "Mang co 3 so lien nhau duong" << endl;
    else 
        cout << "Mang khong co 3 so lien nhau duong" << endl;

    cout << "Mang sau khi xoa phan tu lon hon 5 la: ";
    DeleteNumber(a, n, 5);
    Output(a, n);

    delete[] a;
    return 0;
}