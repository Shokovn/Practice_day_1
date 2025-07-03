#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Nhap a:");
    scanf("%f", &a);
    printf("Nhap b:");
    scanf("%f", &b);
    printf("Nhap c:");
    scanf("%f", &c);
    float m = (a+b+c)/3;
    printf("Trung binh cong = %.2f", m);
    return 0;
}