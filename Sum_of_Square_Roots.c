#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float p,s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        p=sqrt(i);
        s=s+p;
    }
    printf("%.2f",s);
}