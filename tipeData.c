#include <stdio.h>

int main(){
    int x; //angka benilai bulat
    float y; //angka bernilai desimal
    char z; //karakter
    /*
    cara output int (%d)
    cara output float (%f)
    cara output char (%c)
    */
    //deklarasi
    x = 10;
    y = 11.5;
    z = 'a'; //menggunakan tanda petik satu
    //output
    printf("angka %d\ndesimal %.2f\nkarakter %c", x, y, z);
    //untuk type float dapat menggunakan (.) untuk mnentukan jumlah angka dibelakang koma
    return 0;
}

//tipe data dasar pada pemrograman.