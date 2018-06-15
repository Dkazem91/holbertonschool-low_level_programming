#!/usr/bin/python3
"""gets perimeter of island"""


def island_perimeter(grid):
    """actual function"""
    count = 0
    if grid:
        glen = len(grid)
        rlen = len(grid[0])
        for idx1, row in enumerate(grid):
            for idx2, spot in enumerate(row):
                if spot:
                    if idx1 == 0:
                        count += 1
                    else:
                        if not grid[idx1 - 1][idx2]:
                            count += 1
                    if idx1 >= glen - 1:
                        count += 1
                    else:
                        if not grid[idx1 + 1][idx2]:
                            count += 1
                    if idx2 == 0:
                        count += 1
                    else:
                        if not row[idx2 - 1]:
                            count += 1
                    if idx2 >= rlen - 1:
                        count += 1
                    else:
                        if not row[idx2 + 1]:
                            count += 1
    return count
