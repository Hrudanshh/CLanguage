#include<stdio.h>
#include<math.h>

void main() {
    printf("Enter a Number to Find Factorial: ");
    printf("\nFactorial of a Given Number is: %d ", fact());
}

int fact() {
    int i, fact=1 ,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        fact=fact*i;
    }
    return fact;
}