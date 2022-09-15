#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int di, li;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (di = 1; di <= n; di++)
		{
			for (li = 1; li < di; li++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
