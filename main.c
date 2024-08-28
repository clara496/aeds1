#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cara,coroa,r,j;
    j=0;
    cara=0;
    coroa=0;

    while (j<5){
        printf("\nQual o resultado?\n(1)Cara\n(2)Coroa\n\n");
        scanf("%d",&r);

        if (r==1){
            cara++;
        } else {
            coroa++;
        }
        j++;
    }
        printf("\nCara = %d\n",cara);
        printf("\nCoroa = %d\n",coroa);

        if (cara>coroa){
            printf("\nMaior ocorrencia: Cara");
        } else if (cara<coroa) {
            printf("\nMaior ocorrencia: Coroa");
        }

    return 0;
}
