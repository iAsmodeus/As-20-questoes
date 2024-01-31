#include <stdio.h>
#include <stdlib.h>

/*Ler um numero e imprimir se é maior que 20, igual a 20 ou menor que 20.*/
int main(){

    int num;

    printf("Digite um numero aqui:\n");
    scanf("%d", &num);
    if(num > 20)
    {
        printf("numero digitado eh maior que 20.\n");
    }else if(num < 20)
    {
        printf("numero digitado eh menor que 20.\n");
    }else
    {
        printf("numero digitado eh igual a 20.\n");
    }

    return 0;
}