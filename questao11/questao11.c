#include <stdio.h>
#include <stdlib.h>


/* Calculo de salario de um professor. Serão fornecidos 
valor da hora aula, número de aulas dadas e % de desconto do INSS*/




int main(){
    float result2, INSS, valorA, dAulas, result;
    
    printf("Digite aqui o valor da aula por hora:\n");
    scanf("%f", &valorA);
    printf("Digite quantos dias de aulas foram dados:\n");
    scanf("%f", &dAulas);
    result = valorA * (dAulas * 5);
    if(result <= 1320)
    {   
        INSS = result * 0.075;
        result2 = result - INSS;
        printf("o desconto do INSS sera de 7,5 porcento\nDe aproximadamente %f\nSeu salario com os descontos sera de %f", INSS, result2);
    }else if(result >= 1320.01 && result <= 2571.29)
    {
        INSS = result * 0.09;
        result2 = result - INSS;
        printf("o desconto do INSS sera de 9 porcento\nDe aproximadamente %f\nSeu salario com os descontos sera de %f", INSS, result2);
    }else if(result >= 2571.30 && result <= 3856.94)
    {
        INSS = result * 0.12;
        result2 = result - INSS;
        printf("o desconto do INSS sera de 12 porcento\nDe aproximadamente %f\nSeu salario com os descontos sera de %f", INSS, result2);
    }else if( result > 3856.94)
    {
        INSS = result * 0.14;
        result2 = result - INSS;
        printf("o desconto do INSS sera de 14 porcento\nDe aproximadamente %f\nSeu salario com os descontos sera de %f", INSS, result2);
    }
    
    return 0;
}