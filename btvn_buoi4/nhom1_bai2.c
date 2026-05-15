#include <stdio.h>

int main() {

    int i,n;
    int sum = 0;
    int arr[10];

    printf("nhap so phan tu n : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("tong = %d\n",sum);
    printf("trung binh cong = %.2f\n",(float)sum/n);

    return 0;
}

// 2. Tính tổng & Trung bình: Tính tổng và 
// trung bình cộng của các phần tử trong mảng.