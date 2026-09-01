#include<stdio.h>

int main()
{
	
	float celsius = 25.25 ;
	float kelvin;
	float fahrenheit ;
	
	fahrenheit = celsius * 9.0/5.0 + 32.0 ;
	kelvin = celsius + 237.15 ;
	
	printf("===========TEMPRATURE CONVERSION=============\n");
	printf("\tTEMPRATURE SCALE          TEMP\n");
	printf("---------------------------------------------\n");
	printf("\tCELCIUS \t\t  %.2f\n",celsius);
	printf("\tFAHRENHEIT \t\t  %.2f\n",fahrenheit);			
	printf("\tKELVIN \t\t\t  %.2f",kelvin);
	
	printf("\n=============================================");
	return 0;

}

