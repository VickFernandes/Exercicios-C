/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, produto , x;
    printf("Informe um numero:");
    scanf("%i", &numero);
    for(x=1; x<=10; x++){
        produto = x * numero;
        printf("%i X %i = %i\n",x,numero, produto);
    }

    return 0;
}

