#include <stdio.h>
#include <string.h>
/**
* main - main function entry
*
* Return: int(0)
*/
int main(void)
{
	char text[] = "_putchar";
	char s;
	int i;
	int len = strlen(text);

	for (i = 0; i <= len; i++)
	{
		s = text[i];
		if (s == '\0')
			s = '\n';
		putchar(s);
	}
	return (0);
}
