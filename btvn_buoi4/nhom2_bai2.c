#include <stdio.h>

int main() {

    int i, n, arr[10];

    printf("nhap so luong phan tu n : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i += 2) {
        arr[i] += 2;
    }

    printf("mảng sau khi tăng tất cả các phần tử ở vị trí chẵn lên 2 đơn vị : ");
    for (i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}

// 2. Tăng giá trị: Tăng tất cả các phần tử ở vị trí chẵn lên 2 đơn vị.