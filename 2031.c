#include <stdio.h>
int main()
{
    int n,r,i,x,flag;
    int a[1000];
    while (scanf("%d %d",&n,&r)!=EOF)
    {
        flag=0;
        if (n<0)
        {
            n=-n;
            flag=1;
        }
        x=0;
        while (n)
        {
            a[x]=n%r;
            n/=r;
            x++;
        }
        while (x--)
        {
            if (flag)
            {
                printf("-");
                flag=0;
            }
            if (a[x]<10)
                printf("%d",a[x]);
            else printf("%c",55+a[x]);
        }
        printf("\n");
    }
    return 0;
}