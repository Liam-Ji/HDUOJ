#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
     return *(int *)a-*(int *)b;//升序
}
int main()
{
    int a[110],b[110];
    int n,m,i,flag;
    while(~scanf("%d%d",&n,&m)&&(n||m))
    {
        for(i=0;i<n;i++)
        scanf("%d",a+i);
        for(i=0;i<m;i++)
        scanf("%d",b+i);
        qsort(a,n,sizeof(a[0]),cmp);
        qsort(b,m,sizeof(b[0]),cmp);
        flag=0;
        for(i=0;i<n;i++)
        {
            if(bsearch(a+i,b,m,sizeof(int),cmp)==0)
            flag=printf("%d ",a[i]);
        }
        printf(flag==0 ? "NULL\n" : "\n");
    }
    system("pause");
    return 0;
}