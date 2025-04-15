# include <iostream>
using namespace std;

main ()
{
    system("CLS");
    int a, b, c, jumlah;
    cout << " Kode ke - 1 : ";
    cin >> a;
    cout << " Kode ke - 2 : ";
    cin >> b;
    cout << " Kode ke - 3 : ";
    cin >> c;

    jumlah =  a + b + c;

    if (a >= 50 & b >= 50 & c >= 50 & jumlah >= 200)
    {
        cout << " \nAman ";
    }
    else 
    {
        cout << " \nBahaya";
    }
}