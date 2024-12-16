#include <stdio.h>

int fungsi(int x, int y){
    int hasil;
    hasil = x * y;
    return hasil;
}

int main(){
    int a, b, hasil;
    printf("a : "); scanf("%d", &a);
    printf("b : "); scanf("%d", &b);
    hasil = fungsi(a,b);
    printf("y = a x b = %d", hasil);
    return 0;
}