# include <iostream>
# include <iomanip> // untuk setprecision, mengatur angka di belakang koma.
using namespace std;

main ()
{
    system("CLS");
    string nama, ket1, ket2, ket3;
    int NIM, a, b, c;
    float rata;


    cout << " Nama Mahasiswa : ";
    getline ( cin, nama);
    cout << " NIM            : ";
    cin >> NIM;
    cout << " Nilai Mata Kuliah :\n ";
    cout << "   Algoritma dan Pemograman :  ";
    cin >> a;

    if ( a >= 60 )
    {
        ket1 = "Lulus";   
    }
    else 
    {
        ket1 = "Tidak Lulus. Silakan Ulangi di Tahun Depan!";
    }

    cout << "    Matematika Diskrit       :  ";
    cin >> b;

    if ( b >= 60 )
    {
        ket2 = "Lulus";   
    }
    else 
    {
        ket2 = "Tidak Lulus. Silakan Ulangi di Tahun Depan!";
    }


    cout << "    Aljabar Linear           :  ";
    cin >> c;

    if ( c >= 60 )
    {
        ket3 = "Lulus";   
    }
    else 
    {
        ket3 = "Tidak Lulus. Silakan Ulangi di Tahun Depan!";
    }

    rata  = float(a + b + c) / 3;

    cout << "   \nAlgoritma dan Pemograman      :      " << ket1;
    cout << "   \nMatematika Diskrit            :      " << ket2;
    cout << "   \nAljabar Linear                :      " << ket3;
    cout << fixed << setprecision(2);
    cout << " \nNilai Rata-rata Semester ini    :      " <<  rata;
    

}