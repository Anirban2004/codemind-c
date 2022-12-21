#include<stdio.h>
int main()
{
    int n,sum=0,p,c,tc,i,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=i*i;
        sum=sum+p;
        s=n*(n+1)/2;
        c=s*s;
        tc=c-sum;
    }
    printf("%d",tc);
}