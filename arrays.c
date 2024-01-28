#include <stdio.h>

int main() {
    // int a[5];
    // printf("Enter the array elements: ");

    // for(int i = 0; i < 5; i++) {
    //     scanf("%d", &a[i]);
    // }

    // for(int i = 0; i < 5; i++) {
    //     printf("Array element at index %d is %d \n", i, a[i]);
    // }

    // for(int i = 4; i >= 0; i--) {
    //     printf("Array element at index %d is %d \n", i, a[i]);
    

    // Q. Read marks of 5 students and calc sum and average.

    // int marks[5];
    // float sum = 0, avg;

    // for(int i = 0; i < 5; i++) {
    //     printf("Enter marks of student %d: ", i+1);
    //     scanf("%d", &marks[i]);
    // }

    // for(int i = 0; i < 5; i++) {
    //     sum += marks[i];
    // }

    // avg = sum/5;

    // printf("Sum = %.2f\n", sum);
    // printf("Average = %.2f", avg);

    // Q. Read 10 array intergers and count no. of even/odd integers.
    int a[10];
    int even = 0, odd = 0;

    printf("Enter 10 numbers: ");

    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(a[i]%2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d", odd);

    return 0;
}