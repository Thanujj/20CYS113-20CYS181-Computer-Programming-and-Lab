#include <stdio.h>

int main() {
    int a, b;
    printf("ENTER THE FIRST NUMBER\n");
    scanf("%d", &a);
    printf("ENTER THE SECOND NUMBER\n");
    scanf("%d", &b);

    // Swapping two numbers
    a = a * b;
    b = (float) a / b;
    a = (float) a / b;

    // Displaying swapped values
    printf("AFTER SWAPPING A= %d B= %d\n", a, b);

    return 0;
}
