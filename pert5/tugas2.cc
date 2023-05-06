#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nim, nama;

    cout << "Masukkan Nomor Induk Mahasiswa: ";
    cin >> nim;

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin >> ws, nama); // menggunakan getline untuk membaca input nama yang mungkin memiliki spasi

    cout << "Nomor Induk Mahasiswa: " << nim << endl;
    cout << "Nama Mahasiswa: " << nama << endl;

    return 0;
}
