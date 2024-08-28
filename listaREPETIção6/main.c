#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,i,n;
    p=0;
    i=0;
    n=1;

    while (n<8) {
        printf("\nDigite um numero inteiro ---> ");
        scanf("%d",&n);

        if (n % 2 == 0){
            printf("\n  Numero par!!\n");
            p++;
        } else {
            printf("\n  Numero impar!!\n");
            i++;
        }
    }
        printf("\nTotal de numeros pares = %d\n",p);
        printf("\nTotal de numeros impares = %d\n",i);
    return 0;
}
