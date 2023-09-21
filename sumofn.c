#include <stdio.h>

void main() {
	int n, num, sum;
	printf("Enter the total number of numbers to add: ");
	scanf("%d", &n);
	
	while (n>0)
		{
		  printf("Enter a number: ");
		  scanf("%d", &num);
		  sum += num;
		  n -= 1;
		}
		{
		 printf("Sum of the given numbers = %d", sum);
		}
}
		
