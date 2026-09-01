#include<stdio.h>

int main()
{
	
	char random = 'O';
	int a_random = 99;
	float PI = 3.141590;
	double b_random = 99.9999;
	
	printf("===========VARIABLE INSPECTOR AND MEMORY FOOTPRINT=============\n");
	printf("\n\tTYPE NAME   VARIABLE VALUE   SIZE IN MEMORY ");
	printf("\n\tint \t    %d\t\t     %zu bytes   ",a_random,sizeof(a_random));
	printf("\n\tchar \t    %c \t\t     %zu bytes   ",random,sizeof(random));
	printf("\n\tfloat       %f \t     %zu bytes   ",PI,sizeof(PI));
	printf("\n\tdouble      %lf \t     %zu bytes   ",b_random,sizeof(b_random));


	printf("\n=============================================================");
	return 0;

}

