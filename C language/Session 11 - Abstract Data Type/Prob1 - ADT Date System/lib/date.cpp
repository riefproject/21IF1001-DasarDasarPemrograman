/* 2. File : ADTDate.cpp */
/* Deskripsi : Unit untuk keperluan ADT Date */
/* Pembuat : Ade Chandra N */
/***************************/
/* BODY PRIMITIF DATE */
/***************************/
#include <stdio.h>
#include <math.h>
#include "date.h"

/*********** Operasi Primitif ************/
void CreateDate(date *D)
/* Constructor Membentuk sebuah DATE, dengan nilai default adalah
01/01/1900 */
{
    SetTgl(01, &(*D));
    SetBln(01, &(*D));
    SetThn(1900, &(*D));
}

/******* Selector komponen **********/

/* Mengambil bagian Tgl dari date */
int GetTgl(date D)
{
    return (D.Tgl);
}

/* Mengambil bagian Bln dari date */
int GetBln(date D)
{
    return (D.Bln);
}

/* Mengambil bagian Thn dari date */
int GetThn(date D)
{
    return (D.Thn);
}

/****** Pengubah komponen ******/

/* Memberi nilai untuk Tgl */
void SetTgl(int NewTgl, date *D)
{
    (*D).Tgl = NewTgl;
}

/* Memberi nilai untuk Bln */
void SetBln(int NewBln, date *D)
{
    (*D).Bln = NewBln;
}

/* Memberi nilai untuk Thn */
void SetThn(int NewThn, date *D)
{
    (*D).Thn = NewThn;
}

/****** Kelompok Interaksi dengan I/O device, BACA/TULIS ******/

/* Membentuk DATE dari iTgl, iBln dan iThn yang dibaca dari keyboard */
void BacaDate(date *D)
{
    printf("Tanggal\t: ");
    scanf("%d", &((*D).Tgl));
    printf("Bulan\t: ");
    scanf("%d", &((*D).Bln));
    printf("Tahun\t: ");
    scanf("%d", &((*D).Thn));
    if (!isValid(*D))
    {
        printf("Data yang anda masukkan tidak valid ! jadi di reset\n");
        CreateDate(&(*D));
    }
}

/* Memeriksa apakah suatu tanggal valid, yaitu dengan memperhatikan batas
akhir per bulan */
boolean isValid(date D)
{
    if ((GetThn(D) < 1900) || (GetThn(D) > 30000) || (GetBln(D) < 1) || (GetBln(D) > 12) || (GetTgl(D) < 1) || (GetTgl(D) > TglAkhir(D)))
        return (false);
    else
        return (true);
}

/* Print nilai D dengan format dd/mm/yyyy */
void PrintObj(date D)
{
    printf("%d/%d/%d\n", GetTgl(D), GetBln(D), GetThn(D));
}

/****** Operator Relasional ******/

/* Memeriksa apakah suatu tanggal adalah kabisat; Dipakai untuk bulan == 2
saja
Harusnya kabisat adalah thn yang habis dibagi 4 dan 100, tapi
implementasinya seringkali hanya menggunakan 4 sebagai pembagi */
boolean isKabisat(date D)
{
    return (((GetThn(D) % 4 != 0) || ((GetThn(D) % 100 == 0) && (GetThn(D) % 400 != 0))) ? false : true);
}

/***** Predikat lain *******/

/* Memberikan tanggal terakhir dari sebuah bulan */
int TglAkhir(date D)
{
    if ((GetBln(D) == 1) || (GetBln(D) == 3) || (GetBln(D) == 5) || (GetBln(D) == 7) || (GetBln(D) == 8) || (GetBln(D) == 10) || (GetBln(D) == 12))
        return (31);
    else if ((GetBln(D) == 4) || (GetBln(D) == 6) || (GetBln(D) == 9) || (GetBln(D) == 11))
        return (30);
    else
        return (isKabisat(D) ? 29 : 28);
}

/* Menampilkan tanggal sebelumnya dari sebuah Date
I.S = Tanggal tertentu diketahui
F.S = Tanggal sebelumnya diketahui
Hal yang perlu diketahui : Batas akhir tiap bulan dan jika jan, thn-1
*/
void DateBefore(date D)
{
    if (GetTgl(D) == 1)
    {
        if (GetBln(D) == 1)
        {
            SetTgl(31, &D);
            SetBln(12, &D);
            SetThn(GetThn(D) - 1, &D);
        }
        else if (GetBln(D) == 3 && isKabisat(D))
        {
            SetTgl(29, &D);
            SetBln(GetBln(D) - 1, &D);
        }
        else
        {
            SetBln(GetBln(D) - 1, &D);
            SetTgl(TglAkhir(D), &D);
        }
    }
    else
    {
        SetTgl(GetTgl(D) - 1, &D);
    }

    printf("Tanggal Kemarin\t: %d/%d/%d\n", GetTgl(D), GetBln(D), GetThn(D));
}

/* Menampilkan tanggal berikutnya dari sebuah Date
I.S = Tanggal tertentu diketahui
F.S = Tanggal berikutnya diketahui
Hal yang perlu diketahui : Batas akhir tiap bulan dan jika des, thn+1
*/
void NextDate(date D)
{
    if (GetTgl(D) == TglAkhir(D))
    {
        if (GetBln(D) == 12)
        {
            SetTgl(1, &D);
            SetBln(1, &D);
            SetThn(GetThn(D) + 1, &D);
        }
        else
        {
            SetTgl(1, &D);
            SetBln(GetBln(D) + 1, &D);
        }
    }
    else
    {
        SetTgl(GetTgl(D) + 1, &D);
    }

    printf("Tanggal Besok\t: %d/%d/%d\n\n", GetTgl(D), GetBln(D), GetThn(D));
}

/* Menampilkan selisih dua tanggal
I.S = 2 buah Tanggal tertentu diketahui
F.S = Tampil selisih dua buah tanggal
Asumsi : 1 tahun = 365 hari */
void SelisihDate(date D1, date D2)
{
    long ans = 0;
    date mx, mn, temp;
    int tm, ty;

    if (GetThn(D1) > GetThn(D2) ||
        // Tahun sama, bulan beda
        (GetThn(D1) == GetThn(D2) && GetBln(D1) > GetBln(D2)) ||
        // Tahun sama, bulan sama, tgl beda
        (GetThn(D1) == GetThn(D2) && GetBln(D1) == GetBln(D2) && GetTgl(D1) > GetTgl(D2)))
    {
        mx = D1;
        mn = D2;
    }
    else
    {
        mx = D2;
        mn = D1;
    }

    if (GetThn(mx) == GetThn(mn) && GetBln(mn) == GetBln(mx))
    {
        ans += GetTgl(mx) - GetTgl(mn);
    }
    else
    {

        temp = mn;
        tm = GetBln(mn);
        ty = GetThn(mn);

        while (ty < GetThn(mx) || (ty == GetThn(mx) && tm < GetBln(mx)))
        {
            ans += TglAkhir(temp);
            tm++;
            if (tm > 12)
            {
                tm = 1;
                ty++;
            }
            SetBln(tm, &temp);
            SetThn(ty, &temp);
        }

        ans -= GetTgl(mn);
        ans += GetTgl(mx);
    }

    printf("Selisih tanggal: %ld hari\n", ans);
}
