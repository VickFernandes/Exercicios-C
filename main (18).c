/******************************************************************************

a- Faça um algoritmo que armazene um vetor de inteiros 
de 20 posições, identifique  o percentual de números 
impares e de números pares informados.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[20], resto2, x;
    float percPar=0, percImpar=0;
    
    for(x=0;x<20;x++){
        printf("Informe o valor para o numero %i:",x);
        scanf("%i", &vetor[x]);
        resto2 = vetor[x] % 2;
        if(resto2==0){
            percPar++;
        } else {
            percImpar++;
        }
    }
    percPar = (percPar /20)*100;
    percImpar = (percImpar / 20)*100;
    printf("Par %.2f, impar %.2f", percPar, percImpar);

    return 0;
}

