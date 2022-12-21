#include<stdio.h>
int main()
{
    int n,m,l,k;
    scanf("%d%d",&n,&m);
    l=(n>m)?m:n;
    k=l;
    while(1)
    {
        if(l%n==0&&l%m==0)
        {
            printf("%d",l);
            break;
        }
        l+=k;
    }
}