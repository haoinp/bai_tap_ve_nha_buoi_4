// Hình chữ nhật đặc: Nhập chiều rộng $w$ và chiều cao $h$, in ra hình chữ nhật bằng các dấu.

#include <stdio.h>

int main() {

    int w, h;

    printf("nhap h, w : ");
    scanf("%d %d", &h, &w);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}