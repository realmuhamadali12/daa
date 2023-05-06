#include <iostream>

using namespace std;

int main()
{
    int angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    cout << "Angka pertama yang dimasukkan adalah: " << angka1 << endl;
    cout << "Angka kedua yang dimasukkan adalah: " << angka2 << endl;

    cout << "Kedua angka tersebut saat didoublekan menjadi: " << (angka1 * 2) << " dan " << (angka2 * 2) << endl;

    return 0;
}
