#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Moi ban nhap so nguyen duong  n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong the tinh giai thua cho so am\n");
    } else {
        int giaithua = factorial(n);
        printf("Giai thua cua %d là: %d\n", n, giaithua);
    }

    return 0;
}

