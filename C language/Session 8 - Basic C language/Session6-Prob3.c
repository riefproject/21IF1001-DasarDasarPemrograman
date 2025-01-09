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

	Created date	: 17/10/2024
	Created by      : Arief F-sa Wijaya (riefproject)

*/

#include "stdio.h"

// Prosedur untuk menampilkan array 5x5
void printArr(int arr[5][5])
{
	int kolom, baris = 0;
	while (baris < 5)
	{
		kolom = 0;
		while (kolom < 5)
		{
			printf("%2d ", arr[baris][kolom]);
			kolom++;
		}
		printf("\n");
		baris++;
	}
	printf("\n");
}

int main()
{
	int arr[5][5];

	printf("Inisialisasi array dengan 0\n");
	int kolom, baris = 0;
	while (baris < 5)
	{
		kolom = 0;
		while (kolom < 5)
		{
			arr[baris][kolom] = 0;
			kolom++;
		}
		baris++;
	}
	printArr(arr);

	printf("Ganti diagonal kiri atas ke kanan bawah dengan 1\n");
	baris = 0;
	while (baris < 5)
	{
		arr[baris][baris] = 1;
		baris++;
	}
	printArr(arr);

	printf("Ganti diagonal kiri bawah ke kanan atas dengan -1\n");
	baris = 0;
	kolom = 4;
	while (baris < 5)
	{
		if (baris != 2)
		{
			arr[baris][kolom] = -1;
		}
		baris++;
		kolom--;
	}
	printArr(arr);

	printf("Ubah nlai elemen arr yang nilainya 0 menjadi 5\n");
	baris = 0;
	while (baris < 5)
	{
		kolom = 0;
		while (kolom < 5)
		{
			if (arr[baris][kolom] == 0)
			{
				arr[baris][kolom] = 5;
			}
			kolom++;
		}
		baris++;
	}
	printArr(arr);
}
