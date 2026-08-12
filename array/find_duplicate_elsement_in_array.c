#include<stdio.h>

int main() {
    int a[100], n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nDuplicate elements are:\n");

    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                a[j] = -1; // mark visited
            }
        }
        if(count > 1 && a[i] != -1) {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}