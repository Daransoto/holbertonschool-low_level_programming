#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
* main - Entry point.
* @argc: Argument counter.
* @argv: Argument vector.
* Return: Always 0 (success).
*/
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	else if (strcmp(argv[2], "+") && strcmp(argv[2], "-") &&
		strcmp(argv[2], "*") && strcmp(argv[2], "/") && strcmp(argv[2], "%"))
	{
		puts("Error");
		exit(99);
	}
	else if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && !atoi(argv[3]))
	{
		puts("Error");
		exit(100);
	}
	func = get_op_func(argv[2]);
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
