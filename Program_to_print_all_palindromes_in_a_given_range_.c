#include<stdio.h>
int main()
{
    int n,m,o,rem,i,rev;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        o=i;
        rev=0;
        while(o)
        {
        rem=o%10;
        o=o/10;
        rev=(rev*10)+rem;
        }
    if(i==rev)
    {
        printf("%d ",i);
    }
    }
}
