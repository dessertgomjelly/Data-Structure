#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int total[3][3] = { 0, };

    int arr1[3][3] = {
     {1, 3, 5},
     {6, 7, 8},
     {9, 2, 1}
    };

    int arr2[3][3] = {
     {1, 3, 8},
     {6, 7, 6},
     {9, 2, 2}
    };

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            total[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", total[i][j]);
        }
    }

    return 0;
}