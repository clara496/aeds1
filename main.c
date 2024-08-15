#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("Qual o primeiro numero?");
    scanf("%d",&x);

    printf("Qual o segundo numero?");
    scanf("%d",&y);

    if (x>y) {
            printf("%d maior que %d",x,y);
    }else if (x<y) {
            printf("%d menor que %d",x,y);
    }else {
            printf("%d igual a %d",x,y);
            }
    return 0;
}
