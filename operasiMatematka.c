#include <stdio.h>

int main(){
    float x, y, hasil;
    printf("Hallo ini adalah program operasi matematika\n\n");
    printf("Masukkan nilai pertama: ");
    scanf("%f", &x);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &y);
    //operasi penjumlhan
    hasil = x + y;
    printf("%.1f + %.1f = %.1f\n", x, y, hasil);
    //operasi pengurangan
    hasil = x - y;
    printf("%.1f - %.1f = %.f\n", x, y, hasil);
    //operasi perkalian
    hasil = x * y;
    printf("%.1f x %.1f = %.1f\n", x, y, hasil);
    //operasi pembagian
    hasil = x / y;
    printf("%.1f / %.1f = %.1f\n", x, y, hasil);
    //operasi modulus
    int a, b, c;
    printf("Masukkan nilai pertama:");
    scanf("%d", &a);
    printf("Masukkan nilai kedua:");
    scanf("%d", &b);
    c = a % b;
    printf("%d mod %d = %d", a, b, c);
    return 0;
}

//operasi dasar matematika dalam pemrograman.