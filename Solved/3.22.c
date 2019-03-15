/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <conio.h>
#include <math.h>
#define SIZE 32
#define MANTISSE 23


int main()
{
	unsigned int number, i;
	int Bits[SIZE], Binary[MANTISSE];
	int binary = 0, count = 1, count2 = 1;
	int expCount = 126;
	int binExpCount = 0;



	puts("Enter number");
	scanf("%u", &number);

	if (number > 0)
		Bits[0] = 0;
	else
		Bits[0] = 1;

	while ((number != 0))
	{
		binary += (number % 2)*count;
		count *= 10;
		number /= 2;
		expCount ++;
	}
	
	printf("%d", expCount);
	puts("");
	while (expCount != 0)
	{
	    binExpCount += (expCount % 2)*count2;
	    count2 *= 10;
	    expCount /= 2;
	}
	
	printf("%d", binExpCount);
	puts("");

	printf("%d", binary);
	puts("");
	
	count /= 10;
	for (i = 0; i < SIZE; i++)
	{
	    
	    if(i >= (SIZE - MANTISSE -1)){
	        if(count != 0) {
	            Bits[i] = binary / count;
		        binary = binary % count;
		        count /= 10;
	        }
	        else{
	            Bits[i] = 0;
	        }
	    }
	    else{
			if (count2 != 0){
				Bits[i] =  binExpCount / count2;
				binExpCount %= count2;
				count2 /=10;
			}   
	    }
	    
	}
	

/*
	for (i = 0; i < MANTISSE; i++)
	{
		printf("%d", Binary[i]);
	}
	
	
	remainder = number % 10;
	
	while (remainder != 0)
	{
		count++;
	}
	*/

	puts("");

	puts("Number in 32 bit representation");

	for(i = 0; i < SIZE; i++ )
	{
		printf("%d\t", i);
		printf("%d\n", Bits[i]);
	}

getch();
}