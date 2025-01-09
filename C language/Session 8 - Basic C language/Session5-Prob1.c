/*
	Program			: Jawaban Studi Kasus 1 - W5
	Deskripsi		: Menghiung kemunculan bilangan ganjil dan menampilkannya dari 10 input user
	Created date	: 17/10/2024
	Created by      : Arief F-sa Wijaya (riefproject)

*/

#include <stdio.h>

int main()
{
	int bilangan;
	int jmlGanjil = 0;
	int i = 1;

	while (i <= 10)
	{
		printf("Masukkan bilangan ke-%d : ", i);
		scanf("%d", &bilangan);
		if (bilangan % 2 != 0)
		{
			jmlGanjil++;
		}
		i++;
	}

	printf("\nJumlah bilangan ganjil dari input yang anda masukkan adalah: %d", jmlGanjil);
}
