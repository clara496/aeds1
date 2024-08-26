#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nh,nm,cn,g;
    float m,p,s;
    cn=0;
    s=0;
    nm=0;
    nh=0;
    while (cn<5){
        printf("\nVoce eh:\n(1)Homem\n(2)Mulher\n");
        scanf("%d",&g);

        printf("\nQual o seu peso?\n");
        scanf("%f",&p);

        cn=cn+1;
        s=s+p;

    if (g==1){
        nh++;
    } else if (g==2){
        nm++;
      }
    }
        m=s/5;

        printf("\nNumero de homens = %d\n",nh);
        printf("\nNumero de mulheres = %d\n",nm);
        printf("\nMedia do peso do grupo = %.2f\n",m);

    if (nh>nm){
        printf("\nO grupo tem mais homens que mulheres.");
    } else if (nh<nm){
        printf("\nO grupo tem mais mulheres que homens.");
    } else (nm=nh);{
        printf("\nO numero de mulheres eh igual ao numero de homens.");
    }

    return 0;
}
