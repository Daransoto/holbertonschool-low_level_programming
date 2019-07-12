#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point.
* @argc: Argument count.
* @argv: Arguments passed.
* Return: 0 if success, else 1.
*/
int main(int argc, char *argv[])
{
	int sum = 0, i = 1;
	char *ar;

	while (i < argc)
	{
		ar = argv[i];
		while (*ar)
			if (!isdigit(*ar++))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i++]);
	}
	printf("%d\n", sum);
	return (0);
}
