#include <stdio.h>
#include <stdlib.h>

/*Calcular o consumo de um veiculo conforme os dados informados no teclado: 
tempo em horas, velocidade media e distancia*/



int main(){

    int t, velM, d, Lts;
    
    printf("Digite quantas horas o veiculo foi usado:\n");
    scanf("%d", t);
    printf("Agora digite a distancia percorrida:\n");
    scanf("%d", d);
    Lts =  d / t;
    printf("O consumo de em litros de gasolina é de: %d\n", Lts);

    return 0;
}