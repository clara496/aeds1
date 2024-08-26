#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,m,s,cn;
    s=0;
    cn=0;
    x=1;

    while (x<=5){
        printf("Qual o valor?\n");
        scanf("%d", &x);
        s=s+x;
        cn=cn+1;
    }
        m=s/5;
        printf("Media total = %d",m);
    return 0;
}
