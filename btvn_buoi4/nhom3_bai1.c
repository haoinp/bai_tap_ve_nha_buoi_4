#include <stdio.h>

int main() {

    int n, arr[10], tang_dan = 1;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i+1]) {
            tang_dan = 0;
            break;
        }
    }
    
    if(tang_dan) printf("Mang tang dan\n");
    else printf("Mang khong tang dan\n");

    return 0;
}

// 1. Kiểm tra mảng tăng dần: Kiểm tra xem các phần tử 
// trong mảng có được sắp xếp tăng dần hay không.