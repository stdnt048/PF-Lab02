#include<stdio.h>
#include<stdlib.h>

int main()
{
 int choice , num , fact = 1 , i ; 

 do{
	printf("\n 1.Prime Number \n 2. Factorial \n 3.Odd / Even \n 4.exit\n");
	printf("choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter a number : ");
			scanf("%d",&num);

			for(i=2;i<=num-1;i++)
			{
				if(num % i == 0)
				{
				printf("This number is not a prime number\n");
				break;
				}
			}
			
			if(i == num )
				printf("This number is a prime number\n");
			break;
		
		case 2:
			printf("Enter a number : ");
			scanf("%d",&num);

			for(i=1;i<=num;i++)
			fact = fact * i ;
			
			printf("the factorial of the number is : %d \n",fact);
			break;

		case 3 : 
			printf("Enter a number : ");
			scanf("%d",&num);

			if(num % 2 == 0)
			printf("The number is even\n ");
			else 
			printf("The number is Odd\n ");

			break;

		case 4: 
			exit (0);

		default: 
			printf("Invalid Choice");
	} 
}while(choice != 4);
	
 return 0;
}