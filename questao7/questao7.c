#include <stdio.h>
#include <stdlib.h>


int main(){
    char nome[40];
    char id[]= "      ";
    int b = 0, cond = 0;

    printf("Digite um nome , calcule e mostre quantas letras tem.\nEscreva o seu nome aqui.\n");
    gets(nome);
    for(int a = 0; nome[a] != '\0'; a++)
    {
        b = a;
    }
    b++;
    //  for(int a = 0; nome[a] == 0x20; a++)
    // {
    //     cond++;
    // }
    printf("Seu nome tem %d letra(s)\n", cond);
    return 0;
}