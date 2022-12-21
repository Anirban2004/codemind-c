#include<stdio.h>
int main()
{
    int n,f,rev=0,p,e=0,d,l,z;
    scanf("%d",&n);
    f=n*n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    l=rev*rev;
    while(l!=0)
    {
    
        e=e*10+(l%10);
        l=l/10;
    }
    if(e==f)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}