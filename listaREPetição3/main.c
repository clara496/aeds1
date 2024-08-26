#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,s;
    x=1;
    y=1;
    s=0;

    while (y<=50){
        s=s+x/y;
        x=x+2;
        y=y+1;
    }
        printf("Soma = %.2f",s);
    return 0;
}
