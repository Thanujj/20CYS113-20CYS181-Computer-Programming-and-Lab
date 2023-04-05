#include <stdio.h>

int main() {
    int n, i, j, m;
    printf("Enter no of elements in array\n");
    scanf("%d", &n);
    int a[n+1];
    for (i = 1; i <= n; i++) {
        printf("Enter the elements in array%d\n", i);
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n-1; i++) {
        for (j = i+1; j <= n; j++) {
            if (a[j] < a[i]) {
                m = a[j];
                a[j] = a[i];
                a[i] = m;
            }
        }
    }
    printf("The selection sort\n");
    for (i = 1; i <= n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
