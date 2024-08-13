#include <stdio.h>

struct student{
	char name[20];
	int roll;
	char department[20];
	char course[10];
	int joining;
};
int main(){
	
	int total_student, i, which, choose; //var
	top:
	printf("\n\n\t\tEnter a number of student details: ");
	scanf("%d",&total_student);
	struct student s[total_student];
	if(total_student <= 450 && total_student >=1){
		
		for(i=0; i<=total_student-1; i++){
			
			printf("Name of student: ");
			scanf("%s",&s[i].name);
			printf("Roll no: ");
			scanf("%d",&s[i].roll);
			printf("Student department: ");
			scanf("%s",&s[i].department);
			printf("Course of student: ");
			scanf("%s",&s[i].course);
			printf("Joining Year: ");
			scanf("%d",&s[i].joining);
		}
		me:
		printf("\n\tChoose me:\n\t 1. Roll\n\t 2. Joining year\n\t\t\t=> ");
		scanf("%d",&choose);
		
		if(choose == 2){
			printf("Enter a student year of joining: ");
		scanf("%d",&which);
		
		
		for(i=0; i<=total_student-1; i++){
			if(which==s[i].joining){
				printf("\nName: %s",s[i].name);
				printf("\nRoll: %d",s[i].roll);
				printf("\nDepartment: %s",s[i].department);
				printf("\nCourse: %s",s[i].course);
				printf("\nYear Joining: %d",s[i].joining);
			}
			printf("\n\n");
		}
			
		}else if(choose == 1)
		{
			printf("Enter a student Roll no: ");
			scanf("%d",&which);
			for(i=0; i<=total_student-1; i++){
			if(which==s[i].roll){
				printf("\nName: %s",s[i].name);
				printf("\nRoll: %d",s[i].roll);
				printf("\nDepartment: %s",s[i].department);
				printf("\nCourse: %s",s[i].course);
				printf("\nYear Joining: %d",s[i].joining);
			}
		}
		}
		else{
			printf("Please enter a valid number: ");
			goto me;
		}
		
	}
	else if(total_student<=0){
		printf("\t\tPlease enter a valid total student: ");
		goto top;
	}
	else{
		printf("\n\n\t\tYou are not able to store more then 450 students\n\t\tFor unlimited store need to buy pro version! ");	
		goto top;
	}
	return 0;
}
