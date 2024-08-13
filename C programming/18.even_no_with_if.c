// WAP to print all the even number betweeen 1 and hundred using while loop


#include <stdio.h>


int main(){
	int a = 0;
	
	while(a<=100){
		
		if(a%2==0){
			printf("%d\n",a);
		}
		a++;
	}
}
