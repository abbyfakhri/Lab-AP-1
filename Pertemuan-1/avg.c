#include <stdio.h>

int main(){


        float angka1;
        float angka2;
        float angka3;
        float sum;

        printf("masukkan angka 1: ");
        scanf("%f",&angka1);
        printf("angka yang dimasukkan adalah: %.1f\n",angka1);


        printf("masukkan angka 2: ");
        scanf("%f",&angka2);
        printf("angka yang dimasukkan adalah: %.1f\n",angka2);


        printf("masukkan angka 3: ");
        scanf("%f",&angka3);
        printf("angka yang dimasukkan adalah: %.1f\n",angka3);

        sum = angka1 + angka2+angka3;
        
        float avg =  sum/3;

        printf("sum data: %.2f\n",sum);

        printf("rata-rata adalah: %.2f\n",avg);

        return 0;

}
