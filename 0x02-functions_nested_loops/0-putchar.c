#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char str[] = "_putchar";
	int i;
	char s;

	while (i < strlen(str))
	{
		s = str[i];
		i++;

		if (s == '\0')
			s = '\n';
		putchar(s);
	}
	return (0);
}
