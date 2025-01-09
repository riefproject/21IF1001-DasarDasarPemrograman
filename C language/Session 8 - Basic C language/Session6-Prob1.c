/*
	Program			: Jawaban Studi Kasus 1 - W6
	Deskripsi		: Diketahui tiga sebuah array Arr1, Arr2 dan Arr3 berdimensi 2 dan bertipe integer dengan ukuran 3x3
					  a. Isilah array Arr1 dan Arr2 dengan nilai sembarang (buat algoritma inisialisasi array).
					  b. Lakukan operasi penjumlah pada Arr1 dan Arr2 dan simpan nilainya ke dalam Arr3.
					  c. Tampilkan nilai Arr3 ke layar sesuai dengan baris dan kolom pada matriks dan setiap nilai dipisahkan dengan spasi.

	Created date	: 17/10/2024
	Created by      : Arief F-sa Wijaya (riefproject)

*/

#include <stdio.h>

int main()
{
	int kolom, baris = 0;
	int arr1[3][3], arr2[3][3], arr3[3][3];
	printf("Demi kenyamanan, silakan masukkan bilangan dipisahkan dengan spasi dan klik enter setiap memasukkan 3 bilangan\n");
	printf("Masukkan array 1: \n");
	while (baris < 3)
	{
		kolom = 0;
		while (kolom < 3)
		{
			scanf("%d", &arr1[baris][kolom]);
			kolom++;
		}
		baris++;
	}

	printf("Masukkan array 2: \n");
	baris = 0;
	while (baris < 3)
	{
		kolom = 0;
		while (kolom < 3)
		{
			scanf("%d", &arr2[baris][kolom]);
			kolom++;
		}
		baris++;
	}

	printf("Array 3 (array 1 + array 2): \n");
	baris = 0;
	while (baris < 3)
	{
		kolom = 0;
		while (kolom < 3)
		{
			arr3[baris][kolom] = arr1[baris][kolom] + arr2[baris][kolom];
			printf("%d\t", arr3[baris][kolom]);
			kolom++;
		}
		printf("\n");
		baris++;
	}
}
