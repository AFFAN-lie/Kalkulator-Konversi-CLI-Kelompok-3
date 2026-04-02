void konversiSuhu (){
    float celcius, kelvin;
    system("cls");
    printf("----------Program Konversi Suhu Celcius ke Kelvin----------\n");
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);
    kelvin = celcius + 273.15;
    printf("Suhu dalam Kelvin adalah: %.2fK\n", kelvin);
}
