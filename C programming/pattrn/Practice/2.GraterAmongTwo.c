#include <stdio.h>

int main(){
	int a, b;
	
	printf("Enter a number 1: ");
	scanf("%d",&a);
	printf("Enter a number 2: ");
	scanf("%d",&b);
	
	if(a>b){
		printf("The number 1 is grater %d",a);
	}
	else if(a<b){
		printf("The number 2 is grater %d",b);	
	}
	else{
		printf("Both are equal");
		
	}
}
