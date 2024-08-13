// WAP Create a structure to specifey data on student given below
/*
	Roll, Name, Department, course, Year of joining. Assume that there are not 450
	student in the collage.
	
	a) WAP program to print names of all student who joined in a particular year
	
	b) WAP a program to print a data of student whoose rollno is given
*/

#include <stdio.h>
#include <string.h>


struct student{
	char name[10];
	int roll_no;
	char department[10];
	char course[10];
	int joining;
};
int main(){
	
	int year;
	printf("Tell me the year you wanna to get details of student: ");
	scanf("%d",&year);
	
	struct student sa;
	strcpy(sa.name, "Nischal");
	sa.roll_no = 22;
	strcpy(sa.department, "Computer Engineering");
	strcpy(sa.course, "C programming");
	sa.joining = 2078;
	
	struct student sb;
	strcpy(sb.name, "Manisha");
	sb.roll_no = 19;
	strcpy(sb.department, "Computer Engineering");
	strcpy(sb.course, "Electrical");
	sb.joining = 2078;
	
	struct student sc;
	strcpy(sc.name, "Kishowr");
	sc.roll_no = 9;
	strcpy(sc.department, "General Science");
	strcpy(sc.course, "OOP");
	sc.joining = 2077;
	
	struct student sd;
	strcpy(sd.name, "Bibek");
	sd.roll_no = 34;
	strcpy(sd.department, "General");
	strcpy(sd.course, "Maths");
	sd.joining = 2077;
	
	struct student se;
	strcpy(se.name, "Nitin");
	se.roll_no = 23;
	strcpy(se.department, "General");
	strcpy(se.course, "Optional");
	se.joining = 2076;
	
	struct student sf;
	strcpy(sf.name, "Ankit");
	sf.roll_no = 26;
	strcpy(sf.department, "Cevil");
	strcpy(sf.course, "Nepali");
	sf.joining = 2076;
	
	struct student sg;	
	strcpy(sg.name, "Aruna");
	sg.roll_no = 4;
	strcpy(sg.department, "Computer Engineering");
	strcpy(sg.course, "General Social");
	sg.joining = 2078;
	
	if(year==2076){
		printf("\nName: %s\nRoll no: %d\nDepartment: %s\nCourse: %s\nJoin Year: %d\n\n",se.name, se.roll_no, se.department, se.course, se.joining);
		printf("Name: %s\nRoll no: %d\nDepartment: %s\nCourse: %s\nJoin Year: %d\n",sf.name, sf.roll_no, sf.department, sf.course, sf.joining);
	
	}
	else if(year==2077){
		printf("\nName: %s\nRoll no: %d\nDepartment: %s\nCourse: %s\nJoin Year: %d\n\n",sc.name, sc.roll_no, sc.department, sc.course, sc.joining);
		printf("\nName: %s\nRoll no: %d\nDepartment: %s\nCourse: %s\nJoin Year: %d\n\n",sd.name, sd.roll_no, sd.department, sd.course, sd.joining);
	}
	else if(year==2078){
		printf("\nName: %s\nRoll no: %d\nDepartment: %s\nCourse: %s\nJoin Year: %d\n\n",sa.name, sa.roll_no, sa.department, sa.course, sa.joining);
		printf("\nName: %s\nRoll no: %d\nDepartment: %s\nCourse: %s\nJoin Year: %d\n\n",sb.name, sb.roll_no, sb.department, sb.course, sb.joining);
		printf("\nName: %s\nRoll no: %d\nDepartment: %s\nCourse: %s\nJoin Year: %d\n\n",sg.name, sg.roll_no, sg.department, sg.course, sg.joining);
	}
	
	
	

}
