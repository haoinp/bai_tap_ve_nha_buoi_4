#include <stdio.h>

int main() {

    int n, sodaonguoc = 0;
    int sodu;

    printf("nhap so n : ");
    scanf("%d",&n);

    while (n != 0) {
        sodu = n % 10;
        sodaonguoc = sodaonguoc * 10 + sodu;
        n /= 10;
    }

    printf("so dao nguoc %d", sodaonguoc);
        
    return 0;
}