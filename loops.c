#include <stdio.h>

int main(){
    // STAR PATTERN
    
    int choice;
    printf("Enter your choice{0 for triangular pattern, 1 for reverse triangular pattern}: ");
    scanf("%d", &choice);

    if(choice == 0) {
        for(int i = 0; i < 4; i++) {

            for(int j = 0; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else if(choice == 1) {
        for(int i = 0; i < 4; i++) {

            for(int j = 4; j > i; j--) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("Invalid choice!");
    }
    
    return 0;
}