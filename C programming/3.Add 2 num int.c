// Write a program to take integer input and add that two numbers

#include <stdio.h>

int main()
{
	int fn_number, sn_number;
	
	printf("Enter a First number: ");
	scanf("%d",&fn_number);
	
	printf("Enter a Second number: ");
	scanf("%d",&sn_number);
	
	printf("\nThe answer is %d + %d = %d",fn_number,sn_number,fn_number+sn_number);
	
	return 0;
}
