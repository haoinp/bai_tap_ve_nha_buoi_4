// Hình kim cương

#include <stdio.h>

int main() {

    int h;

    printf("nhap chieu cao hinh diamond (so le): ");
    scanf("%d", &h);

    if (h % 2 == 0) {
        printf("nhap so le !\n"); 
        return 1;
    }

    int mid = h / 2;

    // Upper half including the middle row
    for (int i = 0; i <= mid; i++) {
        // Print spaces
        for (int j = 0; j < mid - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = mid - 1; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < mid - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}