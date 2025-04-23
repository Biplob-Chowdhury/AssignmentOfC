#include<stdio.h>


int main() {

    int matrix1[3][3];
    int matrix2[3][3];

    printf("Enter the First Matrix: \n");

    for (int i = 0; i < 3; ++i) {

        for (int j = 0; j < 3; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the Second Matrix: \n");

    for (int i = 0; i < 3; ++i) {

        for (int j = 0; j < 3; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("The addition matrix is: \n");

    for (int i = 0; i < 3; ++i) {

        for (int j = 0; j < 3; ++j) {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

}

