#include <stdio.h>

//Viết chương trình:
// Nhập chiều dài và chiều rộng


// Tính chu vi và diện tích theo công thức:


// Chu vi = 2 * (dài + rộng)
// Diện tích = dài * rộng

int main () {
    int a, b;
    printf("Nhap chieu dai: ");
    scanf("%d", &a);
    printf("Nhap chieu rong: ");
    scanf("%d", &b);
    if (b > a) {
        printf("Chieu rong phai nho hon chieu dai");
    } else {
    printf("Chu vi = 2*(%d + %d) = %d\n", a, b , 2*a*b);
    printf("Dien tich = %d * %d = %d", a, b, a*b );
    }
    return 0;
}