#include <stdio.h>

void main() {
	int num, rev, rem, original;
	
	printf("Enter a Number: ");
	scanf("%d", &num);
	rev = 0;
	
	original = num;
	
	while (num != 0)
		{
		  rem = num % 10;
		  rev = rev + rem * rem * rem;
		  num = num / 10;
		}
	if (original == rev)
		{
		  printf("The number is armstrong");
		}
	else
		{
		  printf("The number is not armstrong");
		}
}
	
