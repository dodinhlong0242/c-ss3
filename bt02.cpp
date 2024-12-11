#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Nhập nhiệt độ theo độ Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Nhiệt độ theo độ Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
