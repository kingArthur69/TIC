#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 10

void cycleMoving(int *a, int size, int n, int flag);
int main()
{
	int A[SIZE];
	size_t i;

	for(i = 0; i < SIZE; i++)
		{
			A[i] = rand()%10;
		}
	puts("Array:");
	for(i = 0; i < SIZE; i++)
		{
			printf("A[%d]: %d ", i, A[i]);
		}

	cycleMoving(A, SIZE, 5, 1);
	puts("");
	puts("Array:");
	for(i = 0; i < SIZE; i++)
		{
			printf("A[%d]: %d ", i, A[i]);
		}

	getch();

}

void cycleMoving(int *a, int size, int n, int flag)
{
	size_t i, j;
	int backup;

	if (flag == 0)
	{
		for(i = 0; i < n; i++)
		{
			backup = a[0];
			for(j = 0;j < SIZE - 1; j++)
			{
				a[j] = a[j + 1];
			}
			a[j] = backup;
		}
	}
	else
	{
		for(i = 0; i <size - n; i++)
		{
			backup = a[0];
			for(j = 0;j < SIZE - 1; j++)
			{
				a[j] = a[j + 1];
			}
			a[j] = backup;
		}
	}
}