#!/usr/bin/python3
"""island_ perimeter module."""


def island_perimeter(grid):
    """Function that calculates the perimeter of an island on a grid."""
    i = 0
    j = 0
    perimeter = 0
    if grid is None or type(grid) is not list or type(grid[0]) is not list:
        return 0
    length = len(grid)
    length2 = len(grid[0])
    while i < length:
        while j < length2:
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == length2 - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                if i == length - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
            j += 1
        j = 0
        i += 1
    return perimeter
