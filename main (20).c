/******************************************************************************

c – Construa um programa em C que utiliza uma matriz
10×3 que armazene as  temperaturas máxima e minima do dia, 
assim como a media de temperatura na ultima coluna.
Crie um menu de escolha que ofereça as seguintes 
informações:

1-temperatura minima de todos os dias.
2-temperatura máxima de todos os dias.
3-maior variação de temperatura de todos os dias.
4-Sair do programa.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float temp[10][3], menor, maior, var, maiorVar;
    int x, op;
    for(x=0;x<10;x++){
        printf("Informe a menor temp. da hora[%i]:", x);
        scanf("%f", &temp[x][0]);
        printf("Informe a maior temp. da hora[%i]:", x);
        scanf("%f", &temp[x][1]);
        temp[x][2] = (temp[x][0]+temp[x][1])/2;
        
        var = temp[x][1] - temp[x][0];
        if(x==0){
            menor=temp[0][0];
            maior=temp[0][1];
            maiorVar = var;
        } else {
            if(temp[x][0]<menor) menor = temp[x][0];
            if(temp[x][1]>maior) maior = temp[x][1];
            if(var>maiorVar) maiorVar = var;
        }
    }
    do{
        printf("\n1-temperatura minima de todos os dias.");
        printf("\n2-temperatura máxima de todos os dias.");
        printf("\n3-maior variação de temperatura de todos os dias.");
        printf("\n4-Sair do programa.");
        scanf("%i", &op);
        switch(op){
            case 1:{
                printf("\nmenor temperatura=%f", menor);
                break;
            }    
            case 2:{
                printf("\nmaior temperatura=%f", maior);
                break;
            }    
            case 3:{
                printf("\nmaior amplitude=%f", maiorVar);
                break;
            }
            default:{
                printf("\n op. invalida!");
            }
        }
    } while(op!=4);

    return 0;
}

