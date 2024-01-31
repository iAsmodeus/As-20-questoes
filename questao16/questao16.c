#include <stdio.h>
#include <stdlib.h>


/*Ler 2 numeros inteiros e soma-los. Se a soma for menor que 10, mostrar o resultado da soma.*/


int main(){
    
    int num1, num2, result;

    printf("Digite os numeros que deseja somar:\n");
    scanf("%d\n", &num1);
    scanf("%d", &num2);
    result = num1 + num2;
    if(result < 10)
    {
        printf("o resultado dessa soma:%d\n", result);
    }else
    {
        printf("a soma desses numeros eh maior que 10\n");
    }
    
    return 0;
}