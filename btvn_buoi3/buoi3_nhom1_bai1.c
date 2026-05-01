#include <stdio.h>

int main() {

    int i;
    int n;

    printf("nhap so n : ");
    scanf("%d",&n);

    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}