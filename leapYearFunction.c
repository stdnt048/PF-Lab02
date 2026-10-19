#include<stdio.h>


void LeapYear(int a );

int main()
{
	int year ;
	
	printf("Enter a year : ");
	scanf("%d",&year);
	
	LeapYear(year);
	
	return 0;
}

void LeapYear(int a)
{
	if(a % 100 == 0)
	{
		if(a % 400 == 0)
		printf("The Year is a Leap year \n");
		else 
		printf("The year is not a leap year\n");
	}
	
	else if(a % 4 == 0)
	printf("The year is a leap year\n");
	else 
	printf("The year is not a leap year");
}
