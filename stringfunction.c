#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination
 * @src: source
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strcmp - compare two strings
 * @s1 : pointerto char
 * @s2 : pointer to char
 * Return: the value of dust
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int y;

	x = 0;

	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	y = s1[x] - s2[x];
	return (y);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer to the array
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	nstr = (char *)malloc(sizeof(char) * (i + 1));

	if (nstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		nstr[j] = str[j];

	return (nstr);
}

