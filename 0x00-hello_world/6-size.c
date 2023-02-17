#include <stdio.h>
/**
 * main - entry point
 *
 * prints the various sizes of data types and exits
 * Returns: int(0) (success)
 */
int main(void)
{
	char charType;
	int intType;
	long int long_intType;
	long long int long_longType;
	float floatType;

	printf("size of a char: %lu byte\n", sizeof(charType));
	printf("size of an int: %lu bytes\n", sizeof(intType));
	printf("size of a long int: %lu bytes\n", sizeof(long_intType));
	printf("size of a long long int: %lu bytes\n", sizeof(long_longType));
	printf("size of a float: %lu bytes\n", sizeof(floatType));

	return (0);
}
