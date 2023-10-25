#include "main.h"

/**
  * _strspn - This gets the length of a prefix substring.
  *
  * @s: This is the string to be searched.
  *
  * @accept: This is the prefix to be measured.
  *
  * Return: Always 0.
  */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	{
	i++;
	break;
	}
	else if (accept[k + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
