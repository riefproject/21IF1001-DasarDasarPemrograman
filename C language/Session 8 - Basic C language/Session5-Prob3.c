/*
	Program				: Jawaban Studi Kasus 3 - W5
	Deskripsi			: Menampilkan deret angka di layar komputer menggunakan repetition seperti:
						  11111
						  22222
						  33333
						  44444
						  55555

	Created date	: 17/10/2024
	Created by      : Arief F-sa Wijaya (riefproject)

*/

#include <stdio.h>

int main()
{
	int j, i = 1;
	while (i <= 5)
	{
		j = 1;
		while (j <= 5)
		{
			printf("%d", i);
			j++;
		}
		printf("\n");
		i++;
	}
}
