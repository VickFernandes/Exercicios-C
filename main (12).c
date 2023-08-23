/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int continua, op;
    float saldo = 500, valor;
    do{
        printf("\nInforme a operacao a ser realizada 1-saldo, 2-Saque, 3-deposito:");
        scanf("%i", &op);
        
        switch(op){
            case 1:{
                printf("O saldo e =%.2f", saldo);   
                break;
            }    
            case 2:{
                printf("\nInforme o valor a ser sacado:");
                scanf("%f", &valor);
                if(valor <= saldo){
                    saldo = saldo - valor;
                    printf("\nSaque efetuado, saldo atual:%.2f", saldo);
                } else {
                    printf("\nSaldo insuficiente!");    
                }
                break;
            }
            case 3:{
                printf("\nInforme o valor a ser depositado:");
                scanf("%f", &valor);
                saldo = saldo + valor;
                printf("\nDeposito efetuado, saldo atual:%.2f", saldo);
                break;
            }
            default:{
                printf("\nop. invalida");
            }
        }
        
        printf("\nDeseja continuar 1-sim 0-nao");
        scanf("%i", &continua);
    } while(continua==1);

    return 0;
}

