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
    
    for(int i = 0; i < m; i++) {
        int sum_row = 0;
        for(int j = 0; j < n; j++) sum_row += a[i][j];
        printf("Tong hang %d: %d\n", i, sum_row);
    }
    
    for(int j = 0; j < n; j++) {
        int sum_col = 0;
        for(int i = 0; i < m; i++) sum_col += a[i][j];
        printf("Tong cot %d: %d\n", j, sum_col);
    }

    return 0;
}

// 2. Tổng hàng/cột: Tính tổng từng hàng và từng cột của ma trận.