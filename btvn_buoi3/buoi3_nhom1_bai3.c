#include <stdio.h>

int main() {

    int i;
    int n;
    long long S = 0;

    printf("nhap so n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        S += (i * i);
    }
    
    printf("S = %lld\n", S);

    return 0;
}