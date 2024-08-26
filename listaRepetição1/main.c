#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nt,s,cn;
    float m;
    s=0;
    cn=0;

    while(cn<10){
        printf("Qual sua nota?\n");
        scanf("%d",&nt);
        cn=cn+1;
        s=s+nt;
    }
        m=s/10;
        printf("\nMedia da turma = %.2f\n",m);
    return 0;
}
