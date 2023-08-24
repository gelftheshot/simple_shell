#include "main.h"

/**
 *_putchar - prints a char to steout
 *@i: the int to be printed
 *Return: it is void function
**/

void _putchar(char i)
{
	write(1, &i, 1);
}

/**
 * _strncmp - compare two strs upto N
 * @str1: is the first string
 * @str2: is the second string
 * @n: how much we need to compare
 * Return: 0 on match and 1 otherwise
 */

int _strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	if (str1 == NULL)
		return (-1);
	for (i = 0; i < n && str2[i]; i++)
	{
		if (str1[i] != str2[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * *_strcat - function to concatinat str
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';
	return (dest);
}

/**
 * _memset - changes string with costant char
 * @s: input pointer to string
 * @b: constant char
 * @n: number of bytes
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

