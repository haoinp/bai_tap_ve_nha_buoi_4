#include <stdio.h>

int main() {

    int n, arr[10], visited[10] = {0};

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Tan suat xuat hien:\n");
    for(int i = 0; i < n; i++) {
        if(visited[i] == 1) continue;

        int count = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
            }
        }
        printf("Phan tu %d xuat hien %d lan\n", arr[i], count);
    }
    return 0;
}

// 3. Tần suất xuất hiện: Liệt kê các phần tử khác nhau 
// trong mảng và số lần xuất hiện của chúng.