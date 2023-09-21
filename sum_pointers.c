#include <stdio.h>

void main(){
    int num1, num2;
    
    printf("Enter two numbers to add: ");
    scanf("%d %d", &num1, &num2);

    int *p1 = &num1, *p2 = &num2;

    printf("Sum of %d and %d is %d\n", num1, num2, *p1 + *p2);
}