#include <stdio.h>

int main(){
    int angka [2][5] = {{1,2,3,4,5},
                        {6,7,8,9,10}};
    //mengambil sebagian data
    printf("mengambbil data = %d\n", angka [1][3]);
    //mengambil semua data
    for(int i = 0; i<2; i++){
        for(int j = 0; j<5; j++){
            printf("%d\t", angka[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//array multidimensi digunakan untuk menyimpan data dengan konsep matrik atau bisa dilihat seperti di atas.