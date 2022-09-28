#include <stdio.h>
#include "main.h"

/**
 * print_rev_recursion - prints string in reverse()
 * @s: input
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion( s + 1 );
	else
		return;
	_putchar(*s);
}
