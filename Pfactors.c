#include<stdio.h>


void Pfactors(int a );

int main()
{
	int num ;
	
	printf("Enter the number whos prime factors you want to find : ");
	scanf("%d",&num);
	
	printf("The prime factors are : \n");
	Pfactors(num);	
	
	return 0;
}

void Pfactors(int a)
{
	int i = 1 , j , fc = 0;
	
	while(i <= a )
	{
		if( a % i == 0)
		{
			for(j=1;j<=i;j++)
			{
				if(i % j == 0)
				{
					fc = fc + 1 ;
				}
				
				if(fc == 2)
				{
					printf("%d\n",i);
					a = a/i;
					i = 0 ;
				}
			}
		}
		
		fc = 0 ;
		i++;
	}
}
