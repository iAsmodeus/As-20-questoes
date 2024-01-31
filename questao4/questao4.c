#include <stdio.h>
#include <stdlib.h>



int main(){

char nome[40];

    printf("Escrever seu nome na tela 10 vezes. Um nome por linha.\nEscreva o seu nome aqui.\n");
    gets(nome);
    for(int a = 0; a < 10; a++)
    {
        printf("%s %d\n", nome,a);
    }
    return 0;
}