
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = ' ';
	int int_num = 0;
	int long_int = 0l;
	int long_long_int = 0ll;
	float float_num = 0.0f;


	printf("Size of char:%d\n", sizeof(char));
	printf("Size of int:%d\n", sizeof(int));
	printf("Size of a long int:%d\n", sizeof(long));
	printf("Size of a long long int:%d\n", sizeof(long long));
	printf("Size of a float:%d\n", sizeof(float));
	return (0);
}
