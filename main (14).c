/******************************************************************************

7- Faça um algoritmo que conte de 1 a 100 e 
a cada múltiplo de 3 e 5 simultaneamente emita 
uma mensagem:  “Múltiplo de 3 e 5”.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int x=1, resto3, resto5;
   
   while(x<100){
       resto3 = x % 3;
       resto5 = x % 5;
       if(resto3==0 && resto5==0){
            printf("%i ", x);
       }
       x++;
   }

    return 0;
}

