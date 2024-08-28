#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,x;
    s=0;
    x=1;

    while (x<=49){
        s=s+x;
        x=x+2;
    }
    printf("Soma = %d",s);
    return 0;
}
