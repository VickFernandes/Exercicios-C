/******************************************************************************

3- Faça um laço que calcule a media de todos os números informados,
 a condição de termino do laço e quando for digitado ZERO
*******************************************************************************/
#include <stdio.h>

int main()
{
    float media=0, numero, cont=0;
    do{
        printf("informe um numero");
        scanf("%f", &numero);
        if(numero!=0){
            media+=numero; // medida = media +numero
            cont++; // cont = cont + 1
        }
    } while(numero!=0);
    media = media /cont;
    printf("A media=%f", media);
    return 0;
}

