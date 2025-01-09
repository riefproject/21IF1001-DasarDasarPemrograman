/*
	Program			: Jawaban Studi Kasus 2 - W5
	Deskripsi		: Menghitung jumlah kemunculan tahun kabisat dari 10 input bilangan tahun oleh user
	Created date	: 17/10/2024
	Created by      : Arief F-sa Wijaya (riefproject)

*/

#include <stdio.h>

int main()
{
	int tahun;
	int jmlTahunKabisat = 0;
	int i = 1;

	while (i <= 10)
	{
		printf("Masukkan tahun ke %d : ", i);
		scanf("%d", &tahun);
		if (tahun % 4 == 0 && (tahun % 100 != 0 || tahun % 400 == 0))
		{
			jmlTahunKabisat++;
		}
		i++;
	}

	printf("\nJumlah tahun kabisat dari input yang anda masukkan adalah : %d", jmlTahunKabisat);
}
