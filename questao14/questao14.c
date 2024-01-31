#include <stdio.h>
#include <stdlib.h>

/*Ler um numero e, se for maior que 20, imprimir a metade desse numero*/



int main(){

    int num, result;

    printf("Digite um numero\n");
    scanf("%d", &num);
    if(num > 20){
        result = num / 2;
        printf("a metade do numero digitado eh: %d", result);
    }else
    {
        printf("o numero que voce digitou eh: %d", num);
    }

    return 0;
}