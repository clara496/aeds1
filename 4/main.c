#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,c,l;

    printf("Qual a largura da piscina?");
    scanf("%d",&l);

    printf("Qual o comprimento da piscina?");
    scanf("%d",&c);

    a=c*l;

    printf("\n Area da piscina = %d", a);

    return 0;
}
