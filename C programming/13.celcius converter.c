//WAP to convert a temprature given to Fahrenheit
/*
F= c * (9/5)+ 32
*/


#include <stdio.h>
int main()
{
	float fahrenheit, celcius;
	printf("Enter a celcius value: ");
	scanf("%f",&celcius);
	
	fahrenheit = (celcius * 9/5) + 32;
	
	printf("Your Fahrenheit is %.2f °F",fahrenheit);
	
	return 0;
}
