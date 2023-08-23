/******************************************************************************

d – Crie um programa que armazene em uma matriz 10×3 
em cada uma das colunas armazene o tamanho de uma aresta
de um triangulo, ao final exiba o percentual de triângulos
isoceles, equiláteros e escalenos
*******************************************************************************/
#include <stdio.h>

int main()
{
    float arestas[10][3];
    float percIso=0, percEqui=0, percEsc=0;
    int x;
    for(x=0;x<10;x++){
        printf("Informe as tres arestas do triangulo[%i]:",x);
        scanf("%f %f %f",&arestas[x][0],&arestas[x][1],&arestas[x][2]);
        if(arestas[x][0]==arestas[x][1] && arestas[x][1]==arestas[x][2]){
            percEqui++;
        } else {
            if(arestas[x][0]==arestas[x][1] || arestas[x][0]==arestas[x][2] || arestas[x][1]==arestas[x][2])    
            {
              percIso++;  
            } else {
                percEsc++;    
            } 
        }
    }
    percEqui = (percEqui / 10)*100;
    percEsc = (percEsc / 10)*100;
    percIso = (percIso / 10)*100;
    printf("equilateros=%.2f, isoceles=%.2f, escalenos=%.2f",percEqui, percIso, percEsc);
    
    return 0;
}

