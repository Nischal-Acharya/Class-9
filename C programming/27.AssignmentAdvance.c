#include <stdio.h>
int get_number();
int sum_number(int,int);
int display_output(int);

int main(){
	get_number();
	return 0;
}

int get_number(){
	int num1,num2;
	
	printf("Enter First Number: ");
	scanf("%d",&num1);
	printf("Enter Second Number: ");
	scanf("%d",&num2);
	
	sum_number(num1, num2);
}
int sum_number(int get1,int get2){
	int result = get1 + get2;
	
	display_output(result);
}

int display_output(int displaying){
	printf("\nThe sum is %d ",displaying);
}
