# include <iostream>
using namespace std;

main ()
{
    system("CLS");
    int a, jumlah;
    cout << " Masukkan kode 3 digit  : ";
    cin >> a;
    
    jumlah = 0;
    if ( a >= 100 & a <= 999)
    {
        while ( a != 0 )
        {
            jumlah += a % 10;
            a/= 10;
        }

        cout << "Jumlah digit : " << jumlah;
    }
    
    else 
    {
        cout << "Kode Salah!";
    }
}