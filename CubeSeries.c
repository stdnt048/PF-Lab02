#include<stdio.h>

int main()
{
	int n , i , cube , sum = 0 ;
	
	printf("Enter the number of terms in the series : ");
	scanf("%d",&n);
	
	for(i=1; i<= n ; i++)
	{
		cube = i * i * i ; 
		printf("%d",cube);
		sum = sum + cube ; 
		
		if( i < n )
		printf(" , ");
	}
	
	printf(" = %d",sum);
	
	return 0 ;
}
