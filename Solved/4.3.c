#include <stdio.h>
#include <conio.h>
#define SIZE 5

int main()
{
	short array[SIZE][SIZE];
	short backup, sum = 0;
	size_t i, j;

	puts("Enter elements of array:");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			scanf("%d", &array[i][j]);	
		}
	}
	//Summing
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if(array[i][j] < 10)
				sum += array[i][j];
		}
	}
	//-------
	puts("Elements of array:");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf("%d\t", array[i][j]);	
		}
		puts("");
	}
	//Transing
	for (i = 0; i < SIZE; i++)
	{
		for (j = i; j < SIZE; j++)
		{
			backup = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = backup;
		}
	}
	//--------
	puts("Transponed array:");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf("%d\t", array[i][j]);	
		}
		puts("");
	}

	printf("%s%d", "Sum of numbers < 10 is:", sum);

	getch();
}