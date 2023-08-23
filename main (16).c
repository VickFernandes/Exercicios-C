/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float medias[10], mediaSala=0;
    int i;
 
    
    for(i=0;i<10;i++){
        printf("Informe a media do aluno %i ", i);
        scanf("%f", &medias[i]);
        mediaSala+= medias[i]; //mediaSala = mediaSala + medias[i]
    }
    mediaSala = mediaSala /10;
    printf("\nmedia da sala=%f",mediaSala);
    for(i=0;i<10;i++){
        if(medias[i]>=mediaSala){
        printf("\nAluno acima da media %i %f",i, medias[i]);
        }
    }
    

    return 0;
}

