#include <stdio.h>
#include <conio.h>
#include <math.h>

double sinA(double x, int N);
double factorial(int number);

int main()
{
	double x;
	int N, fact = 1, i;

	puts("Enter angle");
	scanf("%lf", &x);
	puts("Enter precision by:");
	scanf("%d", &N);

	puts("Sin by Tailor rows:");
	printf("%f\n", sinA(x,N));
	puts("Sin by math.h");
	printf("%f", sin(x));


	getch();
}

double sinA(double x, int N)
{
	size_t i;
	double sin = x;
	double backup = 1;
	if(N > 1){
		for(i = 1; i < N; i++)
		{
			backup *= - 1; 
			sin +=(double) backup*pow(x,2*i + 1) / (factorial(2*i + 1));
		}
	}
	
	return sin;
}

 double factorial(int n)
{
	int fact;
	size_t  i;
	fact = 1;

	for(i = 1; i <= n; ++i)
	{
		fact *= i;
	}
	
	return fact;
}