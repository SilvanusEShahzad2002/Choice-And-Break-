#include <stdio.h>
int main()
{
	int choice;
	printf("Menu \n");
	printf("1. Tea\n");
	printf("2. Coffee\n");
	printf("3. Juice\n");
	printf("Enter Your Choice\n");
	scanf("%d" , &choice);
	
	switch (choice){
		case 1:
			printf("You Chose Tea ( Price Is 50 RS)/n");
			break;
		
		case 2:
			printf("You Chose Coffee ( Price Is 100 RS) /n");
			break;	
			
		case 3:
			printf("You Chose Juice ( Price Is 150 RS) /n");
			break;	
		
		default:
			printf("Invalid Choice\n");		
	}
return 0;
}
