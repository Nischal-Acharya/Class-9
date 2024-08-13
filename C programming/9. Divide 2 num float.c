// Write a program to Divide two numbers

#include<stdio.h>

int main()
{
	float fn_number, sn_number;
	
	printf("Enter a First number: ");
	scanf("%f",&fn_number);
	
	printf("Enter a Second number: ");
	scanf("%f",&sn_number);
	
	printf("\nThe answer is %f / %f = %f",fn_number,sn_number,fn_number/sn_number);
	
	return 0;
}
