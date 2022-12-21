#include<stdio.h>
int main()
{
    int i,n,m,l,k;
    scanf("%d%d%d",&n,&m,&l);
    for(i=m;i<=l;i++)
    {
        k=n*i;
        printf("%d x %d = %d
",n,i,k);
    }
    
}