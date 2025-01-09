/*
    Program         : Jawaban Studi Kasus 2 W-4
    Deskripsi       : Menentukan aksi untuk memindahkan dan menghitung jumlah bola warna merah ke keranjang terpisah
                      I.S : Diketahui SEJUMLAH bola warna warni di keranjang
                      F.S : Telah diketahui jumlah bola dan jumlah bola warna merah, kuning dan hijau.
                      *Buat dalam banyak tipe perulangan

    Created date    : 17/10/2024
    Created by      : Arief F-sa Wijaya (riefproject)
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char keranjangBola[][10] = {"merah", "kuning", "hijau", "biru", "merah",
                                "kuning", "ungu", "hijau", "merah", "coklat",
                                "merah", "kuning", "hijau", "biru", "merah",
                                "kuning", "ungu", "hijau", "merah", "coklat",
                                "merah", "hijau", "kuning", "pink", "hitam",
                                "kuning", "merah", "merah", "hijau", "biru",
                                "ungu", "kuning", "hijau", "putih", "emas",
                                "kuning", "merah", "coklat", "hijau", "merah"};

    int jmlBola = sizeof(keranjangBola) / sizeof(keranjangBola[0]);
    char keranjangBolaMerah[jmlBola][10], keranjangBolaKuning[jmlBola][10], keranjangBolaHijau[jmlBola][10];
    int jmlMerah = 0, jmlKuning = 0, jmlHijau = 0;
    int i = jmlBola - 1;
    for (; i >= 0; i--)
    {
        if (strcmp(keranjangBola[i], "merah") == 0)
        {
            strcpy(keranjangBolaMerah[jmlMerah], keranjangBola[i]);
            strcpy(keranjangBola[i], "");
            jmlMerah++;
        }
        else if (strcmp(keranjangBola[i], "kuning") == 0)
        {
            strcpy(keranjangBolaKuning[jmlKuning], keranjangBola[i]);
            strcpy(keranjangBola[i], "");
            jmlKuning++;
        }
        else if (strcmp(keranjangBola[i], "hijau") == 0)
        {
            strcpy(keranjangBolaHijau[jmlHijau], keranjangBola[i]);
            strcpy(keranjangBola[i], "");
            jmlHijau++;
        }
        else
        {
            strcpy(keranjangBola[i], "");
        }
    }

    printf("Jumlah bola: %d\n", jmlBola);
    printf("Jumlah bola warna merah: %d\n", jmlMerah);
    printf("Jumlah bola warna kuning: %d\n", jmlKuning);
    printf("Jumlah bola warna hijau: %d\n", jmlHijau);

    return 0;
}
