#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize,
                  int* matrixColSize, int target)
{
    int rows = matrixSize;
    int columns = matrixColSize[0];

    int left = 0;
    int right = rows * columns - 1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        int row = middle / columns;
        int column = middle % columns;

        int value = matrix[row][column];

        if (value == target)
        {
            return true;
        }
        else if (value < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    return false;
}
