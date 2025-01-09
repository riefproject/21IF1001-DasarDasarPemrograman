/*
	Program				: Jawaban Studi Kasus 4 - W5
	Deskripsi			: Menampilkan deret angka di layar komputer menggunakan repetition seperti:
						  1
						  12
						  123
						  1234
						  ....n
						  *kalo di kertas outputnya "*"

	Created date	: 17/10/2024
	Created by      : Arief F-sa Wijaya (riefproject)s

*/

#include <stdio.h>

int main()
{
	int input, j, i = 1;
	printf("Masukkan batas deret: ");
	scanf("%d", &input);
	while (i <= input)
	{
		j = 1;
		while (j <= i)
		{
			printf("%d", j);
			j++;
		}
		printf("\n");
		i++;
	}
}
