#include <stdio.h>

/**
* main - Entry point
*
* Description: prints all letters of the alphabets using putchar
*
*Return: returns 0 (Success)
*/

int main(void)
{
	char ch;

	ch = 'a';

	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');
	putchar('\n');
	return (0);
}
