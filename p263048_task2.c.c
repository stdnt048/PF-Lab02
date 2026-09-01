#include<stdio.h>

int main()
{
	int batch_no = 2026 ;
	float test_score = 60.0183 ; 
	char section = 'B' ;
	double semester_fee= 268500 ;
	
	printf("==========================================\n");
	printf("\t   FAST STUDENT ID\n");
	printf("==========================================\n");
	printf("  BATCH NUMBER  \t\t%d\n",batch_no);
	printf("  SECTION       \t\t%c\n",section);
	printf("  TEST SCORE    \t\t%.4f\n",test_score);
    printf("  SEMESTER FEE  \t\t%.1lf\n",semester_fee);
	printf("  MOTTO         \t\t\"QUO NON ASCENDAM\"");
    
	return 0;

}

