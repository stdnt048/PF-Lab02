#include<stdio.h>

int main()
{
	
	double principal = 300000.00; 
	float rate_of_interest = 7.25 ;
	int time_duration = 5; 
	
	/* i know that i can make seperate variable for my calculations
	 but i choose not to bcz i have used the same style in my previous tasks and
	 i want to keep my style uniform . */ 
	
	printf("======================BANK LOAN=====================\n");
	
	printf("\tPRINCIPAL AMOUNT \t   PKR %.2lf   ",principal);
	printf("\n\tANNUAL INTEREST RATE \t   %.2f %% ",rate_of_interest);
	printf("\n\tLOAN TIME \t           %d Years  ",time_duration);
	printf("\n-------------------------------------------------------------------\n");
	printf("\n\tTOTAL ACCURED INTEREST     %.2lf    ", (principal * rate_of_interest * time_duration)/100.0 );
	printf("\n\tTOTAL PAYABLE AMOUNT \t   %.2lf   ", principal + ((principal * rate_of_interest * time_duration)/100.0));
	printf("\n\tMONTHLY INSTALLEMENT  \t   %.2lf     ", (principal + ((principal * rate_of_interest * time_duration)/100.0))/( time_duration* 12.0) );
	printf("\n==================================================================");
	
	return 0;

}

