#include<stdio.h>
int main()
{
    int n,o,rem,p=1,s=0,tc;
    scanf("%d",&n);
    o=n;
    while(o!=0)
    {
        rem=o%10;
        p=p*rem;
        s=s+rem;
        o=o/10;
    }
    tc=p-s;
    printf("%d",tc);
}