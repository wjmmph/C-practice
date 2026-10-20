#include <stdio.h>



int main(){

    printf("1D array\n");
    int arr[5];
    for (int i = 0; i < 5; i++){
        printf("Enter value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The 1D array is:\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n\n");
    printf("2D array\n");

    int matrix[2][3];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Enter value for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

        }
    printf("\n");
    }

    printf("The matrix is:\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}