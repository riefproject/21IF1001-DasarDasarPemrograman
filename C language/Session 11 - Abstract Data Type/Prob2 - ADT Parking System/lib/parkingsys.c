#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "parkingsys.h"

// Constructor
Parkir createParkir(Parkir parkir) {
    setTipeKendaraan(&parkir, getTipeKendaraan(&parkir));
    setLamaParkir(&parkir, getLamaParkir(&parkir));
    return parkir;
}

// Getter 
char getTipeKendaraan(Parkir *parkir) {
    return parkir->tipeKendaraan;
}

int getLamaParkir(Parkir *parkir) {
    return parkir->lamaParkir;
    (*parkir).lamaParkir;
}

// Setter 
void setTipeKendaraan(Parkir *parkir, char tipeKendaraan) {
    parkir->tipeKendaraan = tipeKendaraan;
}

void setLamaParkir(Parkir *parkir, int lamaParkir) {
    parkir->lamaParkir = lamaParkir;
}

// Display Menu
void displayMenu() {
    system("cls");
    printf("          WELCOME TO THE PARKING SYSTEM\n");
    printf("\n| Kendaraan | Lama Parkir (Jam)  | Harga Parkir |\n");
    printf("+===========+====================+==============+\n");
    printf("| A (Motor) | 1 Jam Pertama      | 1000         |\n");
    printf("| A (Motor) | Jam Berikutnya     | 1500         |\n");
    printf("| B (Mobil) | 1 Jam Pertama      | 3000         |\n");
    printf("| B (Mobil) | Jam Berikutnya     | 3500         |\n\n");
    printf("Silakan pilih tipe kendaraan:\n");
    printf("A. Motor\n");
    printf("B. Mobil\n");
    printf("\n====================================\n");
}

void validasiTipeKendaraan(Parkir *parkir) {
    char tipe;
    do {
        printf("Masukkan pilihanmu (A atau B)\t: ");
        scanf(" %c", &tipe);
        tipe = toupper(tipe);
        if (tipe != 'A' && tipe != 'B') {
            system("cls");
            displayMenu();
            printf("Pilihan tidak valid. Mohon masukkan 'A' atau 'B'.\n");
        }
    } while (tipe != 'A' && tipe != 'B');
    setTipeKendaraan(parkir, tipe);
    
}

void validasiLamaParkir(Parkir *parkir) {
    char input[5];
    int jam = -1;
    
    do {
        printf("Masukkan lama parkir (jam)\t: ");
        scanf("%s", input);
        
        char *endptr;
        jam = strtol(input, &endptr, 10);
        if (*endptr != '\0' || jam <= 0) {
            system("cls");
            displayMenu();
            printf("Masukkan pilihanmu (A atau B)\t: %c\n", getTipeKendaraan(parkir));
            printf("Masukkan tidak valid. Harap masukkan angka positif.\n");
        }
    } while (jam <= 0);
    
    setLamaParkir(parkir, jam);
}

int hitungBiaya(Parkir parkir) {
    int fee = 0;
    
    if (getTipeKendaraan(&parkir) == 'A') {
        fee = 1000;
        if (getLamaParkir(&parkir) > 1) {
            fee += (getLamaParkir(&parkir) - 1) * 1500;
        }
    } else if (getTipeKendaraan(&parkir) == 'B') {
        fee = 3000;
        if (getLamaParkir(&parkir) > 1) {
            fee += (getLamaParkir(&parkir) - 1) * 3500;
        }
    }
    
    return fee;
}

void displayBiaya(Parkir parkir, int fee) {
    displayMenu();
    printf("Masukkan pilihanmu (A atau B)\t: %c\n", getTipeKendaraan(&parkir));
    printf("Masukkan lama parkir (jam)\t: %d\n", getLamaParkir(&parkir));
    printf("\nTotal biaya parkir: IDR %d\n", fee);
    printf("\n====================================\n");
    printf("\n");

    printf("\nklik apapun untuk mereset atau mengulang program\n");
    printf("klik 'Q' atau 'q' untuk keluar\n");

}
