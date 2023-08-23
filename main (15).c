/******************************************************************************


8- Crie um algoritmo onde será informado um valor
inteiro inicial,  e um laço o usuário devera informar
outro numero inteiro, 
o programa deverá responder se o numero atual 
e menor ou maior que o numero inicial informado, 
o laço somente será interrompido quando o numero atual
for igual ao número anterior informado. 
Exiba quantas tentativas foram necessárias 
para que o numero fosse descoberto.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeroA, numeroB, tentativas=0;
    printf("Informe o primeiro numero:");
    scanf("%i", &numeroA);
    
    do{
        printf("\nchute um numero:");
        scanf("%i", &numeroB);
        
        if(numeroA!=numeroB){
            if(numeroA>numeroB){
                printf("\nE maior");
            } else {
                printf("\nE menor");
            }    
            tentativas++;
        }    
    } while(numeroA!=numeroB);
    printf("\nAcertou em %i tentativas", tentativas);

    return 0;
}

