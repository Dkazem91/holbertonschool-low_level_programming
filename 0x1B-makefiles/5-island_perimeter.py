#!/usr/bin/python3
"""gets perimeter of island"""
def checkdirection(array, idx):
    try:
        if not array[idx]:
            return 1
    except:
        return 0
def island_perimeter(grid):
    """actual function"""
    count = 0
    for idx1, row in enumerate(grid):
        for idx2, spot in enumerate(row):
            if spot:
                count += checkdirection(grid[idx1 - 1], idx2)
                count += checkdirection(row, idx2 - 1)
                count += checkdirection(grid[idx1 + 1], idx2)
                count += checkdirection(row, idx2 + 1)
    return count
