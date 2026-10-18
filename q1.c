#include<stdio.h>

int main()
{
	int class , fail ; 

 	printf("Enter the class of the student : ");
	scanf("%d",&class);
	

	switch(class)
	{
		case 1 : 
			printf("Enter the number of subjects failed : ");
			scanf("%d",&fail);
			switch(fail)
			{
				case(0):
					printf("5 Grace marks per subject\n");
					break;
				case(1):
					printf("5 Grace marks per subject\n");
					break;
				case(2):
					printf("5 Grace marks per subject\n");
					break;
				case(3):
					printf("5 Grace marks per subject\n");
					break;
				case(4):
					printf("0 Grace marks per subject\n");
					break;
				default: 
					printf("0 Grace marks per subject\n");
					break;

			}
			break;
		
		case 2: 
			printf("Enter the number of subjects failed : ");
			scanf("%d",&fail);
			switch(fail)
			{
				
				case(0):
					printf("4 Grace marks per subject\n");
					break;
				case(1):
					printf("4 Grace marks per subject\n");
					break;
				case(2):
					printf("4 Grace marks per subject\n");
					break;
				case(3):
					printf("0 Grace marks per subject\n");
					break;
				default: 
					printf("0 Grace marks per subject\n");
					break;
			}
			break;

		case 3 : 
			printf("Enter the number of subjects failed : ");
			scanf("%d",&fail);		
			switch(fail)
			{
				case(0):
					printf("5 Grace marks per subject\n");
					break;
				case(1):
					printf("5 Grace marks per subject\n");
					break;
				case(2):
					printf("0 Grace marks per subject\n");
					break;
				default: 
					printf("0 Grace marks per subject\n");
					break;
			}
			break;

		default: 
			printf("Invalid class !");
			break;
	}

	return 0 ;
}