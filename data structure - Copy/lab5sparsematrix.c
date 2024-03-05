#include<stdio.h>

int main()
{
	
	int sparseMatrix[4][5] =
    {
        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };

	int size = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			if ( sparseMatrix[i][j] != 0)
				size++;

	int matrixB[3][size];

	int k = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			if ( sparseMatrix[i][j] != 0)
			{
				matrixB[0][k] = i;
				matrixB[1][k] = j;
				matrixB[2][k] =  sparseMatrix[i][j];
				k++;
			}

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<size; j++)
			printf("%d ", matrixB[i][j]);

		printf("\n");
	}
	return 0;
}