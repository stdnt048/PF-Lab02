#include<stdio.h>

int main()
{
	
	float vi = 10.5; 
	float acceleration = 4 ;
	float time = 4 ;
	
	printf("======================KINEMATICS MOTION REPORT=====================\n");
	printf("\tGIVEN/CALCULATED DATA           MAGNITUDE\n");
	printf("--------------------------------------------------------------------\n");
	printf("\tINITIAL VELOCITY \t        %.1f m/s",vi);
	printf("\n\tACCELERATION \t\t        %.1f m/s2",acceleration);
	printf("\n\tTIME ELAPSED \t\t        %.1f s",time);
	printf("\n-------------------------------------------------------------------\n");
	printf("\tFINAL VELOCITY \t\t        %.1f m/s\n", vi + (acceleration*time));
	printf("\tTOTAL DISTANCE TRAVELLED        %.1f m\n", (vi*time) + (0.5 * acceleration * time * time));
	
	printf("\n==================================================================");
	return 0;

}

