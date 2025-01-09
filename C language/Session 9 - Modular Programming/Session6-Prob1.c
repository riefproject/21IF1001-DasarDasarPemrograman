/*
    Program			: Jawaban Studi Kasus 1 - W6
    Deskripsi		: Diketahui tiga sebuah array Arr1, Arr2 dan Arr3 berdimensi 2 dan bertipe integer dengan ukuran 3x3
                      a. Isilah array Arr1 dan Arr2 dengan nilai sembarang (buat algoritma inisialisasi array).
                      b. Lakukan operasi penjumlahan pada Arr1 dan Arr2 dan simpan nilainya ke dalam Arr3.
                      c. Tampilkan nilai Arr3 ke layar sesuai dengan baris dan kolom pada matriks dan setiap nilai dipisahkan dengan spasi.

    Created date	: 25/10/2024
    Created by		: Arief F-sa Wijaya (riefproject)
    *BUAT ISI DALAM FUN MAIN SEMINIM MUNGKIN MENGGUNAKAN MODULAR
*/

#include <stdio.h>
#include <stdlib.h>

void isiArray(int arr[3][3], const char *message);
int **hitungArr3(int arr1[3][3], int arr2[3][3]);
void outputArray(int **arr, const char *message);

int main()
{
    int arr1[3][3], arr2[3][3];

    isiArray(arr1, "Masukkan array 1: \n");
    isiArray(arr2, "Masukkan array 2: \n");

    int **arr3 = hitungArr3(arr1, arr2);

    outputArray(arr3, "Array 3 (array 1 + array 2):");

    return 0;
}

void isiArray(int arr[3][3], const char *message)
{
    printf("%s", message);
    int j = 0, i = 0;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            scanf("%d", &arr[i][j]);
            j++;
        }
        i++;
    }
}

int **hitungArr3(int arr1[3][3], int arr2[3][3])
{
    int **arr3 = (int **)malloc(3 * sizeof(int *));
    int i = 0;
    while (i < 3)
    {
        arr3[i] = (int *)malloc(3 * sizeof(int));
        i++;
    }

    i = 0;
    int j;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            j++;
        }
        i++;
    }

    return arr3;
}

void outputArray(int **arr, const char *message)
{
    printf("%s\n", message);
    int i = 0, j;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            printf("%d ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
