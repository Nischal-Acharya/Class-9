// WAP to find average of nth number using array

#include <stdio.h>

int main(){
	int i, total_num;
	
	printf("How manny number do you wanna enter: ");
	scanf("%d",&total_num);
	
	float data[total_num], average;
	
	for(i=0; i<=total_num-1; i++){
		printf("Enter number %d: ",i+1);
		scanf("%f",&data[i]);
	}
	
	for(i=0; i<=total_num-1; i++){
		average = average + data[i];
		
	}
	average = average / total_num;
	printf("\n\n\n\t\tThe average is %.2f",average);
}
