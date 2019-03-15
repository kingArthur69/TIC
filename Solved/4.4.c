#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h> 
#include <time.h>

#define SIZE 200

int main()
{
	
	int array[SIZE];
	size_t i, j = 0;
	int flag = 1, backup, randNumber;
	int count = 0;

	srand ( time(NULL) );
	for (i = 0; i < SIZE; i++)
	{
		array[i] = random(SIZE) + 1;
	}

	puts("Array:");

	for(i = 0; i < SIZE; i++)
	{
		printf("%3d ", array[i]);
		
	}
	puts("");

	for(j = 1; j < SIZE - 1; j++)
	{
		flag = 1;
		while (flag == 1)
		{	
			if(abs(array[j+1] - array[j]) > 5 && abs(array[j-1] - array[j]) > 5 )
			{
				flag = 0;
			}
			else 
			{
				backup = array[j];
				randNumber = random(SIZE - j -1);

				printf("\nChanging a[%d] = %d with a[%d] = %d\n",
					j, array[j],randNumber + j + 1, array[randNumber + j + 1] );
				
				array[j]= array[randNumber + j + 1 ];
				array[randNumber + j + 1 ] = backup;
				
			}
			count++;
			if (count > SIZE)
			{
				flag = 0;
				printf("\nUnnable to shuffle correctly a[%d] = %d\n", j, array[j] );
			}

		}
	}
	puts("Shuffled array:");

	for(i = 0; i < SIZE; i++)
	{
		printf("%3d ", array[i]);
		
	}

	getch();
}


int random (int N)
{
	return rand() % N;
}