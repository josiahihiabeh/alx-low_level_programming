#include <stdlib.h>
#include <time.>
#include <stdio.h>

/* 
 * main - Entry point
 * Description: Complete the source code
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n)
	} else if (n == 0)
	{
		printf("%d is zero\n", n)
	} else
	{
		printf("%d is negative", n)
	} 
	return (0);
}
