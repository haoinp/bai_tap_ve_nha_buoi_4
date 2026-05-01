#include <stdio.h>

int main() {

    int n, max = 0, i ;

    printf("nhap so n : ");
    scanf("%d",&n);

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        i = n % 10;
        if (i > max) {
            max = i;
        }
        n /= 10;
    }
    printf("chu so lon nhat : %d",max);
        
    return 0;
}