#ifndef PARKINGSYS_H
#define PARKINGSYS_H

typedef struct {
    char tipeKendaraan;
    int lamaParkir;
} Parkir;

// Constructor
Parkir createParkir(Parkir parkir);

// Getter
char getTipeKendaraan(Parkir *parkir);
int getLamaParkir(Parkir *parkir);

// Setter
void setTipeKendaraan(Parkir *parkir, char tipeKendaraan);
void setLamaParkir(Parkir *parkir, int lamaParkir);

// Function Prototypes
void displayMenu();
void validasiTipeKendaraan(Parkir *parkir);
void validasiLamaParkir(Parkir *parkir);
int hitungBiaya(Parkir parkir);
void displayBiaya(Parkir parkir, int fee);

#endif

