#include<stdio.h>

int main()
{
	int n , i , j , sum = 0 , num = 0 , total = 0 , change = 1 ;
	
	printf("Enter the Min number of the range :  ");
	scanf("%d",&i);
	printf("Enter the max number of the range :  ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		num = i ;
		for(j=1 ; j<= num-1 ; j++)
		{
			if(num % j == 0)
			{
				total = total + j ;
			}
		}
		
		if(total == num )
		{
			if(!change)
			{
				printf(" , ");
			}
			printf("%d",num);
			change = 0 ;
		}
		
		num = 0 ;
		total = 0 ;
		i++;
	}
	return 0;
}
