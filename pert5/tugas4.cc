#include <iostream>

using namespace std;

int main()
{
    int jumlah_beli, jumlah_uang, kembali;

    cout << "Masukkan jumlah beli: ";
    cin >> jumlah_beli;

    cout << "Masukkan jumlah uang yang dibayarkan: ";
    cin >> jumlah_uang;

    kembali = jumlah_uang - jumlah_beli;

    cout << "Kembaliannya adalah: " << kembali << endl;

    return 0;
}
