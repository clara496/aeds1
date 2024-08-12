#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id1,id2,id3,m;

    printf("Qual a idade n1?");
    scanf("%d",&id1);

    printf("Qual a idade n2?");
    scanf("%d",&id2);

    printf("Qual a idade n3?");
    scanf("%d",&id3);

    m=(id1+id2+id3)/3;

    printf("Media das idades = %d",m);

    return 0;
}
