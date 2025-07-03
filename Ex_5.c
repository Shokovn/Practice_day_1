#include <stdio.h>
int main()
{
    float a, b;
    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Dien tich tam giac vuong: %.2f", 0.5 * a * b);
    return 0;
}