/******************************************************************************

2- Dado o algoritmo abaixo escrito em C :

int x = 10;
while(x>0)
{
  prinf("%d",x);
  x--;
}
a- reescreva com o laço faça até (for)

b- reescreva com o laço faça enquanto (do while)
*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("\nenquanto ");
    int x = 10;
    while(x>0)
    {
      printf("%d ",x);
      x--;
    }
    printf("\nfaça enquanto ");
    x = 10;
    do{
        printf("%d ",x);
        x--;
    }while(x>0);
    
    printf("\nfaça ate ");
    for(x=10;x>0;x--){
        printf("%d ",x);
    }

    return 0;
}

