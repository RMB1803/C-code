#include <stdio.h>
#include <string.h>

int main() {
    char s1[30] = "Ram";
    char s2[30] = "Mohan";

    // strcat(s1, s2); //pre-defined function to concatenate a string.
    // printf("String after concatenation is: %s\n", s1);
    // puts(s2);

    // logic of concatenating a string. 
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for(int i = 0; i <= len2; i++) {
        s1[len1+i] = s2[i];
    }
    printf("String after concatenation is: %s\n", s1);

}