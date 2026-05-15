#include <stdio.h>

int main() {

    int i,n;
    int so_duong = 0, so_am = 0, so_khong = 0;
    int arr[10];

    printf("nhap so phan tu n : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            so_duong ++;
        } else if (arr[i] < 0) {
            so_am ++;
        } else so_khong ++;
    }

    printf("so duong : %d\n",so_duong);
    printf("so am : %d\n",so_am);
    printf("so khong : %d\n",so_khong);

    return 0;
}

// 4. Đếm phần tử: Đếm số lượng số dương, số âm và số không trong mảng.