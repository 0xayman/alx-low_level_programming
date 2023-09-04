#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: combination of the 2
 */
char *str_concat(char *s1, char *s2)
{
    char *result;
    int i = 0, j = 0;
    int len1 = 0, len2 = 0;
    
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    
    len1 = strlen(s1);
    len2 = strlen(s2);
    result = malloc(sizeof(char) * (len1 + len2 + 1));
    
    if (result == NULL)
    {
        return (NULL);
    }
    
    for (i = 0; i < len1; i++)
    {
        *(result + i) = *(s1 + i);
    }
    for (j = len1; j < (len1 + len2); j++)
    {
        *(result + j) = *(s2 + j - len1);
    }
    return (result);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
