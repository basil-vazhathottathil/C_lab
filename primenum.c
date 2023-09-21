#include <stdio.h>

void main() {
	int num, i, flag;
	printf("Enter the number to be checked ");
	scanf("%d", &num);
	
	if (num == 0 || num == 1) {
    	  flag = 1;
    	 }

	
	for (i = 2; i <= num/2; ++i){
		if (num % i == 0) {
			 flag = 1;
			 break;
			}
		}
	if(flag==0) { 
		printf("Number is a prime number.\n");   
	}
	else {
		printf("The number is not a prime number.\n");
	     }
}    
