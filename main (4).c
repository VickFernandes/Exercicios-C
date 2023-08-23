/******************************************************************************
A – Faça um algoritmo que implemente um laço que 
leia X números inteiros e identifique 
qual o menor o maior e a media, 
quando o número informado for zero,
 interrompa o laço e exiba os valores.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, cont=0, maior, menor;
    float media =0;
    do{
        printf("Informe um numero:");
        scanf("%i", &numero);
        if(numero!=0){
            media = media + numero;
            cont++; //cont = cont + 1 
            if(cont==1){
                menor = numero;
                maior = numero;
            } else {
                if(numero<menor){
                    menor = numero ;
                }
                if(numero>maior){
                    maior = numero;
                }
            }
        }
    } while(numero !=0);
    media = media /cont;
    printf("Menor=%i, maior=%i, media=%f", menor, maior, media);
    
    return 0;
}
