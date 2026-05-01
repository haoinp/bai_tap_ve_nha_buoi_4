#include <stdio.h>

int main() {

    int n, sogoc, sodu, sodaonguoc = 0;

    printf("nhap so n : ");
    scanf("%d",&n);

    sogoc = n;

    while (n != 0) {
        sodu = n % 10;
        sodaonguoc = sodaonguoc * 10 + sodu;
        n /= 10;
    }

    if (sogoc == sodaonguoc) {

        printf("%d is a Palindrome.\n", sogoc);

    } else {

        printf("%d is not a Palindrome.\n", sogoc);

    }
    return 0;
}