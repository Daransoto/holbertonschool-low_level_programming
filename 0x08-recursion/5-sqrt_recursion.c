/**
* test - Test numbers to see if they are the sqare root of m.
* @n: Testing number.
* @m: Number sqared.
* Return: Square root of the number.
*/
int test(int n, int m)
{
	int r = 0;

	if (n * n == m)
		return (n);
	else if (n * n < m)
		r = test(n + 1, m);
	else
		return (-1);
	return (r);
}
/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: Number to obtain the square root.
* Return: square root of the number.
*/
int _sqrt_recursion(int n)
{
	return (test(1, n));
}
