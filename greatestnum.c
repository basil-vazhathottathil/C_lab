#include <stdio.h>

void main() {
	int num1, num2, num3;
	printf("Enter first number: ");
	scanf("%d", &num1);
	
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	printf("Enter third number: ");
	scanf("%d", &num3);
	
	if (num1 > num2 && num1 > num3)
		{
		  printf("%d is the greatest among the three numbers.",num1);
		}
	else if (num2 > num1 && num2 > num3)
		{
		  printf("%d is the greatest among the three numbers.",num2);
		}
	else if (num3 > num1 && num3 > num2)
		{
		  printf("%d is the greatest among the three numbers.",num3);
		}
		
}
