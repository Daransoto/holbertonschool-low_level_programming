#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - Entry point.
* @argc: Argument counter.
* @argv: Argument vector.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	char pass[65];
	char ans[7];
	int sum = 0, i = 0;

	(void) argc;
	strcpy(pass, "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJc");
	strcat(pass, "YLU+4mjW6fxqZeF3Qa1rPhdKIouk");
	ans[7] = '\0';
	ans[0] = pass[(strlen(argv[1]) ^ 0x3b) & 0x3f];
	while (argv[1][i])
		sum += argv[1][i++];
	ans[1] = pass[(sum ^ 0x4f) & 0x3f];
	i = 0, sum = 1;
	while (argv[1][i])
		sum *= argv[1][i++];
	ans[2] = pass[(sum ^ 0x55) & 0x3f];
	sum = 0;
	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] > sum)
			sum = argv[1][i];
	srand(sum ^ 0xe);
	ans[3] = pass[rand() & 0x3f];
	sum = 0;
	for (i = 0; argv[1][i]; i++)
		sum += (argv[1][i] * argv[1][i]);
	ans[4] = pass[(sum ^ 0xef) & 0x3f];
	for (i = *argv[1]; i > 0; i--)
		sum = rand();
	ans[5] = pass[(sum ^ 0xe5) & 0x3f];
	printf("%s", ans);
	return (0);
}
