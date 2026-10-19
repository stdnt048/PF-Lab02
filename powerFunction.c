#include<stdio.h>

int power(int a , int b);

int main()
{
	int num , exponent , pow ;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	printf("Enter its exponent : ");
	scanf("%d",&exponent);
	
	pow = power(num,exponent);
	
	printf("The number %d raised to the power %d = %d",num,exponent,pow);	
	
	return 0;
}

int power(int a , int b)
{
	int i , Onum ;
	Onum = a ; 
	
	if(b>=2)
	{
		for(i=2;i<=b;i++)
		{
			a = a * Onum ;
		}
	}
	else if(b==1)
	a = Onum ; 

	return a ;
}

