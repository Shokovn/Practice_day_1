#include <stdio.h>
// Viết chương trình:
// Nhập vào điểm trung bình (float)

// Xếp loại theo điều kiện:

// >= 8.5   → Gioi
// >= 6.5   → Kha
// >= 5.0   → Trung binh
// < 5.0    → Yeu

int main()
{
    float a;
    printf("Nhap vao diem trung binh: ");
    scanf("%f", &a);
    if (a >= 8.5)
    {
        printf("Gioi");
    }
    else if (a >= 6.5 && a < 8.5)
    {
        printf("Kha");
    }
    else if (a >= 5.0 && a < 6.5)
    {
        printf("Trung binh");
    }
    else if (a < 5.0)
        printf("Kha");
    return 0;
}