#include <stdio.h>

int main() {

    int m, n, a[50][50];
    
    printf("Nhap so hang m va so cot n: ");
    scanf("%d %d", &m, &n);
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Ma tran da nhap:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 1. Ma trận cơ bản: Nhập ma trận $m\times n$ in ra theo dạng bảng.