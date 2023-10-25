#include "main.h"

/**
  * _strstr - This locates a substring.
  *
  * @needle: This is the substring to be located.
  *
  * @haystack: This is the string to be searched.
  *
  * Return: Always 0.
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')
	{
	I++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);
}
