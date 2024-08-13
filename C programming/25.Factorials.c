//factorials using recursive function 
#include<stdio.h>
void main()
{
int n,i, fact=1;
printf("enter value of n \n");
scanf("%d",&n);
for(i=n;i>=1; i--)
{
	fact=fact*i;
}
printf("factorials is %d",fact);
}
