// Write a program to print prime numbers in a range

#include<stdio.h>

int main() {
    int num;

    printf("Enter the range: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++) {

        int isPrime = 1;

        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d\t", i);
        }
    }

    return 0;
}