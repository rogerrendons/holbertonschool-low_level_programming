#!/usr/bin/python3
"""Island perimeter"""


def island_perimeter(grid):
    """Perimeter of the island"""
    larg = len(grid) - 1
    anch = len(grid[0]) - 1
    Perim = 0

    for t1, rec in enumerate(grid):
        for t2, flag in enumerate(rec):

            if flag == 1:
                if t1 == 0 or grid[t1 - 1][t2] != 1:
                    Perim += 1
                if t2 == 0 or grid[t1][t2 - 1] != 1:
                    Perim += 1
                if t2 == anch or grid[t1][t2 + 1] != 1:
                    Perim += 1
                if t1 == larg or grid[t1 + 1][t2] != 1:
                    Perim += 1

    return Perim
