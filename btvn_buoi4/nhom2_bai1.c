#include <stdio.h>

int main() {

    int n;
    int arr[10];

    printf("nhap so luong phan tu n : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    printf("mang sau khi thay the : ");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}

// 1. Thay thế phần tử: Thay thế tất cả các số âm trong mảng bằng số 0.