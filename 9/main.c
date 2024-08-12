#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,d,v;

    printf("Qual a distancia percorrida?");
    scanf("%d",&d);

    printf("Qual o valor da velocidade?");
    scanf("%d",&v);

    t=d/v;

    printf("Tempo de deslocamento = %d",t);

    return 0;
}
