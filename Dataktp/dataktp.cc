#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int tgl;
    int bln;
    int th;
} Tanggal;

typedef struct {
    char noID[5];
    char nama[30];
    char jenis_kelamin; // 'L' atau 'P'
    Tanggal t;
} KTP;

typedef struct {
    KTP ktp;
    int jml;
} Data_KTP;

void tambahData(Data_KTP **data, int *jumlah) {
    *data = (Data_KTP*)realloc(*data, (*jumlah + 1) * sizeof(Data_KTP));

    printf("Data ke-%d:\n", *jumlah + 1);

    printf("Masukkan nomor ID: ");
    scanf("%s", (*data)[*jumlah].ktp.noID);

    printf("Masukkan nama: ");
    scanf(" %[^\n]s", (*data)[*jumlah].ktp.nama);

    printf("Masukkan jenis kelamin (L/P): ");
    scanf(" %c", &((*data)[*jumlah].ktp.jenis_kelamin));

    printf("Masukkan tanggal lahir (DD MM YYYY): ");
    scanf("%d %d %d", &((*data)[*jumlah].ktp.t.tgl), &((*data)[*jumlah].ktp.t.bln), &((*data)[*jumlah].ktp.t.th));

    (*data)[*jumlah].jml = *jumlah + 1;

    (*jumlah)++;
}

void cariDataTahunKelahiran(Data_KTP *data, int jumlah, int tahun) {
    printf("Data dengan tahun kelahiran %d:\n", tahun);
    for (int i = 0; i < jumlah; i++) {
        if (data[i].ktp.t.th == tahun) {
            printf("Nomor ID: %s\n", data[i].ktp.noID);
            printf("Nama: %s\n", data[i].ktp.nama);
            printf("Jenis Kelamin: %c\n", data[i].ktp.jenis_kelamin);
            printf("Tanggal Lahir: %d-%d-%d\n\n", data[i].ktp.t.tgl, data[i].ktp.t.bln, data[i].ktp.t.th);
        }
    }
}

void tampilkanDataLP(Data_KTP *data, int jumlah, char jenis_kelamin) {
    printf("Data dengan jenis kelamin %c:\n", jenis_kelamin);
    for (int i = 0; i < jumlah; i++) {
        if (data[i].ktp.jenis_kelamin == jenis_kelamin) {
            printf("Nomor ID: %s\n", data[i].ktp.noID);
            printf("Nama: %s\n", data[i].ktp.nama);
            printf("Jenis Kelamin: %c\n", data[i].ktp.jenis_kelamin);
            printf("Tanggal Lahir: %d-%d-%d\n\n", data[i].ktp.t.tgl, data[i].ktp.t.bln, data[i].ktp.t.th);
        }
    }
}

void editData(Data_KTP *data, int jumlah, char *noID) {
    for (int i = 0; i < jumlah; i++) {
        if (strcmp(data[i].ktp.noID, noID) == 0) {
            printf("Data sebelum diedit:\n");
            printf("Nomor ID: %s\n", data[i].ktp.nama);
            printf("Nama: %s\n", data[i].ktp.nama);
            printf("Jenis Kelamin: %c\n", data[i].ktp.jenis_kelamin);
            printf("Tanggal Lahir: %d-%d-%d\n\n", data[i].ktp.t.tgl, data[i].ktp.t.bln, data[i].ktp.t.th);
            printf("Data sesudah diedit:\n");
        }
    }
}


        
        





