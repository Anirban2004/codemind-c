#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a,s,d,b;
    if(n<=199)
    {
        a=n*1.20;
        b=a+100;

        printf("%.2f",b);
    }
    else if(n>=200 && n<400)
    {
        a=n*1.50;
        b=a+100;
        printf("%.2f",b);
    }
    else if(n>=400 && n<600)
    {
        a=n*1.80;
        s=(a/100)*15;
        d=a+s;
        printf("%.2f",d);
    }
    else if(n>=600)
    {
        a=n*2.00;
        s=(a/100)*15;
        d=a+s;
        printf("%.2f",d);
}
}
