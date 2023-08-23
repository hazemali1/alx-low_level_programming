#!/usr/bin/python3
"""
python function file
"""


def island_perimeter(grid):
    """
    island perimeter
    """
    s = 0
    d = 0
    q = 0
    for i in grid:
        q += 1
        for j in range(len(i)):
            if i[j] == 1 and i[j + 1] == 1:
                if s == 0:
                    s += 1
                s += 1
            if i[j] == 1 and grid[q][j] == 1:
                if d == 0:
                    d += 1
                d += 1
            if i[j] == 1 and i[j + 1] == 0 and grid[q][j] == 0:
                return 1
    return ((s + d) * 2)
