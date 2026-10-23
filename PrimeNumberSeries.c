
#include<stdio.h>

int main()
{
	int n , i , j , sum = 0 , fc = 0 , change = 1 ;
	
	printf("Enter the term untill witch you want to check prime numbers : ");
	scanf("%d",&n);
	
	for(i=1 ; i <= n ; i++)
	{
		for(j=1 ; j <= i ; j++)
		{
			if(i % j == 0)
			fc = fc + 1 ; 
		}
		if(fc == 2)
			{
					if(!change)
				{
					printf(" , ");
				}
				printf("%d",i);
				change = 0 ;
				sum = sum + i ;
			}
		fc = 0 ;
	}
	
	printf(" = %d",sum);
	
	return 0 ; 
}
