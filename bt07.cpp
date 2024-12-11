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

    int sum = 0;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    printf("Tổng các chữ số là: %d\n", sum);
    return 0;
}
