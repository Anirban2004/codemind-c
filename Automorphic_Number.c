#include<stdio.h>
int main()
{

      int temp,s,count=1,n;
      scanf("%d",&n);
       temp=n;
     s=n*n;
      while(n!=0)
     {
          count=count*10;
          n=n/10;
     }
      if(s%count==temp)  
      {
           printf("Automorphic Number");
      }
      else
      {
           printf("Not an Automorphic Number");
      }
}  

