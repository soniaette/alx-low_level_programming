#include "main.h"

/**
  * _strchr - This locates a character in a string.
  *
  * @s: This is the string to be searched.
  *
  * @c: This is the character to be located.
  *
  * Return: Always o.
  */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}
