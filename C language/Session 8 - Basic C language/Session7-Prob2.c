/*
	Program			: Jawaban Studi Kasus 2 - W7
	Deskripsi		: Buat code untuk input 10 data mahasiswa, selanjutnya menampilkan 10 data mahasiswa berdasarkan kamus data dibawah ini.
					  Kamus Data :
							Mahasiswa : variabel komposit dengan subvar sebagai berikut :
								Nama   : variabel tunggal bertipe ...
								Alamat : variabel tunggal bertipe ...
								JenisKelamin : variabel tunggal bertipe ...
								Domisili : variabel tunggal bertipe ...
							Dt_Mhs  : variabel array 1 dimensi dengan 10 elemen bertipe Mahasiswa
					   Tambahkan subvar Tahun lahir di variabel komposit Mahasiswa. Dan munculkan jumlah mahasiswa yang umurnya diatas 20 tahun.

	Created date	: 17/10/2024
	Created by      : Arief F-sa Wijaya (riefproject)

*/

#include <stdio.h>

struct mahasiswa
{
	char Nama[100];
	char Alamat[100];
	char JenisKelamin[100];
	char Domisili[100];
	int TahunLahir;
};

int main()
{
	struct mahasiswa Dt_Mhs[10];
	int i = 0;
	int jumlahDewasa = 0;
	while (i < 10)
	{
		printf("Mahasiswa ke-%d\n", i + 1);
		printf("Masukkan Nama : ");
		fgets(Dt_Mhs[i].Nama, sizeof(Dt_Mhs[i].Nama), stdin);
		printf("Masukkan Alamat : ");
		fgets(Dt_Mhs[i].Alamat, sizeof(Dt_Mhs[i].Alamat), stdin);
		printf("Masukkan Jenis Kelamin : ");
		fgets(Dt_Mhs[i].JenisKelamin, sizeof(Dt_Mhs[i].JenisKelamin), stdin);
		printf("Masukkan Domisili : ");
		fgets(Dt_Mhs[i].Domisili, sizeof(Dt_Mhs[i].Domisili), stdin);
		printf("Masukkan Tahun Lahir : ");
		scanf("%d", &Dt_Mhs[i].TahunLahir);
		getchar();
		if (2024 - Dt_Mhs[i].TahunLahir > 20)
		{
			jumlahDewasa++;
		}
		printf("\n");
		i++;
	}
	printf("jumlah mahasiswa di atas 20 tahun : %d", jumlahDewasa);
}
