/**
* swap_int - Swaps the values of two integers.
* @a: Pointer to first int to swap.
* @b: Pointer to second int to swap.
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
