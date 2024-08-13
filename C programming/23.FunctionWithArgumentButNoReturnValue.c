// WAP to demostrate all types of function.   - Argument and No return Value

#include <stdio.h>
void add_me(int, int);

int main(){
	
	int a = 5;
	int b = 6;
	
	add_me(a,b);
	return 0;
}
void add_me(int num1, int num2){
	printf("The final addition is %d", num1 + num2);
}
