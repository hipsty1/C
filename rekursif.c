#include <stdio.h>

int pangkatRek(int x, int y){
    if(y<=1){
        return x;
    } else {
        return x * pangkatRek(x,(y-1));
    }
}

int main(){
    int nilai, pangkat;
    printf("Masukkan nilai  : "); scanf("%d", &nilai);
    printf("Masukkan pangkat: "); scanf("%d", &pangkat);
    printf("Hasil: %d", pangkatRek(nilai, pangkat));
    return 0;
}

//fungsi yang memanggil fungsi itu sendiri secara berulang.