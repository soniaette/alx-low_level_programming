#include "main.h"

/**
  * _strpbrk - This searches a string for any of a set of bytes.
  *
  * @s: This is the string to be searched.
  *
  * @accept: This is the set of bytes to be searched for.
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int k, j;

	for (k = 0; s[k] != '\0'; k++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[k] == accept[j])
	return (s + k);
	}
	}
	return (0);
}
