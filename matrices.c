#include <stdio.h>

int main() {
    int arr1[3][3], arr2[3][3], result[3][3];
    int i, j, k;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){
            scanf("%d", &arr2[i][j]);
        }
    }
    

    // Multiply matrices
    for(i = 0; i < 3; ++i) {
        for(j = 0; j < 3; ++j) {
            result[i][j] = 0;
            for(k = 0; k < 3; ++k)
                result[i][j] += arr1[i][k] * arr2[k][j];
        }
    }

    // Display result
    printf("Resultant matrix after multiplication:\n");
    for(i = 0; i < 3; ++i) {
        for(j = 0; j < 3; ++j){
            printf("%d\t ", result[i][j]);
        }
       printf("\n");
    
    }

    return 0;
}
