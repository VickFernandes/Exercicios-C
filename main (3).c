/******************************************************************************
1) faça um algoritmo que simule o funcionamento de um caixa eletrônico, onde será apresentado uma lista de operações:

1-Saldo
2-Saque
3-Deposito
Ao iniciar o programa determine um valor inicio para a variável saldo, se o cliente escolher a opção 1 mostre o valor do saldo, caso escolha o valor 2 leia o valor a ser sacado e verifique se existe saldo suficiente, se o saldo for maior ou igual , deduza da variável saldo o valor solicitado, caso não haja saldo suficiente mostre a mensagem “Saldo Insuficiente”, caso a opção 3 seja escolhida adicione o valor informado de deposito ao saldo.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float saldo =1000, valor;
    int op;
    
    printf("Informe a operacao a ser realizada 1-saldo, 2-Saque, 3-deposito:");
    scanf("%i", &op);
    
    switch(op){
        case 1:{
            printf("O saldo e =%.2f", saldo);   
            break;
        }    
        case 2:{
            printf("Informe o valor a ser sacado:");
            scanf("%f", &valor);
            if(valor <= saldo){
                saldo = saldo - valor;
                printf("Saque efetuado, saldo atual:%.2f", saldo);
            } else {
                printf("Saldo insuficiente!");    
            }
            break;
        }
        case 3:{
            printf("Informe o valor a ser depositado:");
            scanf("%f", &valor);
            saldo = saldo + valor;
            printf("Deposito efetuado, saldo atual:%.2f", saldo);
            break;
        }
        default:{
            printf("op. invalida");
        }
    }

    return 0;
}
