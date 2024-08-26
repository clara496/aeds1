#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s;
    n=1;
    s=0;
    while (n<=10){
        s=s+n;
        printf("n=%d\n soma=%d\n",n,s);
        n=n+1;
    }
        printf("\nsoma total = %d \n",s);
    return 0;
}
