#include <stdio.h>

int main() {

    int i, n;
    int arr[10];

    printf("nhap n phan tu : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        printf("nhap phan tu a[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    printf("mang in nguoc : ");
    for (i = n - 1; i >= 0; i--){
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}

// 1. Nhập xuất mảng: Viết chương trình nhập n phần tử 
// và in ngược lại từ phần tử cuối về phần tử đầu.