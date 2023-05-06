#include <iostream>
using namespace std;

struct Alamat {
    string NamaJalan;
    int NomorRumah;
    string Kota;
    string Provinsi;
};

struct TanggalLahir {
    int Tanggal;
    int Bulan;
    int Tahun;
};

struct Mhs {
    string Nim;
    string Nama;
    Alamat alamat;
    string TempatLahir;
    TanggalLahir TglLahir;
};