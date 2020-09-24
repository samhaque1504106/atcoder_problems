#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int sum=0,len,i;
    char s[20000000];
    scanf("%s",s);
    len = strlen(s);
    for(i=0;i<len;i++)
    {
        sum = sum + s[i];
    }
    if(sum%9==0)
    {
        printf("Yes\n");
    }
    else printf("No\n");
    return 0;
}
