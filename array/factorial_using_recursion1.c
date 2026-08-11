#include<stdio.h>

// Recursive function
int fact(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial not possible for negative numbers\n");
    } else {
        printf("Factorial of %d = %d\n", n, fact(n));
    }

    return 0;
}