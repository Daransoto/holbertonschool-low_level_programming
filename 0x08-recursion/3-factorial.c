/**
* factorial - Returns the factorial of a given number.
* @n: Number to get the factorial.
* Return: Factorial of the number.
*/
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
