#include <stdio.h>

int main() {
    int matrix[3][3], min_value, max_value, i , j;
    printf("Enter the elements of Matrix: ");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    min_value = max_value = matrix[0][0];
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matrix[i][j] > max_value) {
                max_value = matrix[i][j];
            } else if(matrix[i][j] < min_value) {
                min_value = matrix[i][j];
            }
        }
    }
    printf("\nMinimum of element is : %d", min_value);
    printf("\nMaximum of element is : %d\n", max_value);
}
