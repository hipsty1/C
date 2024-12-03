#include <stdio.h>

/*
or --> ||
and--> &&
not--> !
*/

int main(){
    //penggunaan or
    int x=5;
    if(x<6 || x>4){
        printf("true\n");
    }else{
        printf("false\n");
    }

    //penggunaan and
    int y=5;
    if(y<6 && y>4){
        printf("true\n");
    }else{
        printf("false\n");
    }

    //penggunaan not
    int z=5;
    if(!(z>4)){
        printf("true\n");
    }else{
        printf("false\n");
    }
}