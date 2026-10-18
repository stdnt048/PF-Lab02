#include<stdio.h>

int main()
{
 int choice , quantity = 0 , c_quantity , total = 0 , c_total , f_total , discount ; 

 do {
 printf("--------------------------------------\n");
 printf("CHOICE\t\tITEM\t\tPRICE\n");
 printf("--------------------------------------\n");
 printf("1\t\tTea\t\tRs60\n");
 printf("2\t\tSamosa\t\tRs40\n");
 printf("3\t\tsandwich\tRs180\n");
 printf("4\t\tCheckout\t-\n");
 printf("--------------------------------------\n");

 printf("Choose : ");
 scanf("%d",&choice);

 if(choice <= 3 && choice >=1)
 {
  printf("Enter Quantity : ");
  scanf("%d",&c_quantity);
 
  if(choice == 1)
    c_total = 60 * c_quantity ;
  else if(choice == 2 )
    c_total = 40 * c_quantity ;
  else if(choice == 3 )
   c_total = 180 * c_quantity ;
    
    total = total + c_total ;
    quantity = quantity + c_quantity ;
    printf("current bill : %d \n",total);
  }
 else if(choice<1 || choice > 4)
  printf("Invalid choice\n");
 
 }while(choice != 4 );

if(total>1000)
 discount = total * 10 / 100;
else 
discount = 0 ;

f_total = total - discount ;

printf("----------\n"); 
printf("BILL\n"); 
printf("----------\n"); 
printf("Total amount : %d \n",f_total);
printf("Total items : %d \n",quantity);

 return 0;
}