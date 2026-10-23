#include<stdio.h>

int main()
{
	int n , i ,square , sum = 0 ;
	
	printf("Enter the number of terms in the series : ");
	scanf("%d",&n);
	
	for(i=1; i<= n ; i++)
	{
		square = i * i ; 
		printf("%d",square);
		sum = sum + square ; 
		
		if( i < n )
		printf(" , ");
	}
	
	printf(" = %d",sum);
	
	return 0 ;
}
