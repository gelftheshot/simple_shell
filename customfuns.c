#include "main.h"

/**
 *promt_printer - just prints the promot "<3"
 *Return: it is void functin
**/

void promt_printer(void)
{
	print("$ ");
}

/**
 * print - a function that prints str to stdout
 * @str: is the string to be written on stdout
 * Return: it is a void functin
**/

void print(char *str)
{
	write(STDOUT_FILENO, str, _strlen(str));
}

/**
 * printn - prints number to stdout
 * @str: the number to be written
 * Return: nothing it is void function
 **/

void printe(char *str)
{
	write(STDERR_FILENO, str, _strlen(str));
}

/**
 *printn - prints num ot stdout
 *@i: is the number
 *Return: void
 **/

void printn(int i)
{
	char j;

	if (i >= 10)
		printn(i / 10);
	j = ((i % 10) + '0');
	write(2, &j, 1);
}
/**
 * control_plus_c - Handle ^C
 * @signal:Captured Signal
 * Return: Void
 */
void control_plus_c(int signal)
{
	if (signal == SIGINT)
	{
		print("\n");
		promt_printer();
	}
}
