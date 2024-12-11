#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Nhập số nguyên có 4 chữ số: ");
        scanf("%d", &n);
        if (n < 1000 || n > 9999)
        {
            printf("Số nhập không hợp lệ. Vui lòng nhập lại!\n");
        }
    } while (n < 1000 || n > 9999);

    int temp = 0;

    while (n)
    {
        temp = temp * 10 + n % 10;
        n /= 10;
    }

    printf("Số nghịch đảo là: %d\n", temp);
    return 0;
}
