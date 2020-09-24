#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int i,j,n,a[100000],sum=0;

    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        j = i+1;
        if(a[i]>=a[j])
        {
                sum = sum + (a[i]-a[j]);
                a[j]=a[j] +(a[i]-a[j]);

        }


    }
    printf("%lld\n",sum);
    return 0;
}
