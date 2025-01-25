#include <stdio.h>

int main(){
    int x;
    printf("masukkan data x: ");
    scanf("%d", &x);
    if(x<=2){
        printf("x lebih kecil dari 2");
    }else if(x==2){
        printf("x sama dengan 2");
    }else{
        printf("x lebih besar dari 2");
    }
    return 0;
}

//sebuah pengondisian dengan mengeksekusi sebuah program sesuai dengan syarat yang tercantum.