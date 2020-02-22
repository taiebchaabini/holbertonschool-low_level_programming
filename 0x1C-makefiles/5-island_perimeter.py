#!/usr/bin/python3

"""
returns the perimeter of the island described in grid:
grid is a list of list of integers:
- 0 represents a water zone
- 1 represents a land zone
- One cell is a square with side length 1
- Grid cells are connected horizontally/vertically (not diagonally).
- Grid is rectangular, width and height don’t exceed 100
* Grid is completely surrounded by water, and there is one island (or nothing).
* The island doesn’t have “lakes” (water inside that isn’t connected to the
water around the island).
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid:
    grid is a list of list of integers:
    - 0 represents a water zone
    - 1 represents a land zone
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100
    * Grid is completely surrounded by water, and there is one island
    (or nothing).
    * The island doesn’t have “lakes” (water inside that isn’t connected to the
    water around the island).
    """
    perimeter = 0
    for y in grid:
        for x in y:
            if x == 1:
                perimeter += 4
    if perimeter > 0:
        perimeter = int((perimeter / 2) + 2)
    return (perimeter)
