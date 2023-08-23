/******************************************************************************

4- faça um laço “faça até” com 10 interações, 
verifique quantas vezes números múltiplos de 2 e de 3 
são informados

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, resto2, resto3, numero;
    
    for(x=0;x<10;x++){
        printf("\nInforme um numero:");
        scanf("%i", &numero);
        resto2 = numero % 2;
        resto3 = numero % 3;
        if(resto2==0 && resto3==0){
            printf("\nmultiplo de 2 e 3 %i", numero);
        }
    }
    return 0;
}

