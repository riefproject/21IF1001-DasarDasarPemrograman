/*
  Program       : Program Parkir Kendaraan
  Description   : Di sebuah tempat parkir, terdapat sebuah sistem parkir untuk mencatat setiap kendaraan yang masuk dan
                  keluar. Pada saat kendaraan keluar dari tempat parkir,maka petugas akan melakukan perhitungan total biaya
                  parkir yang harus dikeluarkan oleh pengendara berdasarkan lama parkir dan jenis kendaraan
                  Aturan perhitungan biaya parkir ditunjukkan pada tabel berikut:

                  | Kendaraan | Lama Parkir (Jam)  | Harga Parkir |
                  +===========+====================+==============+
                  | A (Motor) | 1 Jam Pertama      | 1000         |
                  | A (Motor) | Jam Berikutnya     | 1500         |
                  | B (Mobil) | 1 Jam Pertama      | 3000         |
                  | B (Mobil) | Jam Berikutnya     | 3500         |

  Created Date  : 31/10/2024
  Created By    : Arief F-sa Wijaya (riefproject)

*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void displayMenu();
char validasiTipeKendaraan();
int validasiLamaParkir(char tipeKendaraan);
int hitungBiaya(char tipeKendaraan, int lamaParkir);
void displayBiaya(int tipeKendaraan, int jam, int fee);

int main()
{
    char tipeKendaraan;
    int lamaParkir;
    int totalFee;
start:
    displayMenu();
    tipeKendaraan = validasiTipeKendaraan();
    lamaParkir = validasiLamaParkir(tipeKendaraan);
    totalFee = hitungBiaya(tipeKendaraan, lamaParkir);
    displayBiaya(tipeKendaraan, lamaParkir, totalFee);
    goto start;

    return 0;
}

void displayMenu()
{
    system("cls");
    printf("WELCOME TO THE PARKING SYSTEM\n");
    printf("\n| Kendaraan | Lama Parkir (Jam)  | Harga Parkir |\n");
    printf("+===========+====================+==============+\n");
    printf("| A (Motor) | 1 Jam Pertama      | 1000         |\n");
    printf("| A (Motor) | Jam Berikutnya     | 1500         |\n");
    printf("| B (Mobil) | 1 Jam Pertama      | 3000         |\n");
    printf("| B (Mobil) | Jam Berikutnya     | 3500         |\n\n");
    printf("Silakan pilih tipe kendaraan:\n");
    printf("A. Motor\n");
    printf("B. Mobil\n");
    printf("\n====================================\n");
}

char validasiTipeKendaraan()
{
    char tipe;
    do
    {
        printf("Masukkan pilihanmu (A atau B)\t: ");
        scanf(" %c", &tipe);
        tipe = toupper(tipe);
        if (tipe != 'A' && tipe != 'B')
        {
            system("cls");
            displayMenu();
            printf("Pilihan tidak valid. Mohon masukkan'A' atau 'B'.\n");
        }
    } while (tipe != 'A' && tipe != 'B');
    return tipe;
}

int validasiLamaParkir(char tipeKendaraan)
{
    char input[5];
    int jam = -1;

    do
    {
        printf("Masukkan lama parkir (jam)\t: ");
        scanf("%s", input);

        char *endptr;
        jam = strtol(input, &endptr, 10);

        // Mastiin user biar gak masukin karakter selain angka
        if (*endptr != '\0' || jam <= 0)
        {
            system("cls");
            displayMenu();
            printf("Masukkan pilihanmu (A atau B)\t: %c\n", tipeKendaraan);
            printf("Masukkan tidak valid. Harap masukkan angka positif.\n");
        }
    } while (jam <= 0);

    return jam;
}

int hitungBiaya(char tipeKendaraan, int lamaParkir)
{
    int fee = 0;

    if (tipeKendaraan == 'A')
    {
        fee = 1000;
        if (lamaParkir > 1)
        {
            fee += (lamaParkir - 1) * 1500;
        }
    }
    else if (tipeKendaraan == 'B')
    {
        fee = 3000;
        if (lamaParkir > 1)
        {
            fee += (lamaParkir - 1) * 3500;
        }
    }

    return fee;
}

void displayBiaya(int tipeKendaraan, int jam, int fee)
{
    displayMenu();
    printf("Masukkan pilihanmu (A atau B)\t: %c\n", tipeKendaraan);
    printf("Masukkan lama parkir (jam)\t: %d\n", jam);
    printf("\nTotal biaya parkir: IDR %d\n", fee);
    printf("\n====================================\n");
    printf("\n");
    printf("klik enter untuk mereset atau mengulang program\n");
    printf("klik CTRL+C untuk keluar\n");
    getchar();
    getchar();
}
