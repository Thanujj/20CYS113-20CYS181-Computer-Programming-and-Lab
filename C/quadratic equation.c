#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c,d;
    float root1, root2;

    printf("ENTER THE COEFFICIENT OF X^2: ");
    scanf("%d", &a);
    printf("ENTER THE COEFFICIENT OF X: ");
    scanf("%d", &b);
    printf("ENTER THE CONSTANT: ");
    scanf("%d", &c);

    // THE QUADRATIC EQUATION WILL BE FORMED
    printf("THE QUADRATIC EQUATION IS %dX^2+%dX+%d\n", a, b, c);
    d=b*b-4*a*c;

    // THYE SYSTEM WILL DISPLAYS THE ROOTS OF THE EQUATION
    root1 = (-b + sqrt(d)) / 2 * a;
    printf("THE ROOT1 %f\n", root1);
    root2 = (-b - sqrt(d)) / 2 * a;
    printf("THE ROOT2 %f\n", root2);
return 0;
}
