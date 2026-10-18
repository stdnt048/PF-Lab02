#include<stdio.h>

int main()
{
int no_of_students = 1, marks , highest = 0 , student = 1 ; 
int total_marks = 0 , pass = 0 , fail = 0 ;
float average;

printf("Enter the number of students : ");
scanf("%d",&no_of_students);
printf("Number of students : %d \n",no_of_students);

while(student <= no_of_students)
{
printf("MARKS OF STUDENT %d : ",student);
scanf("%d",&marks);
if(marks>highest)
 highest = marks ;
if(marks>50)
 pass++;
if(marks<50)
 fail++;
total_marks = total_marks + marks ;
 
student++;

}

 average = ((float)total_marks) / (no_of_students) ;

printf("the highest marks are : %d \n",highest);
printf("The average marks of the class are : %.2f \n",average);
printf("PASS : %d\t\nFAIL : %d \n",pass , fail);

return 0;
}
