#include<stdio.h>

int main()
{
	int n , i , num , sum = 0 , reverse_n , remainder , change = 1 , digit ; 
	
	printf("Enter the number untill which you want to check the palindromes : ");
	scanf("%d",&n);
	
	for(i=1; i <= n ; i++)
	{
		num = i ;
		while(num != 0 )
		{
			digit = num % 10 ;
			remainder = num % 10 ;
			reverse_n = remainder*10 + digit ;
			num = num /10 ;
		}
		
		if(reverse_n == i )
		{
			if(!change)
			{
				printf(" , ");
			}
			printf("%d",i);
			change = 0 ;
			sum = sum + i ;
		}
		
	}
	
	printf(" = %d",sum);
	
	return 0;
}
