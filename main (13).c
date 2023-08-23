/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float graos=1, ton;
    int i;
    
    for(i=1; i<64; i++){
        printf("%f \n", graos);
        graos = graos + (graos*2);
    }
    ton = (graos/100000)/1000;
    printf("toneladas %.0f", ton);
    return 0;
}

