
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
void konversiJarak (){
    int n, hasil;

    printf("\n====================================\n");
    printf("   KONVERSI KILOMETER KE METER\n");
    printf("====================================\n");

    printf("Masukkan jarak (km) : ");
    scanf("%d", &n);

    hasil = n * 1000;

    printf("\n------------------------------------\n");
    printf("Hasil konversi:\n");
    printf("%d km = %d meter\n", n, hasil);
    printf("------------------------------------\n\n");

}
void konversiBerat() {
    float kg, gram;

    printf("========================================\n");
    printf("       PROGRAM KONVERSI BERAT           \n");
    printf("========================================\n");

    printf(" Masukkan berat (kg) : ");
    if (scanf("%f", &kg) != 1) {
        printf("\n [!] Error: Input harus berupa angka.\n");
        return 1;
    }

    gram = kg * 1000;

    printf("----------------------------------------\n");
    printf(" HASIL KONVERSI:\n");
    printf(" > %.2f kg  =  %.0f gram\n", kg, gram);
    printf("----------------------------------------\n");
    printf("       Terima kasih telah menggunakan!  \n");
    printf("========================================\n");
}


void konversiWaktu() {
    float jam, menit, detik;

    printf("\n--- KONVERSI WAKTU ---\n");
    printf("Masukkan durasi dalam JAM: ");
    
    // Validasi input
    if (scanf("%f", &jam) != 1) {
        printf("Error: Masukkan angka yang valid!\n");
        while(getchar() != '\n'); // Membersihkan buffer input
        return 1;
    }

    // Validasi nilai tidak boleh negatif
    if (jam < 0) {
        printf("Error: Waktu tidak boleh negatif!\n");
        return 1;
    }

    // Perhitungan
    menit = jam * 60;
    detik = jam * 3600;

    // Menampilkan hasil
    printf("\nHasil Konversi dari %.2f Jam:\n", jam);
    printf("> Menit : %.0f Menit\n", menit);
    printf("> Detik : %.0f Detik\n", detik);
    printf("----------------------\n");

}
