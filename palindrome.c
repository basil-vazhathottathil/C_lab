#include <stdio.h>

void main() {
	int num, rev, rem, new_num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	new_num = num;
	
	while (num > 0)
		{
		  rem = num % 10;
		  rev = rev * 10 + rem;
		  num /= 10;
		}
	if (new_num == rev)
		{
		  printf("The number is a palindrome");
		}
	else
		{
		  printf("The number is not a palindrome");
		}
}
