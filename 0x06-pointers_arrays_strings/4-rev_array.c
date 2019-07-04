/**
* reverse_array - Reverses the content of an array of integers.
* @a: Array to reverse.
* @n: Number of elements of array.
*/
void reverse_array(int *a, int n)
{
	int *b = a + n - 1;

	while (b > a)
	{
		*a += *b;
		*b = *a - *b;
		*a -= *b;
		a++;
		b--;
	}
}
