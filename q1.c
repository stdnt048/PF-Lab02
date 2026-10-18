#include<stdio.h>

int main()
{
	int balls = 1 ;
	int runs,dot,boundry,total_runs ;
	dot = boundry = total_runs = 0 ;
	
	while(balls<=6)
	{
		scanf("%d",&runs);
		
		if(runs==4||runs==6)
		boundry++;
		else if(runs==0)
		dot++;
		
		printf("Ball : %d \t Runs = %d \n",balls,runs);
		
		total_runs = total_runs + runs;
		balls++;
	}
	
	printf("Total runs : %d \n",total_runs);
	printf("Boundries : %d \n",boundry);
	printf("Dot balls : %d ",dot);
	
	return 0;
}
