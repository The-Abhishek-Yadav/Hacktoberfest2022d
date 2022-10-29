#include<stdio.h>

int main()
 {
   int num,r,rev=0,r1,sum=0;
   
   printf("enter number\t");
   scanf("%d",&num);
   
   while(num>0)
   {
    r=num%10;
    rev=rev*10+r;
    num=num/10;
    }
      while(rev>9)
   {
    r1=rev%10;
    sum+=r1;
    rev=rev/10;
   }

   if(sum==rev)

     printf("Handsome number\n");
   else
     printf("Not Handsome number");

return 0;
    }
