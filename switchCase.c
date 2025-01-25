#include <stdio.h>

int main(){
    int x;
    printf("masukkan nilai x : ");
    scanf("%d", &x);
    switch(x){
        case 1:
        printf("x=1\n");
        break;
        case 2:
        printf("x=2\n");
        break;
        case 3:
        printf("x=3\n");
        break;
        default:
        printf("default");
    }
    return 0;
}

//pengondisian dengan menjalankan sebuah syntax sesuai syarat.
//berbeda dengan id else, switch case bernilai tetap bukan kisaran.