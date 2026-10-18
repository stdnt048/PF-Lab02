/* While  loop is really effecient for such axamples as we have to count 
the values multiple amounts of times  */

#include<stdio.h>

int main()
{
	int c_saving,m_saving,laptop_price,month,t_saving ;
	month = 1 ;
	
	printf("enter the price of the laptop : ");
	scanf("%d",&laptop_price);
	printf("enter your current savings for the laptop : ");
	scanf("%d",&c_saving);
	printf("enter your monthly savings for the laptop : ");
	scanf("%d",&m_saving);
	
	t_saving = c_saving + m_saving ;
	
	if(c_saving>=laptop_price)
	printf("sara can buy the laptop in 0 months .");
	else
	{ 
		while(laptop_price>=t_saving)
		{
		printf("Month : %d \t Saving = %d \n",month,t_saving);
		month++;
		t_saving = t_saving + m_saving ; 	
		}
		printf("Sara can by the laptop in %d Months ", month-1);
	}
	return 0;
}
