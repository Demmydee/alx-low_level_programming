#!/usr/bin/python3
"""Returns the perimeter of an island"""


def island_perimeter(grid):
    """Returns the perimiter of an island described in grid

    Args:
        grid (list): A list of integers
    Returns:
        The perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    sides = 0
    edge = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                sides += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return sides * 4 - edge* 2
