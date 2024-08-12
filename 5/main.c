#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,l;

    printf("Qual o valor do lado do cubo?");
    scanf("%d", &l);

    a=(l*l)*6;

    printf("\n Area do cubo = %d", a);

    return 0;
}
