#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int i, trial=0;
	
	do
	{
	 printf("input a number:");
	 scanf("%i", &i);
	 
	 if(answer >1)
	   printf("low!\n");
	 else if (answer <1)
	   printf("high!\n");
	   
	  trial++;
	}while(i != answer);
	
	printf("conglaturation, number of trial : %i\n", trial);
	
	return 0;
}
