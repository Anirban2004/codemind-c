#include<stdio.h>
int main()
{
    int sp,cp;
    scanf("%d%d",&sp,&cp);
    if(sp-cp>=100)
    {
        printf("Loss");
    }
    else if(sp-cp<=100)
    {
        printf("Profit");
    }
}