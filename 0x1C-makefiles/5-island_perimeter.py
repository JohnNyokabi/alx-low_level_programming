#!/usr/bin/python3
"""
Return the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """Method that returns the perimeter of the island defined by the grid."""
    # p = perimeter
    p = 0
    for column in range(len(grid)):
        for row in range(len(grid[0])):
            if grid[column][row] == 1:
                try:
                    if grid[column - 1][row] == 0 or column == 0:
                        p += 1
                except IndexError:
                    p += 1

                try:
                    if grid[column + 1][row] == 0:
                        p += 1
                except IndexError:
                    p += 1

                try:
                    if grid[column][row - 1] == 0 or row == 0:
                        p += 1
                except IndexError:
                    p += 1

                try:
                    if grid[column][row + 1] == 0:
                        p += 1
                except IndexError:
                    p += 1
    return p
