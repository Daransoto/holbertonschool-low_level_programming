/**
* check_divisors - Checks if number has divisors different from 1 and n.
* @d: Divisor to check.
* @n: Number to check.
* Return: 1 if not divisor found, 0 if found.
*/
int check_divisors(int d, int n)
{
	if (n % d == 0)
		return (0);
	else if (n / 2 > d)
		return (check_divisors(d + 2, n));
	else
		return (1);
}
/**
* is_prime_number - Checks if the input integer is a prime number.
* @n: Number to check.
* Return:1 if the input integer is a prime number, otherwise 0.
*/
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (check_divisors(3, n));
}
