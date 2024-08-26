#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,n,d;
    n=1;
    d=1;
    s=0;

    do {
        s=s+n/d;
        n=1;
        d=d+1;
    }
    while (d<=40);
    printf("Soma = %.2f",s);
    return 0;
}
