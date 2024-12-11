#include <stdio.h>

int main()
{
    float base, height, dienTich;
    printf("Nhập độ dài cạnh đáy của tam giác: ");
    scanf("%f", &base);
    printf("Nhập chiều cao của tam giác: ");
    scanf("%f", &height);

    dienTich = 0.5 * base * height;
    printf("Diện tích của tam giác: %.2f\n", dienTich);

    return 0;
}
