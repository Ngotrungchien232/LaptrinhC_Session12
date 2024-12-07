#include <stdio.h>
#include<math.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);

    int arr[n];
    int i;
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

  
    int max = findMax(arr, n);
    printf("So lon nhat co trong mang la: %d\n", max);

    return 0;
}

