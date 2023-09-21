#include <stdio.h>

int sum(int arr[], int n){
    int sum=0;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

void main(){
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Sum of numbers in array is %d\n", sum(arr,n));
}

