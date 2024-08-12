#include <stdio.h>
#include <stdlib.h>

int main()
{
   int d,v,t;

   printf("Qual o tempo de deslocamento?");
   scanf("%d",&t);

   printf("Qual a velocidade de deslocamento?");
   scanf("%d",&v);

   d=t*v;

   printf("Distancia = %d",d);

    return 0;
}
