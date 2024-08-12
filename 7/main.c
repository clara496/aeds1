#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v,t,d;

    printf("Qual a distancia do delocamento?");
    scanf("%d",&d);

    printf("Qual o tempo de duracao do deslocamento?");
    scanf("%d",&t);

    v=d/t;

    printf("\n Velocidade = %d",v);

    return 0;
}
