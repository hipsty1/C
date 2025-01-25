#include <stdio.h>

int main(){
    int bb[5] = {100,50,80,60,70};
    for(int i=1; i<=5; i++){
        printf("\nBerat ke-%d : %dkg", i,bb[i-1]);
    }
    return 0;
}

//array dapat menyimpan banyak data dengan tipe sama (int, float, char) dalam satu variabel seperti diatas.