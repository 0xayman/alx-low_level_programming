#include "variadic_functions.h"

/**
 * print_strings - function print
 * @separator: input
 * @n: input number
 * @...: input
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
