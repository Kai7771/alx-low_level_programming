#include <stdio.h>
#include "main.h"

/**
 * _int_strlen_recursion - prints length of string
 * @s: input
 *
 * Return: Always 0 (Success)
 */

int_strlen_recursion(char *s)
{
	if (*s == '\0')

		return (0);
	else
		return (1+ _stren_recursion(s + 1));
}
