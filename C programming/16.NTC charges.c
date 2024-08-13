//NTC charge a following rate for local calls from a costumer
/*
calls          charges

calls <= 175     --rs. 200
calls >175       -- rs. 1 per extra min.
*/


#include <stdio.h>
int main(){
	int munite,calc,a;
	  printf("Enter your munite of time: ");
	  scanf("%d",&munite);
	  
	  if(munite>175){
	  	calc = munite-175;
	  calc	= calc + 200;
	  	printf("Your total cost is %d",calc);
	  }
	  else{
	  	printf("Your total cot is 200.");
	  }
	
	return 0;
}
