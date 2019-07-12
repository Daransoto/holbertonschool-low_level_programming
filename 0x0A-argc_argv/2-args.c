#include <stdio.h>
/**
* main - Entry point.
* @argc: Argument count.
* @argv: Arguments passed.
* Return: Always 0 (success).
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
