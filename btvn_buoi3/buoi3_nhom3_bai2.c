//Tìm Bội chung nhỏ nhất (BCNN): Dựa trên kết quả UCLN để tìm BCNN.

#include <stdio.h>

int main() {

    int a, b, UCLN, BCNN, temp_a, temp_b;

    printf("nhap so nguyen a, b : ");
    scanf("%d %d", &a, &b);

    temp_a = a;
    temp_b = b;

    while(temp_b != 0) {

        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;

    }

    UCLN = temp_a;
    BCNN = (a*b)/UCLN;

    printf("BCNN : %d",BCNN);
    
    return 0;
}

