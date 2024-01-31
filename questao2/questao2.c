#include <stdio.h>
#include <stdlib.h>



int main()
{
    char nome[40];
    
    printf("Receber um nome e imprimir as letras na posicao impar.\nEscreva o seu nome aqui.\n");
    gets(nome);
    for(int a = 0; nome[a] != '\0'; a++)
    {
        a++;
        printf("%c", nome[a]);
    }
    return 0;
}