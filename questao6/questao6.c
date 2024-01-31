#include <stdio.h>
#include <stdlib.h>


int main(){
    char nome[40]; 
    char sexo;
    int idade;

    printf("Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. Imprimir o nome da pessoa e a palavra ACEITA. Caso contrario imprimir NAO ACEITA.\nEscreva as informacoes solicitadas.\nQual o seu nome?\n");
    gets(nome);
    printf("seu genero(F para feminino, M para masculino e O para outros)\n");
    scanf("%c", &sexo);
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    if(sexo == 'M' && idade > 24)
    {
        printf("%s, ACEITA\n", nome);
    }
    else
    {
        printf("NAO ACEITA\n");
    }

    return 0;

}