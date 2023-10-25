#!/usr/bin/python3
""" Island Perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in the grid."""
    width = len(grid[0])
    height = len(grid)
    land_cells = 0
    shared_edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                land_cells += 1
                if j > 0 and grid[i][j - 1] == 1:
                    shared_edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    shared_edges += 1

    perimeter = land_cells * 4 - shared_edges * 2

    return perimeter
