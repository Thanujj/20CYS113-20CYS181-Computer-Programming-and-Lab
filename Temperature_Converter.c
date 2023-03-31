#include <stdio.h>

int main() {
    float fahrien, celsius;
    printf("ENTER Fahrien temperature\n");
    scanf("%f", &fahrien);

    // Calculate Celsius temperature
    celsius = 5.0 / 9.0 * (fahrien - 32);

    // Print the Celsius temperature
    printf("The Celsius temperature %f\n", celsius);

    return 0;
}
