#include<stdio.h>

int main()
{
	int n , i , total = 0 , dig , num , sum = 0 , change = 1 ;
	
	printf("Enter the min number of the range (any 3 dig number): ");
	scanf("%d",&i);
	printf("Enter the max number of the range (any 3 dig number): ");
	scanf("%d",&n);
	
	while(i <= n)
	{
		num = i ;
		
		while(num != 0)
		{
			dig = num % 10 ; 
			total = total + (dig*dig*dig) ;
			num = num / 10 ;
		}
		
		if(total == i)
		{
			if(!change)
			{
				printf(" , ");
			}
			printf("%d",i);
			sum = sum + i ;
			change = 0 ;
		}
		
		i++;
		total = 0 ;
	}
	
	printf(" = %d",sum);
	return 0 ;
}
