#include <stdio.h>

int main() {

    int n, dem = 0;

    printf("nhap so nguyen duong : ");
    scanf("%d", &n);

    int temp = n;

    if (temp == 0) {
        dem = 1;
    } else {
        while(temp != 0) {
            dem++;
            temp /= 10;
        }
    }

    printf("so cac chu so trong n : %d", dem);

    return 0;
}