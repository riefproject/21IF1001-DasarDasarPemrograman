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
                       Tambahkan subvar Tahun lahir di variabel komposit Mahasiswa. Dan munculkan jumlah mahasiswa yang umurnya diatas 20 tahun.

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
    int TahunLahir;
};
void urutanMahasiswa(int a);
void inputNama(char *nama);
void inputAlamat(char *address);
void inputJenisKelamin(char *gender);
void inputDomisili(char *domicile);
void inputTahun(int *year);
void inputData(int index, struct mahasiswa Dt_Mhs[]);
int hitungDewasa(struct mahasiswa Dt_Mhs[], int size);
void outputJmlDewasa(int jumlah);

int main()
{
    struct mahasiswa Dt_Mhs[10];
    int jumlahDewasa = 0, i = 0;
    while (i < 10)
    {
        urutanMahasiswa(i);
        inputData(i, Dt_Mhs);
        i++;
    }

    jumlahDewasa = hitungDewasa(Dt_Mhs, 10);
    outputJmlDewasa(jumlahDewasa);
    return 0;
}

void inputData(int index, struct mahasiswa Dt_Mhs[])
{
    inputNama(Dt_Mhs[index].Nama);
    inputAlamat(Dt_Mhs[index].Alamat);
    inputJenisKelamin(Dt_Mhs[index].JenisKelamin);
    inputDomisili(Dt_Mhs[index].Domisili);
    inputTahun(&Dt_Mhs[index].TahunLahir);
    printf("\n");
    getchar();
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
void inputTahun(int *year)
{
    printf("Masukkan Tahun Lahir: ");
    scanf("%d", year);
}
int hitungDewasa(struct mahasiswa Dt_Mhs[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (2024 - Dt_Mhs[i].TahunLahir > 20)
        {
            count++;
        }
    }
    return count;
}
void outputJmlDewasa(int jumlah)
{
    printf("Jumlah mahasiswa di atas 20 tahun: %d\n", jumlah);
}
