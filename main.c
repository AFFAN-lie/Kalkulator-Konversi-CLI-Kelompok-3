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
