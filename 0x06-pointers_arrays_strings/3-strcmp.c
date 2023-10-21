#include "main.h"

/**
  * _strcmp - This compares pointers to two strings.
  *
  * @s1: This is the pointer to the first string.
  *
  * @s2: This is the pointer to the second string.
  *
  * Return: s1, s2
  */
int _strcmp(char *s1, char *s2)
{
int k = 0;

while (s1[k] != '\0' && s2[k] != '\0')
{
	if (s1[k] != s2[k])
	{
	return (s1[k] - s2[k]);
	}
	k++;
	}
	return (0);
}
