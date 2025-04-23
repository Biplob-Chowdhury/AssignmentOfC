
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




    printf("The Multiplication matrix is: \n");

    for (int row1 = 0; row1 < 3; ++row1) {
        int col2 = 0;

        int cnt = 3;
        while (cnt--) {
            int col1 = 0;

            int ans = 0;

            for (int row2 = 0; row2 < 3; ++row2) {

                ans += (matrix1[row1][col1] * matrix2[row2][col2]);
                col1++;
            }

            printf("%d ", ans);
            col2++;
        }

        printf("\n");

    }

}

