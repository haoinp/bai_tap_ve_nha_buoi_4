#include <stdio.h>

int main() {
    int n, a[50][50], sum = 0;
    
    printf("Nhap kich thuoc ma tran vuong n x n: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
            if(i == j) {
                sum += a[i][j];
            }
        }
    }
    
    printf("Tong cac phan tu tren duong cheo chinh: %d\n", sum);

    return 0;
}

// 3. Đường chéo chính: Cho ma trận vuông, 
// tính tổng các phần tử nằm trên đường chéo chính.