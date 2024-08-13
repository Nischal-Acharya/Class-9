//WAP to input the marks of five subjects and calculate the percenteage and give the grade a below

#include <stdio.h>
int main(){
	int subjects, total_marks=0, i;
	printf("Enter regularly 6 subjects marks: \n");
	for(i=1; i<=5; i++){
		scanf("%d",&subjects);
		total_marks = total_marks+subjects;
	}
	float percentage= (total_marks*100)/500;
	printf("\n\n\nPrecentage is %f\n\n",percentage);
	                                                                                                                                                                                  
	if(percentage>80){
		printf("Distinsion");
	}
	else if(percentage>65){
		printf("First Division");
	}
	else if(percentage>50){
		printf("Second Diviion");
	}
	else if(percentage>=40){
		printf("Pass");
	}
	else if(percentage<40){
		printf("Fail");
	}
	return 0;
}
