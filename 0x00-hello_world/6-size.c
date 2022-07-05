#include <stdio.h>
/**
 * main - Program tha prints various types on the computer
 * it is compiled on
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;
	char charType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
