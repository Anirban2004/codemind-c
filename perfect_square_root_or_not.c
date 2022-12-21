#include<stdio.h>
#include<math.h>
void squ(int n)
{
    int sq,s;
    sq=sqrt(n);
    s=sq*sq;
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    squ(n);
}