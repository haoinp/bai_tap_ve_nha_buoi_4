// Xấp xỉ số Pi: Tính số $\pi$ theo công thức Leibniz: 
// $\frac{\pi}{4} = 1 - \frac{1}{3} + \frac{1}{5} - \frac{1}{7} + \dots$ với $n$ số hạng đầu tiên.

#include <stdio.h>

int main() {

    int n;
    double pi_quarter = 0.0;
    int sign = 1;

    printf("nhap so n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        pi_quarter += sign * (1.0/(2*i+1));
        sign = -sign;
    }

    printf("xap xi so pi %f\n",pi_quarter*4.0);
    return 0;
}