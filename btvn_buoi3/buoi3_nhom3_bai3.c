//Kiểm tra số hoàn hảo: Số hoàn hảo là số có tổng các ước (ngoại trừ nó) bằng chính nó (VD: $6 = 1 + 2 + 3$).

#include <stdio.h>

int main() {

    int n, sum = 0;

    printf("nhap so n : ");
    scanf("%d", &n);

    for (int i =1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n && n > 0) {
        printf("%d is a perfect number\n",n);
    } else {
        printf("%d is not a perfect number\n",n);
    }
    
    return 0;
}

