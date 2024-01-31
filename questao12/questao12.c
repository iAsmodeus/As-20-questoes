#include <stdio.h>
#include <stdlib.h>


/*Ler uma temperatura em graus Celsius e transforma-la em graus Fahrenheit*/

int main(){
    int C;
    float F;
    
    printf("Digite a temperatura em graus celsius:\n");
    scanf("%d", &C);
    F = C * 1.8 + 32;
    printf("A temperatura em fahrenheit eh de:%f\n", F);
    return 0;
}