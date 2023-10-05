#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integer_type;
	float float_type;
	double double_type;
	char char_type;

	printf("Size of integer type: %lu bytes\n", sizeof(integer_type));
	printf("Size of float type: %lu bytes\n", sizeof(float_type));
	printf("Size of double type: %lu bytes\n", sizeof(double_type));
	printf("Size of char type: %lu bytes\n", sizeof(char_type));
	return (0);
}	
