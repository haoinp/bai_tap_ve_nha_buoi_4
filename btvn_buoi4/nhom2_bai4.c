#include <stdio.h>

int main() {

    int n, a[10], b[10], c[10];
    int nb = 0, nc = 0;

    printf("Nhap so luong phan tu mang A: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);

    if(a[i] % 2 == 0) {
        b[nb++] = a[i];
    } else {
        c[nc++] = a[i];
    }
    }

    printf("Mang B (chan): ");
    for(int i = 0; i < nb; i++) printf("%d ", b[i]);
    
    printf("\nMang C (le): ");
    for(int i = 0; i < nc; i++) printf("%d ", c[i]);
    
    printf("\n");

    return 0;
}

// 4. Tách mảng: Cho mảng A, chép các số chẵn 
// vào mảng B và các số lẻ vào mảng C.