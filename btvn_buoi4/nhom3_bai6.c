#include <stdio.h>

int main() {

    int n, a[10], k, x;
    
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap gia tri x can chen: ");
    scanf("%d", &x);
    printf("Nhap vi tri k can chen (0 den %d): ", n);
    scanf("%d", &k);
    
    if(k >= 0 && k <= n) {
        for(int i = n; i > k; i--) {
            a[i] = a[i-1];
        }
        a[k] = x;
        n++;
    }

    printf("Mang sau khi chen: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}

// 6. Chèn phần tử: Nhập giá trị x và vị trí k, 
// chèn x vào mảng tại vị trí k mà không làm mất dữ liệu cũ.