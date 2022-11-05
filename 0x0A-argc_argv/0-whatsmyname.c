#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: number arguments passed to the function
 * @argv: Argument vetor of pointers to strings
 *
 * Return: Always 0 on success
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	prinf("%s\n", argv[0]);
	return (0);
}
