/*
  Program       : Tampilkan Huruf Vokal & Konsonan
  Description   : Dibaca sebuah teks dari keyboard (asumsi, ch yang masuk hanya alphabet), maksimal 50 huruf.
                  Hitung berapa jumlah huruf vokal dan berapa huruf konsonan pada teks tersebut lalu tampilkan huruf-huruf tersebut secara ascending.
                  Contoh
                  Input:
                  Aku adalah anak gembala
                  Output :
                  Jumlah huruf vokal : 10
                  A a a a a a e u u o

                  Jumlah huruf konsonan : 10
                  b d g h k k l l m n
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
void hitungHuruf(char teks[]);
void urutkanHuruf(char arr[]);

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
    printf("   DAN MENAMPILKAN JENIS HURUF\n\n");
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

void hitungHuruf(char teks[])
{
    int vokal = 0, konsonan = 0;
    char vokalArr[51] = {0}, konsonanArr[51] = {0};
    int i = 0;

    while (teks[i] != '\0')
    {
        if (teks[i] != '\n')
        {
            if ((teks[i] >= 'A' && teks[i] <= 'Z') || (teks[i] >= 'a' && teks[i] <= 'z'))
            {
                if (isVokal(teks[i]))
                {
                    vokalArr[vokal] = teks[i];
                    vokal++;
                }
                else
                {
                    konsonanArr[konsonan] = teks[i];
                    konsonan++;
                }
            }
        }
        i++;
    }

    urutkanHuruf(vokalArr);
    printf("\nJumlah huruf vokal\t: %d\n", vokal);
    i = 0;
    while (i < vokal)
    {
        printf("%c ", vokalArr[i]);
        i++;
    }
    printf("\n");

    urutkanHuruf(konsonanArr);
    printf("\nJumlah huruf konsonan\t: %d\n", konsonan);
    i = 0;
    while (i < konsonan)
    {
        printf("%c ", konsonanArr[i]);
        i++;
    }
    printf("\n====================================\n");
    printf("\n");
    printf("klik enter untuk mereset atau mengulang program\n");
    printf("klik CTRL+C untuk keluar\n");
    getchar();
}

void urutkanHuruf(char arr[])
{
    int n = strlen(arr);
    int i = 0;
    while (i < n - 1)
    {
        int j = i + 1;
        while (j < n)
        {
            if (arr[i] > arr[j])
            {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
}
