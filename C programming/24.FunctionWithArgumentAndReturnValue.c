// WAP to demostrate all types of function.    - Argument and return Value

#include <stdio.h>
int div_me(int, int);

int main(){
	
	int a = 55;
	int b = 5;
	
	printf("The division is %d",div_me(a, b));
	return 0;
}
int div_me(int r1, int r2){
	return r1/r2;
}
