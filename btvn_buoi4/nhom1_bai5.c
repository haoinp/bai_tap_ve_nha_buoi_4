#include <stdio.h>

int main() {

    int n, arr[100], x, pos = -1;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap so x can tim: ");
    scanf("%d", &x);

    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] == x) {
            pos = i;
            break;
        }
    }

    if(pos != -1) {
        printf("Vi tri xuat hien cuoi cung cua %d la index: %d\n", x, pos);
    } else {
        printf("%d khong ton tai trong mang.\n", x);
    }

    return 0;
}

// 5. Tìm kiếm vị trí: Nhập một số, in ra vị trí (index) của 
// x cuối cùng xuất hiện trong mảng.