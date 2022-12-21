#include<stdio.h>
int main()
{
    int a,b,rem,s=0;
    scanf("%d",&a);
    b=a*a;
    while(b!=0)
    {
        rem=b%10;
        b=b/10;
        s=s+rem;
    }
    if(s==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}