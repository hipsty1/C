#include <stdio.h>

int main(){
    int i;
    for (i=1; i<=10; i++){
        if(i==3)continue;
        if(i==7)break;
        printf("Looping ke-%d\n", i);
    }
    printf("end");
    return 0;
}

/*
continue digunakan untuk melanjutkan program tanpa mengeksekuis syntax continue.
break digunakan untuk meberhentikan sebuah program.
*/