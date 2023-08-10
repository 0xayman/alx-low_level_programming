#include <stdio.h>
/**
* main - Entry point
*
* Return: always 0
*/
int main(void)
{
	char ch;
	int intg;
	long along;
	long long llg;
	float af;

	printf("Size of a char: %zu byte(s)\n", sizeof(ch));
	printf("Size of an int: %zu byet(s)\n", sizeof(intg));
	printf("Size of a long int: %zu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llg));
	printf("Size of a float: %zu byte(s)\n", sizeof(af));

	return (0);
