#include <stdio.h>

int main() {

    int n, arr[10], k;
    
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap vi tri k can xoa (0 den %d): ", n - 1);
    scanf("%d", &k);

    if(k >= 0 && k < n) {
        for(int i = k; i < n - 1; i++) {
            arr[i] = arr[i+1];
        }
        n--; 
    }
    
    printf("Mang sau khi xoa: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

// 5. Xóa phần tử: Nhập vị trí k, xóa phần tử tại vị trí đó 
// và dồn các phần tử phía sau lên.