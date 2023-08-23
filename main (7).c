/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("usando for");
    int i, a, b, r;
    for(i=0; i<20; i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        r = a + b;
        printf("%d\n", r);
    }
    printf("\nusando do while");
    i=0;
    do{
        scanf("%d",&a);
        scanf("%d",&b);
        r = a + b;
        printf("%d\n", r);
        i++; // i = i + 1
    } while(i<20);
    printf("\nusando while");
    i=0;
    while(i<20){
        scanf("%d",&a);
        scanf("%d",&b);
        r = a + b;
        printf("%d\n", r);
        i++; // i = i + 1
    }   

    return 0;
}

