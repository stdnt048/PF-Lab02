#include<stdio.h>

int main()
{
	/* in this task i will make seperate variables
	for all calculations unlike my previous tasks and ill carry this
	for the next tasks ie.10,11 */
	
	double base_salary = 215000.00 ;
	
	double HRA = 0.20 * base_salary ;
	double MA = 0.10 * base_salary ; 
	double GS = base_salary + HRA + MA ;
	double ITD = 0.05 * GS ;
	double NS = GS - ITD ;
	
	printf("=====================SALARY SLIP======================\n");
	printf("\tBASIC SALARY \t\t  %.1lf ",base_salary);
	printf("\n\tHOUSE RENT ALLOWANCE      %.1lf ",HRA);
	printf("\n\tMONTHLY ALLOWANCE \t  %.1lf", MA);
	printf("\n------------------------------------------------------\n");
	
	printf("\n\tGROSS SALARY \t\t  %.1lf", GS);
	printf("\n\tINCOME TAX DEDUCTION      %.1lf",ITD);
	
	printf("\n-------------------------------------------------------\n");
	printf("\n\tNET SALARY \t\t  %.1lf", NS);
	
	printf("\n========================================================\n");
	return 0;

}

