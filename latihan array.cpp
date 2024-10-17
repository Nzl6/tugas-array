#include <iostream>
using namespace std;

int main()
{
    int angka[5], angkater, dicari, temp, indeks;
    bool ditemukan = false;

    cout << "Masukan nilai : "<< endl;
    for (int i=0; i<5; ++i)
    {
        cout << "Nilai ke-"<<i<<" : ";
        cin >> angka [i];
    }

    angkater = angka[0];
    indeks = 0;
    for (int i=1; i<5;i++)
    {
        if (angka[i] > angkater)
        {
            angkater =angka[i];
            indeks=i;
        }
    }
    cout << "\nNilai Terbesar : "<< angkater << "\nPada Indeks " << indeks <<endl;


    for (int i = 0; i < 5-1; i++) {
        for (int j = 0; j < 5-i-1; j++) {
            if (angka[j] > angka[j+1]) {
                int temp = angka[j];
                angka[j] = angka[j+1];
                angka[j+1] = temp;
            }
        }
    }

    cout << "\nNilai Setelah Diurutkan: ";
    for (int i = 0; i < 5; i++) {
        cout <<  angka[i] << " ";
    }
    cout << endl;

    char pilihan;
    do {
        cout << "\nApakah Anda Ingin Mencari Angka Tertentu? (y/n): ";
        cin >> pilihan;

        if (pilihan == 'y' || pilihan == 'Y') {
            cout << "Masukkan Angka Yang Ingin Dicari: ";
            cin >> dicari;

            ditemukan = false;
            for (int i = 0; i < 5; i++) {
                if (angka[i] == dicari) {
                    ditemukan = true;
                    break;
                }
            }
            if (ditemukan) {
                cout << "\nAngka " << dicari << " Ada Sayyyyy" << endl;
            } else {
                cout << "\nAngka " << dicari << " Tidak Ada Sayyyyy" << endl;
            }
        }
    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "\nUdah yaaa ;(" << endl;

    return 0;
}



// bebas//
//valuenya daru user//
//bandingin angka yg lebih tinggi//
// pake do while nyari angka yg dimaksud cout ada/no //
