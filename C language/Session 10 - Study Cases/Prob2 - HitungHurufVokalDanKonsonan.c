/*
  Program       : Hitung Huruf Vokal & Konsonan
  Description   : Dibaca sebuah text dari keyboard (asumsi, karakter yang masuk hanya alphabet), maksimal 50 huruf.
                  Hitung berapa jumlah huruf vokal dan berapa huruf konsonan pada text tersebut lalu tampilkan ke layar.
                  Contoh
                  Input:
                  Aku adalah anak gembala
                  Output :
                  Jumlah huruf vokal :10
                  Jumlah huruf konsonan :10
  Created Date  : 31/10/2024
  Created By    : Arief F-sa Wijaya (riefproject)
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void welcomeMessage();
void input(char teks[]);
int isVokal(char ch);
void hitungHuruf(char text[]);

int main()
{
    char kalimat[51]; // 50 char+1 null terminator
start:
    welcomeMessage();
    input(kalimat);

    hitungHuruf(kalimat);
    goto start;
    return 0;
}
void welcomeMessage()
{
    system("cls");
    printf("====================================\n");
    printf("SELAMAT DATANG DI PROGRAM MENGHITUNG\n");
    printf("         JENIS HURUF\n\n");
    printf("====================================\n\n");
}

void input(char teks[])
{
    printf("Masukkan teks (maksimal 50 huruf):\n");
    fgets(teks, 51, stdin);
}
int isVokal(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? 1 : 0;
}

void hitungHuruf(char text[])
{
    int vokal = 0, konsonan = 0;
    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] != '\n')
        {
            if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
            {
                if (isVokal(text[i]))
                {
                    vokal++;
                }
                else
                {
                    konsonan++;
                }
            }
        }
        i++;
    }

    printf("\nJumlah huruf vokal\t: %d\n", vokal);
    printf("Jumlah huruf konsonan\t: %d\n", konsonan);
    printf("\n====================================\n");
    printf("\n");
    printf("klik enter untuk mereset atau mengulang program\n");
    printf("klik CTRL+C untuk keluar\n");
    getchar();
}
