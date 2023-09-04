#include "main.h"
#include "_strlen.c"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate all args
 * @ac: argc
 * @av: arguments
 *
 * Return: array
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	int count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	char *t;
	t = malloc(size(char) * c + 1);
	
	if (t == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < count; i++)
	{
		t[i] = str[i];
	}
	return t;
}
