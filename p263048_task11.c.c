#include<stdio.h>

int main()
{
	float tea_Q = 1 , tea_UP = 70 ;
	float biryani_Q = 1 , biryani_UP = 230;
	float shawarma_Q = 1 , shawarma_UP = 150;
	
	float TEA_ST=tea_Q*tea_UP;
	float biryani_ST=biryani_Q*biryani_UP;
	float shawarma_ST=shawarma_Q*shawarma_UP;
	float ST = (tea_Q*tea_UP) + (biryani_Q*biryani_UP) + (shawarma_Q*shawarma_UP);
	float GST = 0.16*ST;
	float PA = ST+GST;

	printf("==========================RECIEPT=========================\n");
	printf("ITEM \t    QUANTITY \t UNIT PRICE(PKR) \t TOTAL(PKR)\n ");
	printf("-----------------------------------------------------------\n");
	printf("TEA  \t    %.0f \t\t %.2f \t\t\t %.2f\n",tea_Q,tea_UP,TEA_ST);
	printf("BIRYANI     %.0f \t\t %.2f \t\t %.2f \n",biryani_Q,biryani_UP,biryani_ST);
	printf("SHAWARMA    %.0f \t\t %.2f \t\t %.2f \n",shawarma_Q,shawarma_UP,shawarma_ST);
	printf("------------------------------------------------------------\n");
	printf("SUB TOTAL \t\t\t\t\t %.2f \n",ST);
	printf("GST \t\t\t\t\t\t %.2f \n",GST);
	printf("\n------------------------------------------------------------\n");
	printf("PAYABLE AMOUNT \t\t\t\t\t %.2f\n",PA);

	printf("\n======================THANKYOU===========================\n");

	return 0;

}

