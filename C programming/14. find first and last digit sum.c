// WAP to input any four digit number and find the sum of first and last number.


#include <stdio.h>
int main()
{
	
		int a, i, x;
	
		printf("Enter a four digit number: ");
		scanf("%d",&a);
		i= a%10; 
	    x = a/1000; 
	    i= i+x;
	    printf("The sum is %d",i);
	
	return 0;
}
