#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point.
* @argc: Argument count.
* @argv: Arguments passed.
* Return: 0 if success, else 1.
*/
int main(int argc, char *argv[])
{
	int r = 0, par;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	par = atoi(argv[1]);
	while (par > 0)
		if (par >= 25)
			par -= 25, r++;
		else if (par >= 10)
			par -= 10, r++;
		else if (par >= 5)
			par -= 5, r++;
		else if (par >= 2)
			par -= 2, r++;
		else
			par--, r++;
	printf("%d\n", r);
	return (0);
}
