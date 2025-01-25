#include <stdio.h>

int main(){
    int sn, n;
    int s0 = 0; 
    int s1 = 1;
    printf("Deret Fibonancci\nSuku ke-n : ");
    scanf("%d", &n);
    printf("suku ke 1 adalah %d\n", s1);
    for (int i = 1; i < n; i++){
        int m = i + 1;
        sn = s1 + s0;
        printf("suku ke %d adalah %d \n", m, sn);
        s0 = s1;
        s1 = sn;
    }
    return 0;
}

//sebuah deret dimana hasil dari 2 suku sebelumnya (sn=(s(n-1))+s(n-2)) dengan catatan s0=0 & s1=1.