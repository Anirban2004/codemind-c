#include<stdio.h>
int main()
{
    float s,d,h,t;
    scanf("%f%f%f",&s,&d,&h);
    if(s<=10000)
    {
        d=(s*0.8);
        h=(s*0.2);
        t=s+d+h;
        printf("%.2f",t);
    }
    else if(s<=20000)
    {
        d=(s*0.9);
        h=(s*0.25);
        t=s+d+h;
        printf("%.2f",t);
    }
    else if(s>20000)
    {
        d=(s*0.95);
        h=(s*0.30);
        t=s+d+h;
        printf("%.2f",t);
    }
}
       