#include<stdio.h>

int main()
{
	float PF_marks = 88.0 , PF_CD=4.0;
	float ENG_marks = 80.0 , ENG_CD=3.0;
	float IOP_marks = 77.0 , IOP_CD=2.0;
	
	float TWS = (PF_marks*PF_CD)+(ENG_marks*ENG_CD)+(IOP_marks*IOP_CD);
	float TCD = PF_CD+ENG_CD+IOP_CD;
	float WA = TWS/TCD ;
	
	printf("=====================ACADEMIC REPORT======================\n");
	printf("COURSE \t\t\t   CREDIT HOURS \t OBTAINED MARKS\n");
	printf("---------------------------------------------------------\n");
	
	printf("PROGRAMMING FUNDAMENTALS   %.0f \t\t\t %.1f \n",PF_CD,PF_marks);
	printf("ENGLISH \t\t   %.0f  \t\t         %.1f \n",ENG_CD,ENG_marks);
	printf("IDEOLOGY OF PAKISTAN \t   %.0f \t\t\t %.1f \n",IOP_CD,IOP_marks);
	printf("\n----------------------------------------------------------\n");
	
	printf("TOAL CREDITS : %.0f \t WEIGHTED AVERAGE : %.1f %% \n",TCD,WA);
	printf("\n=========================================================\n");
	
	return 0;

}

