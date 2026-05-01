// Dãy Fibonacci: In ra $n$ số đầu tiên trong dãy Fibonacci (1, 1, 2, 3, 5, 8, ...).

#include <stdio.h>

int main() {

    int n, t1 = 1, t2 = 1, nextTerm;

    printf("nhap so n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%d ", t1);
            continue;
        }
        if (i == 2) {
            printf("%d ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d ", nextTerm);
    }
    
    return 0;
}