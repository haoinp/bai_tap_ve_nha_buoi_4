//Tìm Ước chung lớn nhất (UCLN): Nhập 2 số $a$, $b$. Tìm UCLN sử dụng thuật toán Euclid (vòng lặp while).

#include <stdio.h>

int main() {

    int a, b;

    printf("nhap so nguyen a, b : ");
    scanf("%d %d", &a, &b);

    while(b != 0) {

        int temp = b;
        b = a % b;
        a = temp;

    }

    printf("UCLN : %d",a);
    
    return 0;
}

