/*
  Program       : Program Parkir Kendaraan menggunakan ADT
  Description   : Di sebuah tempat parkir, terdapat sebuah sistem parkir untuk mencatat setiap kendaraan yang masuk dan
				  keluar. Pada saat kendaraan keluar dari tempat parkir,maka petugas akan melakukan perhitungan total biaya
				  parkir yang harus dikeluarkan oleh pengendara berdasarkan lama parkir dan jenis kendaraan
				  Aturan perhitungan biaya parkir ditunjukkan pada tabel berikut:

				  | Kendaraan | Lama Parkir (Jam)  | Harga Parkir |
				  +===========+====================+==============+
				  | A (Motor) | 1 Jam Pertama      | 1000         |
				  | A (Motor) | Jam Berikutnya     | 1500         |
				  | B (Mobil) | 1 Jam Pertama      | 3000         |
				  | B (Mobil) | Jam Berikutnya     | 3500         |

  Created Date  : 07/11/2024
  Created By    : Arief F-sa Wijaya (241511002)
*/
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include "parkingsys.h"

int main()
{
	Parkir parkir;
	int fee;
	char i;

	while (1)
	{
		displayMenu();
		validasiTipeKendaraan(&parkir);
		validasiLamaParkir(&parkir);
		fee = hitungBiaya(parkir);
		displayBiaya(parkir, fee);
		i = getch();
		if (tolower(i) == 'q')
			break;
	}

	return 0;
}
