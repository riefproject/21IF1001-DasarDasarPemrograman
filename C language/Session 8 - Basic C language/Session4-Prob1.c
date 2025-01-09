/*
    Program         : Jawaban Studi Kasus 1 W-4
    Deskripsi       : Menentukan aksi untuk memindahkan dan menghitung jumlah bola warna merah ke keranjang terpisah
                      I.S : Diketahui 10 bola warna warni di keranjang
                      F.S : Telah diketahui jumlah bola dan jumlah bola warna merah
    Created date    : 17/10/2024
    Created by      : Arief F-sa Wijaya (riefproject)
*/

#include <stdio.h>
#include <string.h>
#define jmlBola 10

int main()
{
    // Jumlah bola dalam keranjang
    char keranjangBola[jmlBola][10] = {"merah", "kuning", "hijau", "biru", "merah",
                                       "kuning", "ungu", "hijau", "merah", "coklat"};

    char keranjangBolaMerah[jmlBola][10];
    int jmlMerah = 0;
    int i = jmlBola - 1;

    while (i >= 0)
    {
        if (strcmp(keranjangBola[i], "merah") == 0)
        {
            strcpy(keranjangBolaMerah[jmlMerah], keranjangBola[i]);
            strcpy(keranjangBola[i], "");
            jmlMerah++;
        }
        else
        {
            strcpy(keranjangBola[i], "");
        }
        i--;
    }

    printf("Jumlah bola: %d\n", jmlBola);
    printf("Jumlah bola warna merah: %d\n", jmlMerah);

    return 0;
}
