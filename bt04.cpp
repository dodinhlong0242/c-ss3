#include <stdio.h>

int main()
{
    float toan, van, anh, tong, trungBinh;
    printf("Nhập điểm Toán: ");
    scanf("%f", &toan);
    printf("Nhập điểm Văn: ");
    scanf("%f", &van);
    printf("Nhập điểm Anh: ");
    scanf("%f", &anh);

    tong = toan + van + anh;
    trungBinh = tong / 3;

    printf("Tổng điểm: %.2f\n", tong);
    printf("Điểm trung bình: %.2f\n", trungBinh);

    return 0;
}
