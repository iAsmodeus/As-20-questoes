#include <stdio.h>
#include <stdlib.h>



int main(){

char nome[40];

    printf("Receber um nome e imprimir as 4 primeiras letras do nome.\nEscreva o seu nome aqui.\n");
    scanf("%s", nome);
    for(int a = 0; nome[a] != nome[4]; a++)
    {
        printf("%c", nome[a]);
    }

    return 0;
}