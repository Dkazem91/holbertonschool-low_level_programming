#!/usr/bin/python3
"""gets perimeter of island"""


def checkdirection(array, idx):
    """checks the direction"""
    try:
        if not array[idx]:
            return 1
        return 0
    except:
        return 1


def island_perimeter(grid):
    """actual function"""
    count = 0
    if (grid and isinstance(grid, list) and
        all(isinstance(row, list) for row in grid)
        and all([[isinstance(element, int) for element in row]
                 for row in grid])):
        for idx1, row in enumerate(grid):
            for idx2, spot in enumerate(row):
                if spot:
                    count = count + checkdirection(grid[idx1 - 1], idx2)
                    count = count + checkdirection(row, idx2 - 1)
                    count = count + checkdirection(row, idx2 + 1)
                    if idx1 < len(grid) - 1:
                        count = count + checkdirection(grid[idx1 + 1], idx2)
                    else:
                        count += 1
    return count
