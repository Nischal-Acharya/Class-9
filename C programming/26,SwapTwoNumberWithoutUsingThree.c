// WAP to swap a integer va+lue using three

#include <stdio.h>
void swap_me();

int main(){
	swap_me();
}
void swap_me(){
	int a,b;
	printf("Enter first number: ");
	scanf("%d",&a);	
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("\nBefore Swap\nFirst number is %d \nSecond Number is %d\n",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\nAfter Swap\nFirst number is %d \nSecond Number is %d",a,b);
	
	re
	
}
