#include <stdio.h>

int main(){
    int a = 3;
    int *b = &a;    //pointer b mengambil alamat dari int a.
    int c = a;
    printf("nilai a = %d", a);
    a+=2;
    printf("\nnilai b = %d", *b);
    printf("\nnilai c = %d", c); 
    return 0;
}

/*
'*' digunakan untuk mengakses niai yangdisimpan di alamat memori yang ditunjuk oleh pointer.
'&' digunakan untuk mengembalikan alamat memori dari  variabel.
*/