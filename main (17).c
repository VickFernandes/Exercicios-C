/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float notas[10][3], mediaSala=0;
    int i; 
    
    for(i=0; i<10; i++){
        printf("Informe a nota p1 e p2 do aluno %i:", i);
        scanf("%f %f", &notas[i][0], &notas[i][1]);
        notas[i][2] = (notas[i][0]+notas[i][1]) /2;
        mediaSala+=notas[i][2];
    }
    mediaSala=mediaSala/10;
    printf("\nMedia da sala=%f", mediaSala);
    for(i=0; i<10; i++){
        printf("\nAluno %i %f %f %f", i, notas[i][0], notas[i][1], notas[i][2]);
        if(notas[i][2]>=mediaSala) {
            printf(" * ");
        }
    }
    return 0;
}

