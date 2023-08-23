#!/usr/bin/python3
"""
python function file
"""


def island_perimeter(grid):
    """
    island perimeter
    """
    s = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if j == 0:
                    s += 1
                elif grid[i][j - 1] != 1:
                    s += 1
                if j == (len(grid[0]) - 1):
                    s += 1
                elif grid[i][j + 1] != 1:
                    s += 1
                if i == 0:
                    s += 1
                elif grid[i - 1][j] != 1:
                    s += 1
                if i == (len(grid) - 1):
                    s += 1
                elif grid[i + 1][j] != 1:
                    s += 1
    return s
