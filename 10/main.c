#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,d,e,cd,ce;

    printf("Insira o valor,em reais, que sera convertido:");
    scanf("%f",&r);

    printf("Qual o valor atual do dolar?");
    scanf("%f",&d);

    printf("\n Qual o valor atual do euro?");
    scanf("%f",&e);

    ce=r/e;
    cd=r/d;

    printf("\n Conversao para euro = %.2f",ce);
    printf("\n Conversao para dolar = %.2f",cd);



    return 0;
}
