#include <stdio.h>

int main(){
    int x;
    x = 10;
    printf("%d\n", x);
    x += 2; // sama dengan x+2
    printf("%d\n", x);
    x -= 3; // sama dengan x-2
    printf("%d\n", x);
    x *= 2; // sama dengan x*2
    printf("%d\n", x);
    x %= 4; // sama dengan x%2
    printf("%d\n", x);

    //increment
    printf("\nprogram increment\n");
    x=1;
    x++;
    printf("%d\n", x);
    x=1;
    ++x;
    printf("%d\n", x);

    //decrement
    printf("\nprogram decrement\n");
    x=1;
    x--;
    printf("%d\n", x);
    x=1;
    --x;
    printf("%d\n", x);

    return 0;
}

//sebuah operasi yang digunakan dalam menyingkat sebuat operasi aritmatika.
//selain it, operasi ini juga sering digunakan untuk looping.