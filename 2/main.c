#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ma,ta,no,m;

    printf("Qual a temperatura as 09:00:");
    scanf("%d",&ma);

    printf("Qual atemperatura as 13:00:");
    scanf("%d",&ta);

    printf("Qual a temperatura as 20:00:");
    scanf("%d",&no);

    m=(ma+ta+no)/3;

    if (m<=10){
        printf("Temperatura media:%d graus Muito Frio!", m);
    } else if (m>10 && m<=20){
        printf("Temperatura media:%d graus Frio!", m);
    } else if (m>20 && m<=30){
        printf("Temperatura media:%d graus Quente!", m);
    } else if (m>30){
        printf("Temperatura media:%d graus Muito quente!", m);
    }
    return 0;
}
