#include<stdio.h>

int main()
{
 int i = 1 , num , product ;
 
 printf("Enter a number : ");
 scanf("%d",&num);

 while(i)
  {
   product = num * i ;
   printf("%d x %d = %d \n",num,i,product);
   i++;
  }

 return 0;
}

//infinte run