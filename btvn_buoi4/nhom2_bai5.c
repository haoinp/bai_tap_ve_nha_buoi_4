#include <stdio.h>

int main() {

    int n;
    float arr[10], max;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%f", &arr[i]);
    }

    max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
    }
    
    if (max != 0) {
        printf("Mang chuan hoa: ");
        for(int i = 0; i < n; i++) {
            arr[i] = max / arr[i];
            printf("%.2f ", arr[i]);
        }
    } else {
        printf("Max bang 0, khong the chia.\n");
    }

    return 0;
}

// 5. Chuẩn hóa số liệu: Tìm số lớn nhất Max, 
// sau đó chia tất cả phần tử trong mảng cho Max.