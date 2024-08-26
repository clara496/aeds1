#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int cn = 1;

    while (cn <= 5) {
        printf("\nDigite um numero: ");
        scanf("%d", &n);

        if (n > 0) {
            if (n % 3 == 0) {
                printf("\nEh divisivel por 3.\n");
            } else {
                printf("\nNao eh divisivel por 3.\n");
            }
            cn++;
        } else {
            printf("Digite um numero inteiro positivo.\n");
        }
    }

    return 0;

}
