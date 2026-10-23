#include<stdio.h>

int main()
{
	int n , i , a = 0 , b = 1 , next , sum = 0 ; 
	
	printf("Enter the number of terms in the series : ");
	scanf("%d",&n);
	
	for(i = 1 ; i <= n ; i++ )
	{
		printf("%d",a);
		sum = sum + a ;
		next = a + b ;
		b = a ;
		a = next ; 
		
		if(i < n)
		printf(" , ");
	}
	
	printf(" = %d",sum);
	
	return 0;
}
