#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0,a[500],i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(a[i]+a[j]>a[k]){count++;}
            }
        }
    }

    printf("%d\n",count);

    return 0;
}
