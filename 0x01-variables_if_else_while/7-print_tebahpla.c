#include <stdio.h>

/**
 * main - Entry point
 * author: Josiah
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; h--)
		putchar(h);
	putchar('\n');
	return (0);
}
