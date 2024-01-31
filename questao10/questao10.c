#include <stdio.h>
#include <stdlib.h>



int main()
{
    char nome[40];
    int cond = 0;
    
    printf("Receber um nome no teclado e imprimir quantas letras 'A' tem o nome.\nEscreva o seu nome aqui.\n");
    gets(nome);
    for(int a = 0; nome[a] != '\0'; a++)
    {
        if(nome[a] == 'A' || nome[a] == 'a')
        {
            cond++;
        }
    }
    printf("A letra A aparece nesse nome %d (uma )vez(es)", cond);
    return 0;
}