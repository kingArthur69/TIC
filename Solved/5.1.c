#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


void fillArray(int number, int *a,int n);
int sumMinMax(int *a, int n);
void printArray(int *a, int n);
void oddFirst(int *a, int n);


int main()
{
	int *a, *b;
	int n;

    printf("Enter number of array elements:\n");
    scanf("%d",&n);

	a = (int*)malloc(n*sizeof(int));
	b = (int*)malloc(n*sizeof(int));
	fillArray(1, a, n);
	fillArray(0, b, n);
	puts("Array b has been filled with random numbers");
	printArray(b, n);

	printf("Sum of Min and Max: %d\n",sumMinMax(b , n));

	oddFirst(b, n);
	puts("");
	printArray(b, n);

	getch();
   
}

void fillArray(int number, int *a,int n)
{
	size_t  i;

	srand(time(NULL));

	if(number == 1)
	{
		for(i=0; i<n; i++)
		{
			printf("[%d] = ",i);
			scanf("%d",&a[i]);
		}
	}
	else
	{
		for(i=0; i<n; i++)
		{
			a[i] = rand();
		}
	}
}

int sumMinMax(int *a, int n)
{
	size_t i;
	int max, min;

	max = a[0];
	min = a[0];
	for (i = 1; i < n; i++)
	{
		if(max < a[i])
			max = a[i];

		if(min > a[i])
			min = a[i];
	}

	return max+min;
}

void printArray(int *a, int n)
{
	
	size_t i;

	puts("Array:");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	
}

void oddFirst(int *a, int n)
{
	size_t j,  i , k;
	int backup, flag;

	for (j = 0; j < n; j++){
		if(a[j] % 2 == 0)
		{
			flag  = 0;
			for (i = j + 1; i < n; i++)
			{	
				if(a[i] % 2 != 0 && flag == 0)
				{
					backup = a[j];
					a[j] = a[i];
					
					if(i > j + 1){
						for(k = i; k > j + 1 ; k--)
						{
							a[k] = a[k-1];
						}
					}
					a[j + 1] = backup;
					flag = 1;
				}

			}
		}
	}
}

