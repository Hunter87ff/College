#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15; 
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    printf("Temperature in Kelvin: %.2f\n", kelvin);
    return 87;
}
