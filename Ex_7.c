#include <stdio.h>
// Viết chương trình:
// Nhập 2 số nguyên a, b và 1 ký hiệu phép toán +, -, *, /

// Dùng switch để thực hiện phép toán tương ứng và in kết quả

// Kiểm tra nếu như có chia cho 0 (sai)

int main()
{
    int a, b;
    char c;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Nhap 1 ky hieu phep toan (+, -, *, /): ");
    scanf(" %c", &c);
    if (a || b != 0)
    {
        switch (c)
        {
        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("%d- %d = %d", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;
        case '/':
            printf("%d / %d = %d", a, b, a / b);
            break;
        default:
            break;
        }
    }
    else
    {
        printf("a va b phai khac 0");
    }
    return 0;
}