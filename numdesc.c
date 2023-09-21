#include <stdio.h>

void main(){
	int limit, num;
	printf("enter a number: ");
	scanf("%d", &num);
	limit = num;
	while (limit >= 0){
		printf("%d\n", num);
		num-=1;
		limit -= 1;
		}
}
	
