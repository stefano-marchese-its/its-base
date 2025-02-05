    
    #include <stdio.h>
    
    #define SIZE 5  // Modifica questa costante per cambiare la dimensione della matrice
    
    int matrix[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int sumMatrix(int matrix[SIZE][SIZE], int size)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++) {
                sum += matrix[i][j];
            }
        }
        return sum;
    }

    int sumMatrixPtr(int* matrix, int size)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++) {
                sum += matrix[i * size + j];
            }
        }
        return sum;
    }

    int main() {

        int sum = sumMatrix(matrix, SIZE);
        printf("la somma e': %d\n\n", sum);

        sum = sumMatrixPtr((int*) matrix, SIZE);
        printf("la somma e': %d\n\n", sum);

        printf("\n\n");

        return 0;
    }