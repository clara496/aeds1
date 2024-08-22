#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v,vc,ex;

    printf("Qual a velocidade maxima na avenida em Km por H?  ");
    scanf("%d",&v);

    printf("Qual a velocidade que o motorista estava dirigindo?  ");
    scanf("%d",&vc);

    ex=vc-v;

    if (ex<=0){
        printf("\n\nMotorista respeitou a lei!!");
    } else if (ex>0 && ex<=10){
        printf("\n\nMotorista nao respeitou a lei. Multa = 50 reais");
    } else if (ex>10 && ex<=30){
        printf("\n\nMotorissta nao respeitou a lei. Multa = 100 reais");
    } else if (ex>30){
        printf("Motorista nao respeitou a lei. Multa = 200 reais");
    }

    return 0;
}
