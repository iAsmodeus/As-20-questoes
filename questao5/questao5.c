#include <stdio.h>
#include <stdlib.h>




int main(){
    char nome[40], endereco[20], telefone[11], sexo = '\0';
    
    printf("Ler nome, endereço, telefone e imprimir\nEscreva as informacoes solicitadas.\nQual o seu nome?\n");
    gets(nome);
    printf("Seu endereco.\n");
    gets(endereco);
    printf("Qual a seu telefone?\n");
    scanf("%s", telefone);
    printf("seu genero(F para feminino, M para masculino e O para outros)\n"); 
    do 
    {   
        scanf("%c", &sexo);
        if(sexo == 'F' || sexo == 'M' || sexo == 'O')
        {
            break;
        }
        else
        {   
            printf("genero invalido, digite novamente.\n");
        }
    }while(sexo != 'F' || sexo != 'M' || sexo != 'O');
    printf("Seus dados:\nnome:%s\nendereco:%s\ntelefone:%s\nsexo:%c\n", nome, endereco, telefone, sexo);


    return 0;
}