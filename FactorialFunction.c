#include<stdio.h>

int factorial(int a);
int main()
{
	int num , fact ;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	fact = factorial(num) ; 
	printf("The factorial value is : %d\n",fact);
	return 0;
}

int factorial(int a)
{
	int j , fact = 1 ; 
	
	for(j=1 ; j<=a ; j++)
	{
		fact = fact * j ;
	}
	
	return (fact);
}
