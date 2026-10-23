#include<stdio.h>

int main()
{
	int n , i , sum = 0 ;
	
	printf("Enter the number of terms in the series : ");
	scanf("%d",&n);
	
	for(i=2 ; i <= 2*n ; i += 2)
	{
		printf("%d",i);
		sum = sum + i ;
		
		if(i<2*n)
		printf(" , ");
	}
	
	printf(" = %d ",sum);
	
	return 0 ;
}
