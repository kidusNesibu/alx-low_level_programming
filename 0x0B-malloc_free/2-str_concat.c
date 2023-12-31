#include"main.h"
#include<stdlib.h>
/**
 * str_concat - concat strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: pointer to dynamic memo
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *p;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		p[len1 + i] = s2[i];
	}
	p[len1 + len2] = '\0';
	return (p);
}
