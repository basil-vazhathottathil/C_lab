//string concatenation without using string functions
#include <stdio.h>

int findLen(char string[100]);
int combineStr(char string1[100], char string2[100], int len);

void main(){
    char string1[100], string2[100];
    int len = 0;

    printf("Enter first string: ");
    scanf("%s", string1);
    printf("Enter second string: ");
    scanf("%s", string2);

    len = findLen(string1);
    combineStr(string1, string2, len);

    printf("Combined string is:\n");
    printf("%s", string1);
}

int findLen(char string[100]){
    int len = 0;
     for(int i=0; string[i]!='\0'; i++){
        if(string[i] != '\0') {
            len += 1;
        }
    }
    return len;
}

int combineStr(char string1[100], char string2[100], int len){
    for(int i=0; string2[i]!='\0'; i++){
        string1[len+i] = string2[i];
    }
}
