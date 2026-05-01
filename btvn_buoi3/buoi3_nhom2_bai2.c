#include <stdio.h>

int main() {

    int i = 0;
    long long n, S = 0;

    printf("nhap so n : ");
    scanf("%lld", &n);

    // Xử lý số âm
    if (n < 0) {

        n = -n;

    } 

    while(n > 0) {
        i = n % 10;
        if (i % 2 != 0) {
            S += i;
        }
        n /= 10;
    }
        
    printf("tong so le S : %lld",S);
    return 0;
}