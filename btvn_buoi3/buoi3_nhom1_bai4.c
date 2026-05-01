#include <stdio.h>

int main() {

    int i;
    int n;
    float S;

    printf("nhap so n : ");
    scanf("%d",&n);

    for(i = 1 ; i <= n ; i++) {

        S += 1.0 / i;

    }

    printf("S = %f\n",S);

    return 0;
}