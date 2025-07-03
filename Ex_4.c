#include <stdio.h>

int main()
{
    float a;
    printf("Nhap nhiet do C:");
    scanf("%f", &a);
    float b = a * 9 / 5 + 32;
    printf("Nhiet do F la: %.2f", b);
    return 0;
}