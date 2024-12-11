#include <stdio.h>
#include <math.h>

int main()
{
    float r, chuVi, dienTich;
    printf("Nhập bán kính hình tròn: ");
    scanf("%f", &r);
    chuVi = 2 * M_PI * r;
    dienTich = M_PI * r * r;
    printf("Chu vi hình tròn: %.2f\n", chuVi);
    printf("Diện tích hình tròn: %.2f\n", dienTich);
    return 0;
}
