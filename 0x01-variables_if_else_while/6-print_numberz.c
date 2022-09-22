#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
		putchar("%d", num);
	putchar('\n');
	return (0);
}

