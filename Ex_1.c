#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    if (b != 0) {
        printf("Tong = %d\n", a + b);
        printf("Hieu = %d\n", a - b);
        printf("Tich = %d\n", a * b);
        printf("Thuong = %d\n", a / b);
    } else {
        printf("Loi: b phai khac 0");
    }

    return 0;
}