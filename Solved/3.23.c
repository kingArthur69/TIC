#include <stdio.h>
#include <conio.h>
#define SIZE 32
#define MANTISSE 23


int main()
{
	unsigned int number, i;
	int Bits[SIZE];
	int binary = 0, count = 1;

	puts("Enter number");
	scanf("%u", &number);


	for (i = 0; i < SIZE; i++)
	{
		Bits[SIZE - 1 - i] = (number % 2);
		number /= 2;
	}

	puts("");

	puts("Number in 32 bit representation");

	for(i = 0; i < SIZE; i++ )
	{
		printf("%d\t", i);
		printf("%d\n", Bits[i]);
	}

	getch();
}