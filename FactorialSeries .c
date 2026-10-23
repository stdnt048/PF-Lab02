#include<stdio.h>

int main()
{
	int n , i , sum = 0 , fact = 1 ; 
	
	printf("Enter the number of terms in the series : ");
	scanf("%d",&n);
	
	for(i =1 ; i <= n ; i++)
	{
		fact = fact * i ; 
		printf("%d",fact);
		sum = sum + fact ;
		
		if(i < n)
		printf(" , ");
	}
	
	printf(" = %d",sum);
	
	
	return 0;
}
