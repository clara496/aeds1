#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    float s;
    s=0;
    y=1;

    while (y<=10){
        s=s+1.0/y;
        y=y+1;
    }
    printf("Soma = %.4f",s);
    return 0;
}
