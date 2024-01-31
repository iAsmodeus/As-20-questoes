#include <stdio.h>
#include <stdlib.h>  
    
    

    
int main(){
    char nome[40];
    int b;
    
    printf("Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.\nEscreva o seu nome aqui.\n");
    gets(nome);
    for(int a = 0; nome[a] != '\0'; a++)
    {
        b = a;
    }
    b--;
    for(int a = 0; a <= b; a++)
    {
        printf("%s\n", nome);
    }
    return 0;
}