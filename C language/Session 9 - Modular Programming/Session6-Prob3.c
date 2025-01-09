/*
    Program			: Studi Kasus 3 - W6
    Deskripsi		: Diketahui tiga sebuah array Arr1 berdimensi 2 dan bertipe integer dengan ukuran 5x5
                      a. Isilah array Arr1 dengan nilai 0
                         0 0 0 0 0
                         0 0 0 0 0
                         0 0 0 0 0
                         0 0 0 0 0
                         0 0 0 0 0
                      b. Ubah nilai elemen Arr1 pada posisi baris dan kolom sama dengan angka 1 Contohnya pada posisi baris ke-1 dan kolom ke-1
                         1 0 0 0 0
                         0 1 0 0 0
                         0 0 1 0 0
                         0 0 0 1 0
                         0 0 0 0 1
                      c. Ubah nilai elemen Arr1 sedemikian rupa sehingga berisi -1 pada diagonal kiri ke kanan
                          1	 0	0  0 -1
                          0	 1	0 -1  0
                          0	 0	1  0  0
                          0	-1	0  1  0
                         -1	 0	0  0  1
                      d. Ubah nilai elemen Arr1 sisanya dengan angka 5
                          1	 5	5  5 -1
                          5	 1	0 -1  5
                          5	 5	1  5  5
                          5	-1	5  1  5
                         -1	 5	5  5  1

    Created date	: 25/10/2024
    Created by		: Arief F-sa Wijaya (riefproject)
    *BUAT ISI DALAM FUN MAIN SEMINIM MUNGKIN MENGGUNAKAN MODULAR

*/

#include <stdio.h>

void kerjain(int arr[5][5]);
void inisialisasiArray(int arr[5][5]);
void isiDiagonalUtama(int arr[5][5]);
void isiDiagonalSekunder(int arr[5][5]);
void isiSisaDenganLima(int arr[5][5]);
void printArr(int arr[5][5]);

int main()
{
    int arr[5][5];
    kerjain(arr);
    return 0;
}

void kerjain(int arr[5][5])
{
    inisialisasiArray(arr);
    printArr(arr);

    isiDiagonalUtama(arr);
    printArr(arr);

    isiDiagonalSekunder(arr);
    printArr(arr);

    isiSisaDenganLima(arr);
    printArr(arr);
}

void inisialisasiArray(int arr[5][5])
{
    printf("Inisialisasi array dengan 0\n");
    int i = 0, j;
    while (i < 5)
    {
        j = 0;
        while (j < 5)
        {
            arr[i][j] = 0;
            j++;
        }
        i++;
    }
}

void isiDiagonalUtama(int arr[5][5])
{
    printf("Ganti diagonal kiri atas ke kanan bawah dengan 1\n");
    int i = 0;
    while (i < 5)
    {
        arr[i][i] = 1;
        i++;
    }
}

void isiDiagonalSekunder(int arr[5][5])
{
    printf("Ganti diagonal kiri bawah ke kanan atas dengan -1\n");
    int i = 0, j = 4;
    while (i < 5)
    {
        if (i != 2)
        {
            arr[i][j] = -1;
        }
        i++;
        j--;
    }
}

void isiSisaDenganLima(int arr[5][5])
{
    printf("Ubah nilai elemen arr yang nilainya 0 menjadi 5\n");
    int i = 0;
    while (i < 5)
    {
        int j = 0;
        while (j < 5)
        {
            if (arr[i][j] == 0)
            {
                arr[i][j] = 5;
            }
            j++;
        }
        i++;
    }
}

void printArr(int arr[5][5])
{
    int i = 0;
    while (i < 5)
    {
        int j = 0;
        while (j < 5)
        {
            printf("%2d ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
}
