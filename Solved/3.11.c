#include <stdio.h>
#include <conio.h>
#include <math.h>
#define SIZE  10

int main() 
{
	size_t i, j;
	float array[SIZE];
	float max, min;
	float sum = 0, sumPos = 0, sumNeg = 0, sumAbs = 0;
	float backup;

	for(i = 0; i < SIZE; ++i)
	{
		puts("Enter array element");
		scanf("%f",&array[i]);
	}

	min = array[0]; 
	for(i = 1; i < SIZE; ++i)
	{
		if(min > array[i])
			min = array[i];
	}

	max = array[0]; 
	for(i = 1; i < SIZE; ++i)
	{
		if(max < array[i])
			max = array[i];
	}

	for(i = 0; i < SIZE; ++i)
	{
		sum += array[i];
	}

	for(i = 0; i < SIZE; ++i)
	{
		if(array[i] > 0)
			sumPos += array[i];
	}

	for(i = 0; i < SIZE; ++i)
	{
		if(array[i] < 0)
			sumNeg += array[i];
	}

	for(i = 0; i < SIZE; ++i)
	{
		if(abs(array[i]) > 10)
			sumAbs += array[i];
	}

	for(j = SIZE - 1; j > 0; --j)
	{
		for(i = 0; i < j; i++)
		{
			if(array[i] > array[i+1]){
				backup = array[i+1];
				array[i+1] = array[i];
				array[i] = backup;

			}

		}

	}

	puts("");
	printf("%s%f\n%s%f\n%s%f\n%s%f\n%s%f\n",
		"Min element:", min, "Max element:", max,
		"Sum of elements", sum, "Sum of positive lements", sumPos,
		"Sum of negative elements", sumNeg, "Sum of abs elements > 10", sumAbs);
	
	puts("Sorted array");

	for(i = 0; i < SIZE; ++i)
	{
		printf("%f\n",array[i]);
	}

	getch();
}