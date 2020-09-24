#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,count=0,a[100];
    scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2==1 && i%2==1)
    {
        count++;
    }
    }

    printf("%d\n",count);

    return 0;
}
