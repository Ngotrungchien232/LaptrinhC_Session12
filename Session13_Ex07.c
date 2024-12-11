#include <stdio.h>

void taoMaTran(int rows, int cols, int matrix[rows][cols]) {
	int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Nh?p giá tr? cho ma tr?n t?i v? trí [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void inMaTran(int rows, int cols, int matrix[rows][cols]) {
	int i, j;
    printf("\nMa tr?n v?a nh?p:\n");
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    printf("Nh?p s? hàng c?a ma tr?n: ");
    scanf("%d", &rows);
    printf("Nh?p s? c?t c?a ma tr?n: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    taoMaTran(rows, cols, matrix);
    inMaTran(rows, cols, matrix);
    return 0;
}

