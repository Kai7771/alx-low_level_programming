#include <stdio.h>

/**
* main - Entry point
*
* Description: Letters of the alphabets are printed
* in lower and upper cases.
*
* Return: programs returns 0 (Success)
*/

int main(void)
{
	char ch;

	char CH;

	ch = 'a';

	ch = 'B';

	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');

	do {
		putchar(CH);
		CH++;
	} while (ch <= 'Z');

	putchar('\n');

	return (0);
}
