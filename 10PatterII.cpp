#include <stdio.h>
        
int main(){
    int i, j, k, r;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    for (i=0; i<=r; i++) {
        for (j=0; j<=r-i; j++) {
            printf(" ");
        }
        for (k=0; k<i; k++) {
                printf("* ");
        }
    printf("\n");
    }
    printf("*");
    return 0;
} 