#include <iostream>
#include <stdio.h>
#include <conio.h>


using namespace std;


int main(){

    // contoh input dan output pada int, float, char, string (C)

    int angkaBulat;
    float angkaDecimal;
    char karakter;

    // string pada C
    char sebuahString[100];

    // input data
    printf("masukkan bilangan bulat: ");
    scanf("%i",&angkaBulat);

    /* 

        gunakan %*c agar ketika kita menginput data tidak terjadi skip

        contoh: 
        %f%*c
        %s%*c

            %*c -> bertujuan untuk menghapus buffer input dari data sebelumnya

            penyebab skip input adalah karena pada saat kita memasukkan data baru,
            data dari input sebelumnya masih tersimpan pada memori

            data sebelumnya char, data setelahnya string jika tidak di clear menggunakan %*c dulu
            maka akan terjadi skip input

     */
    printf("masukkan bilangan decimal: ");
    scanf("%f%*c",&angkaDecimal);


    /* 
        untuk input karakter,
        kombinasikan scanf dengan getchar() 
        nb: jangan lupa gunakan header conio.h untuk sebelum menggunakan getchar()
     */ 

    printf("masukkan karakter: ");
    scanf("%c%*c",&karakter);
    //karakter = getchar();

    /* 
        gunakan fgets jika ingin input string yang memiliki spasi

        cara menggunakan
        fgets(namaVariabel,panjangString,stdin);
     */
    printf("masukkan sebuah kalimat: ");
    //scanf("%s",sebuahString);
    fgets(sebuahString, 100, stdin);

    // OUTPUT
    printf("bilangan bulat: %i\n",angkaBulat);
    printf("bilangan decimal: %f\n",angkaDecimal);
    printf("karakter: %c\n",karakter);
    printf("contoh kalimat: %s\n",sebuahString);

    printf("\n");
    printf("CONTOH MULTIPLE OUTPUT:");    

    // Tambahan, MULTIPLE OUTPUT
    char kata1[] = "BTS";
    char kata2[] = "SUCKS";
    char kata3[] = "just kidding";

    printf("i've been holding this opinion for a long time, i just wanna say that %s is %s, %s\n",kata1,kata2,kata3);


    // konversi C++ string ke C string (char[])
    string stringLagi = "asmalibrasi";

    // gunakan c_str()
    const char *string_Lagi_Tapi_Buat_C = stringLagi.c_str();
    printf("hasil: %s",string_Lagi_Tapi_Buat_C);

    printf("\n");


}