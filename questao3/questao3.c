#include <stdio.h>
#include <stdlib.h>


int main(){

    char nome[40];
    int b;

    printf(" Receber um nome do teclado e imprimí-lo de trás pra frente.\nEscreva o seu nome aqui.\n");
    gets(nome);
    for(int a = 0; nome[a] != '\0'; a++)
    {
        b = a;
    }
    for(int a = 0; nome[b] != nome[-1]; b-- )
    {
        printf("%c", nome[b]);
    }

    return 0;
}