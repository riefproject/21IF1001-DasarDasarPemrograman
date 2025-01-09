/*
    Program			: Jawaban Studi Kasus 2 - W7
    Deskripsi		: Buat code untuk input 10 data mahasiswa, selanjutnya menampilkan 10 data mahasiswa berdasarkan kamus data dibawah ini.
                      Kamus Data :
                            Mahasiswa : variabel komposit dengan subvar sebagai berikut :
                                Nama   : variabel tunggal bertipe ...
                                Alamat : variabel tunggal bertipe ...
                                JenisKelamin : variabel tunggal bertipe ...
                                Domisili : variabel tunggal bertipe ...
                            Dt_Mhs  : variabel array 1 dimensi dengan 10 elemen bertipe Mahasiswa

    Created date	: 25/10/2024
    Created by		: Arief F-sa Wijaya (riefproject)
    *BUAT ISI DALAM FUN MAIN SEMINIM MUNGKIN MENGGUNAKAN MODULAR
*/

#include <stdio.h>

struct mahasiswa
{
    char Nama[100];
    char Alamat[100];
    char JenisKelamin[100];
    char Domisili[100];
};

void urutanMahasiswa(int a);
void inputNama(char *nama);
void inputAlamat(char *address);
void inputJenisKelamin(char *gender);
void inputDomisili(char *domicile);
void inputData(int index, struct mahasiswa Dt_Mhs[]);
void outputData(struct mahasiswa Dt_Mhs[]);

int main()
{
    struct mahasiswa Dt_Mhs[10];
    int i = 0;

    while (i < 10)
    {
        urutanMahasiswa(i);
        inputData(i, Dt_Mhs);
        i++;
    }

    outputData(Dt_Mhs);
    return 0;
}

void inputData(int index, struct mahasiswa Dt_Mhs[])
{
    inputNama(Dt_Mhs[index].Nama);
    inputAlamat(Dt_Mhs[index].Alamat);
    inputJenisKelamin(Dt_Mhs[index].JenisKelamin);
    inputDomisili(Dt_Mhs[index].Domisili);
    printf("\n");
}

void urutanMahasiswa(int a)
{
    printf("Mahasiswa ke-%d\n", a + 1);
}

void inputNama(char *name)
{
    printf("Masukkan Nama: ");
    fgets(name, 100, stdin);
}

void inputAlamat(char *address)
{
    printf("Masukkan Alamat: ");
    fgets(address, 100, stdin);
}

void inputJenisKelamin(char *gender)
{
    printf("Masukkan Jenis Kelamin: ");
    fgets(gender, 100, stdin);
}

void inputDomisili(char *domicile)
{
    printf("Masukkan Domisili: ");
    fgets(domicile, 100, stdin);
}

void outputData(struct mahasiswa Dt_Mhs[])
{
    printf("\nData Mahasiswa:\n");
    int i = 0;
    while (i < 10)
    {
        printf("Mahasiswa ke-%d:\n", i + 1);
        printf("Nama\t\t: %s", Dt_Mhs[i].Nama);
        printf("Alamat\t\t: %s", Dt_Mhs[i].Alamat);
        printf("Jenis Kelamin\t: %s", Dt_Mhs[i].JenisKelamin);
        printf("Domisili\t: %s", Dt_Mhs[i].Domisili);
        printf("\n");
        i++;
    }
}
