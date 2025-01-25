#include <stdio.h>

int main(){
    //mngambil satu array string
    char kata[] = "Tersedia:";
    printf("\n%s", kata);
    //mengambil beberapa array string
    char strArray[2][100]= {"matcha","coklat"};
    for(int i=0; i<2; i++){
    printf("\n%d. Rasa %s", (i+1),strArray[i]);
    }
    return 0;
}

//cara menyimpan array dalam data string (kumpulan beberapa char).
//char namaVar[jmlString] [maxhuruf] = {"kata 1","kata 2"}.