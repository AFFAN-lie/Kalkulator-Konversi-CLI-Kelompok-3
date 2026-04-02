#include <stdio.h>
#include <stdlib.h>
void konversiSuhu();
void konversiJarak();
void konversiBerat();
void konversiWaktu();
int main() {
    int pilihan;
    char lanjut;

    do {
        // Tampilan Menu Utama
        printf("\n====================================\n");
        printf("   KALKULATOR KONVERSI SATUAN CLI   \n");
        printf("====================================\n");
      printf("Pilih 1-4:\n");
        printf("1. Konversi Suhu (Celcius ke F/K)\n");
        printf("2. Konversi Jarak (KM ke M/CM)\n");
        printf("3. Konversi Berat (KG ke G/Pons)\n");
        printf("4. Konversi Waktu (Jam ke M/D)\n");
        printf("------------------------------------\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);

        // Memanggil fungsi berdasarkan pilihan
        switch(pilihan) {
            case 1: konversiSuhu(); break;
            case 2: konversiJarak(); break;
            case 3: konversiBerat(); break;
            case 4: konversiWaktu(); break;
            default: printf("\nPilihan tidak valid!\n");
        }

        // Fitur Looping
        printf("\nApakah Anda ingin mencoba konversi lain? (y/n): ");
        scanf(" %c", &lanjut); // Spasi sebelum %c untuk menangkap karakter 'enter'

    } while (lanjut == 'y' || lanjut == 'Y');

    printf("\nTerima kasih! Program selesai.\n");
}
void konversiSuhu (){
    float celcius, kelvin;
    system("cls");
    printf("----------Program Konversi Suhu Celcius ke Kelvin----------\n");
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);
    kelvin = celcius + 273.15;
    printf("Suhu dalam Kelvin adalah: %.2fK\n", kelvin);
}
