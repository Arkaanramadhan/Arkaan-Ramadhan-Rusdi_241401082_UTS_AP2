# include <iostream>
using namespace std;

main ()
{
    system("CLS");
    string judul;
    int i, jumlah;
    cout << " Masukkan daftar judul buku : ";
    getline (cin, judul);

    i = 0;
    jumlah = 0;
    while (i < judul.length())
    {
            while (i < judul.length() && judul[i] == ' ') 
            {
                i++;
            } // lewati spasi

            if (i < judul.length()) 
            {
                jumlah++; // ada kata
            }
            while (i < judul.length() && judul[i] != ' ') 
            {
                i++; // lewati kata
            }
    }
    cout << " Jumlah judul buku : " << jumlah;
}