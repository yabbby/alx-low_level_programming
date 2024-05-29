#!/usr/bin/python3
"""Module containing functions to get perimeter of an island in a grid"""


def get_size(grid, row, col):
    """Returns the size of the island"""
    if row < len(grid) - 1 and grid[row + 1][col] == 1:
        return 1 + get_size(grid, row + 1, col)
    elif col < len(grid) - 1 and grid[row][col + 1] == 1:
        return 1 + get_size(grid, row, col + 1)
    elif grid[row][col] == 1:
        return 1
    else:
        return 0


def island_perimeter(grid):
    """Returns the island perimeter of a grid"""
    for i, row in enumerate(grid):
        for j, el in enumerate(row):
            if el == 1:
                return (get_size(grid, i, j) + 1) * 2
