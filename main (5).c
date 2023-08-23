/******************************************************************************
Elabore um algoritmo que gere e escreva 
os números ímpares dos números entre 100 e 200.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, resto2, x=100;
    
    while(x<=200){
        resto2 = x % 2;
        if(resto2==1){
            printf("%i ", x);
        }
        x++;
    }
    return 0;
}
