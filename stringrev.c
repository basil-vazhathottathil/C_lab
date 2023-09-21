#include <stdio.h>

int findLen(char string[100]);
int revStr(char string1[100], char string2[100], int len);

void main(){
    char string1[100], string2[100];
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", string1);
    
    len = findLen(string1);
    revStr(string1, string2,len);
    
    printf("Reversed string is:\n");
    printf("%s\n", string2);
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

int revStr(char string1[100], char string2[100], int len){
    for (int i=0; i < len; i++){
        string2[i] = string1[(len-1)-i];
    }
}