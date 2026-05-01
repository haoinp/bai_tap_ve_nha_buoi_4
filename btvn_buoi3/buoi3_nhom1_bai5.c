#include <stdio.h>

int main() {

    int a;
    int b;
    int k;

    printf("nhap so a, b, step k : ");
    scanf("%d %d %d",&a, &b, &k);

    for(int i = a; i <= b; i += k) {

        printf("%d ",i);

    }

    return 0;
}