#!/usr/python3
"""gets perimeter of island"""


def island_perimeter(grid):
    """actual function"""
    noland = 0
    sea = 1
    count = 0
    for intList in grid:
        if not 1 in intList:
            noland = 1
        else:
            for spot in intList:
                if spot:
                    if not sea:
                        count += 1
                    sea = 1
                else:
                    count = count + sea + noland
                    sea = 0
            noland = 0
    return count
