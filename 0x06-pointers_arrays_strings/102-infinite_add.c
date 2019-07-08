/**
* infinite_add - Adds two numbers.
* @n1: First number.
* @n2: Second number.
* r: Buffer to store the result.
* @size_r: Size of buffer r.
* Return: Result of sum. On error return 0.
*
* init - Initializes pointers needed for main to work.
* @n1: n1.
* @n2: n2.
* @l1: l1.
* @l2: l2.
* @size_r: size_r.
* @min: min.
* @imin: imin.
* @max: max.
* @imax: imax.
* @c1: c1.
* @c2: c2.
*/
int init(char **n1, char **n2, int *l1, int *l2, int size_r, char **min,
char **imin, char **max, char **imax, char **c1, char **c2)
{
	while (*(*n1)++)
		(*l1)++;
	while (*(*n2)++)
		(*l2)++;
	*n1 -= 2;
	*n2 -= 2;
	if (*l1 >= size_r || *l2 >= size_r)
		return (0);
	if (*l1 > *l2)
	{
		*min = *n2;
		*imin = *c2;
		*max = *n1;
		*imax = *c1;
	}
	else
	{
		*min = *n1;
		*imin = *c1;
		*max = *n2;
		*imax = *c2;
	}
	return (1);
}
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0, sum, exc = 0, i = size_r - 1, ret;
	char *c1 = n1, *c2 = n2, *min, *max, *imin, *imax;

	ret = init(&n1, &n2, &l1, &l2, size_r, &min, &imin, &max, &imax, &c1, &c2);
	if (!ret)
		return (0);
	r[i] = '\0';
	while (min >= imin)
	{
		i--;
		sum = (*n1-- - '0') + (*n2-- - '0') + exc;
		exc = sum / 10;
		sum %= 10;
		r[i] = sum + '0';
		max--;
		min--;
	}
	while (max >= imax)
	{
		i--;
		sum = (*max - '0') + exc;
		exc = sum / 10;
		sum %= 10;
		r[i] = sum + '0';
		max--;
	}
	if ((l1 == size_r - 1 || l2 == size_r - 1) && exc > 0)
		return (0);
	if (exc > 0)
		r[--i] = exc + '0';
	return (r + i);
}
