#include <stdlib.h>
/**
* alloc_grid - Creates a 2 dimensional array of integers.
* @width: Width of array.
* @height: Height of the array.
* Return: Pointer to resulting array, NULL when error.
*/
int **alloc_grid(int width, int height)
{
	int **grid, in = height, c;

	if (width <= 0 || height <= 0)
		return (0);

	grid = malloc(height * sizeof(int *));
	if (!grid)
		return (0);

	while (height-- > 0)
	{
		grid[height] = malloc(width * sizeof(int));
		if (!grid[height])
		{
			while (height < in)
				free(grid[height++]);
			free(grid);
			return (0);
		}
	}
	for (height = 0; height < in; height++)
		for (c = 0; c < width; c++)
			grid[height][c] = 0;
	return (grid);
}
