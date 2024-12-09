#include <stdio.h>
#include <math.h>

// ham kiem tra so hoan hao
int isPerfect(int n) {
    if (n <= 1) {
        return 0; 
    }

    int sum = 1;  
    int limit = (int)sqrt(n); 
    int i;
    
    for (i = 2; i <= limit; i++) {
        if (n % i == 0) {  
            sum += i;
            if (i != n / i) {  
                sum += n / i;
            }
        }
    }

    
    return sum == n;
}

int main() {
    int num;

    
    printf("nhap so nguyen: ");
    scanf("%d", &num);

    
    if (isPerfect(num)) {
        printf("%d la so hoan hao\n", num);
    } else {
        printf("%d khong phai so hoan hao\n", num);
    }

    return 0;
}

