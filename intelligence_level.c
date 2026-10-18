#include<stdio.h>

int main()
{
 float i , y = 1 , x = 5.5 ;
 

 while(y<=6)
 {
  for(x=5.5;x<=12.5;x=x+0.5)
  {
   i = 2 + (y + 0.5*x) ; 
   printf("%.2f\t%.2f\t%.2f\n",i,y,x) ;
  }
 
 y++;

 }
 return 0;
}
 