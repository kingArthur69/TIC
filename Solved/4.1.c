#include <stdio.h>
#include <conio.h>
#define SIZE 5

int main()
{
	int array[SIZE][SIZE];
	int min, backup;
	size_t i, j;

	puts("Enter elements of array:");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			scanf("%d", &array[i][j]);	
		}
	}

	min = array[0][0];

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (min > array[i][j])
				min = array[i][j];
		}
	}

	puts("Elements of array:");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf("%d\t", array[i][j]);	
		}
		puts("");
	}

	printf("%s%d", "Minimal number is:", min);

	


	getch();
}