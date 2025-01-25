#include <stdio.h>

void judul(){
    printf("PROGRAM FUNGSI VOID\n\n");
}

void kuadrat(int x){
    x *= x;
    printf("Nilai kuadratnya = %d\n", x);
}

int main(){
    int a;
    judul();
    printf("Masukkan : "); scanf("%d", &a);
    kuadrat(a);
    printf("Nilai input = %d\n", a);
    return 0;
}

//fungsi dimana seluruh tindakan dalam 'int maint()' dapat dilakukan.
//fungsi ini digunakan untuk menyingkat code dalam sebuah program yang memiliki sebuah syntax atau proses yang sama.