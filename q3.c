#include<stdio.h>

int main()
{
int pin = 4321 , entered ; 
int attempt = 1;

do{
printf("Enter the pin : ");
scanf("%d",&entered);
if(entered==pin)
{
 printf("Access granted\n");
 break;
}
else 
printf("You have %d attempts left \n",3-attempt);

if(attempt==3 && entered!=pin)
printf("Account Access Blocked !! \n");

attempt++;
}while(attempt<=3);

return 0;
}
