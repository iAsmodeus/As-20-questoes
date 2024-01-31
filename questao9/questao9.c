#include <stdio.h>
#include <stdlib.h>



int main(){
    char msg[100];
    char vogs[] = " aeiouAEIOU";
    int  cond = 0;
    
    printf(" Receber do teclado uma mensagem e imprimir quantas letras A, E, I, O, U tem esta mensagem. Considerar minúscula e maiúscula.\ndigite uma mensagem aqui\n");
    gets(msg);
    for(int a = 0; msg[a] != '\0'; a++)
    {   for(int x = 0; vogs[x] != '\0'; x++)
        {
            if(msg[a] == vogs[x])
            {
                cond++;
                break;
            }
        }
    }
    printf("As vogais aparecem na frase %d (uma) vez(es)", cond);
    return 0;
}
    