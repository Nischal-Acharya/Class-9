// WAP to print nth number using while loop.

#include <stdio.h>
int main(){
	
	int user_num, i=1;
	
	printf("Enter a number to print: ");
	scanf("%d",&user_num);
	
	while(i<=user_num){
		printf("%d\n",i);
		i++;
	}
}
