include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "_putchar";
	
	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\');

	return (0);

}