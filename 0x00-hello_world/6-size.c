#include <stdio.h>
/**
 * main - main function
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

	printf("size of a char: %zu byte\n", sizeof(charType));
	printf("size of an int: %zu bytes\n", sizeof(intType));
	printf("size of a long int: %zu bytes\n", sizeof(long_intType));
	printf("size of a long long int: %zu bytes\n", sizeof(long_longType));
	printf("size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
