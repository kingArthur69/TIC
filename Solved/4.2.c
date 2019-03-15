#include <stdio.h>
#include <conio.h>
#define SIZE 3

int main()
{
	float array[SIZE][SIZE];
	float backup;

	size_t i, j, k;

	puts("Enter elements of array:");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			scanf("%f", &array[i][j]);	
		}
	}

	for (k = 0; k < SIZE*SIZE; k++)
	{
		for (i = 0; i < SIZE ; i++)
		{
			for (j = 0; j < SIZE - 1; j++)
			{
				if (array[i][j] > array[i][j+1])
				{
					backup = array[i][j];
					array[i][j] = array[i][j+1];
					array[i][j+1] = backup;
				}
			}
		}

		for (i = 0; i < SIZE ; i++)
		{
			for (j = 0; j < SIZE - 1; j++)
			{
				if (array[j][i] > array[j][i+1])
				{
					backup = array[j][i];
					array[j][i] = array[j][i+1];
					array[j][i+1] = backup;
				}
			}
		}
	}
	
	puts("Elements of array:");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf("%5.2f\t", array[i][j]);	
		}
		puts("");
	}

	getch();
}