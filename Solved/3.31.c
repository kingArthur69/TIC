#include <stdio.h>
#include <conio.h>
#define SIZE 10
#define SIZEB 3

void oddFirst(int *a, int n);

int main() {
	int A[SIZE], D[SIZE];
	int B[SIZEB], C[SIZEB];
	size_t i, j, k = 0;
	int max, min, backup;
	int even = 0, odd = 0, fifth = 0;
	
	puts("Enter 10 int numbers");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &A[i]);
	}
	
	for (j = SIZE - 1; j > 0; j--){
		for (i = 0; i < j; i++){
			if(A[i] > A[i+1])
			{
				backup = A[i];
				A[i] = A[i+1];
				A[i+1] = backup;
			}
		}
	}
	
	
	for (i = 0; i < SIZE; i++)
	{
		D[i] = A[i];
	}

	evenFirst(D,SIZE);
	
	for (j = 0; j < SIZEB; j++)
	{
		B[j] = A[j];
		C[j] = A[j  + SIZE - SIZEB];
	}
	printf("Arrays:\nA:\tD:\tB:\tC:\n");
	for (i = 0; i < SIZE; i++){
		printf("%d\t", A[i]);
		printf("%d\t", D[i]);
		if (i < 3){
			printf("%d\t", B[i]);
			printf("%d\t", C[i]);
		}
		puts("");
	}

	for (i = 0; i < SIZE; i++)
	{
		if(A[i]%2 == 0)
		{
			even++;
		}
		else 
		{
			odd++;
		}
		if(A[i] % 5 == 0)
			fifth++;
	}

	printf("Number of even: %d\nNumber of odd: %d\nNumber of div 5: %d",
		even, odd, fifth);


	getch();
}

void evenFirst(int *a, int n)
{
	size_t j,  i , k;
	int backup, flag;

	for (j = 0; j < n; j++){
		if(a[j] % 2 != 0)
		{
			flag  = 0;
			for (i = j + 1; i < n; i++)
			{	
				if(a[i] % 2 == 0 && flag == 0)
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