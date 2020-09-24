#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,x;
    scanf("%d",&N);
    x = (N % 1000);
    if(x>=1){printf("%d\n",(1000-x));}
    else{printf("0\n");}

    return 0;
}
