#include <stdio.h>
#include <stdlib.h>

/*Solicitar salario e prestação. Se a prestação for maior que 20% do salario, imprimir:"Emprestimo 
não pode ser concedido." Senão, imprimir:"Emprestimo pode ser concedido."*/

int main(){

    int sa, p, result, c;

    printf("Digite aqui o seu salario:\n");
    scanf("%d", &sa);
    printf("Agora digite a prestacao:\n");
    scanf("%d", &p);
    result = sa * 0.20;
    if(p < result)
    {
        printf("Emprestimo pode ser concedido.");
    }else
    {
        printf("Emprestimo nao pode ser concedido.");
    }

    return 0;
}