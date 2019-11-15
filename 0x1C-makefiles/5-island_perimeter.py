#!/usr/bin/python3
"""island_ perimeter module."""


def island_perimeter(grid):
    """Function that calculates the perimeter of an island on a grid."""
    i = 1
    j = 1
    perimeter = 0
    if grid is None or type(grid) is not list:
        return 0
    length = len(grid)
    length2 = len(grid[0])
    while i < length - 1:
        while j < length2 - 1:
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
            j += 1
        j = 1
        i += 1
    return perimeter
