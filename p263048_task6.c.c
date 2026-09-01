#include<stdio.h>

int main()
{
	
	float radius = 9.5 ;
	float PI = 3.14;
	
	printf("======================CIRCLE=====================\n");
	printf("\tGIVEN/CALCULATED DATA         VALUE\n");
	printf("--------------------------------------------------\n");
	printf("\tRADIUS \t\t\t      %.2f cm\n",radius);
	printf("\tDAIMETER \t\t      %.2f cm\n", 2 * radius);
	printf("\tCIRCUMFERENCE \t\t      %.2f cm\n", 2 * PI * radius);
	printf("\tAREA \t\t\t      %.2f sq.cm\n", PI * radius * radius);
	
	
	printf("\n=================================================");
	return 0;

}

