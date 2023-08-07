#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 * main - Entry point
 * Description: Complete the source code in order to print whether the number stored in the variable n is positive or negative.
 * Return: always 0
 */
int main(void) 
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0 )
	{
		printf("%d is negative", n); 
	} 
	return (0);
}
