#include <stdio.h>

int main() {

    int i,n;
    int min = 0, max = 0;
    int arr[10];

    printf("nhap so phan tu n : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (i < min) {
            min = i;
        }
        if (i > max) {
            max = i;
        }
    }

    printf("min = %d\n",min);
    printf("max = %d\n",max);

    return 0;
}

// 3. Tìm Min/Max: Tìm giá trị lớn nhất và nhỏ nhất của mảng.