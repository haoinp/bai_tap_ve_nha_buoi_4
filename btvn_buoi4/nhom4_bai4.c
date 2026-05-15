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

    printf("Ma tran chuyen vi:\n");
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 4. Ma trận chuyển vị: In ra ma trận chuyển vị của ma trận đã nhập.