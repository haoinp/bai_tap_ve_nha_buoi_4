#include <stdio.h>

int main() {
    int n, a[10], sum = 0;
    
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Cac so nguyen to trong mang: ");
    for(int i = 0; i < n; i++) {
        int isPrime = 1;
        if(a[i] < 2) {
            isPrime = 0;
        } else {
            for(int j = 2; j * j <= a[i]; j++) {
                if(a[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if(isPrime) {
            printf("%d ", a[i]);
            sum += a[i];
        }
    }
    
    printf("\nTong cac so nguyen to: %d\n", sum);

    return 0;
}

// 4. Số nguyên tố trong mảng: In ra và tính tổng 
// các phần tử là số nguyên tố có trong mảng.