#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int i,j,n,a[n],b=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            b = b + (a[i]%10)*(a[j]%10);

       }

    }
    printf("%lld\n",b);

    return 0;
  }
