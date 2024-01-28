#include <stdio.h>
#include <string.h>
int main() {
    int count = 0, i; 
    char name[30];
    printf("Enter name: ");
    gets(name);
    // count = strlen(name); //pre-defined function to determine the length of the string.
    // printf("String length is = %d", count);
    
    //logic of finding length of string
    while(name[i] != '\0') {
        count++;
        i++;
    }
    printf("Length of string = %d", count);
}