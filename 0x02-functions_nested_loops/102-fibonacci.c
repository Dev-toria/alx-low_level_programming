#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;
	long t1 = 1;
	long t2 = 2;
	long next_term = t1 + t2;

	printf("%ld, %ld", t1, t2);
	for (i = 3; i <= 50; i++)
	{
		printf(", %ld", next_term);
		t1 = t2;
		t2 = next_term;
		next_term = t1 + t2;
	}
	printf("\n");
	return (0);
}
