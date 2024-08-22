#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, n;
    int r;

    printf("Qual o salario atual?\n");
    scanf("%f",&a);

    printf("Escolha o calculo que quer fazer em seu salario\n");
    printf("(1) Aumento de 8%% no salario\n");
    printf("(2) Aumento de 11%% no salario\n");
    printf("(3) Aumento fixo no salario\n");
    scanf("%d", &r);

    switch(r){
    case 1:
        n = a * 1.08;
        printf("Seu novo salario com aumento de %8 e de %.2f reais \n", n);
        break;

    case 2:
        n = a * 1.11;
        printf("Seu novo salario com aumento de %11 e de %.2f reais \n", n);
        break;

    case 3:
            if (a <= 1000) {
                 n = a + 350;
            } else {
                n = a + 200;
            }
            printf("Novo salario com aumento fixo: %.2f\n", n);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
    return 0;
}
