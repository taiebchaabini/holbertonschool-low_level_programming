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
    height = 0
    width = 0
    maxw = []
    maxh = []
    perimeter = 0
    lasty = 0
    lastx = 0
    positions = []
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                lastx = x
                lasty = y
                try:
                    pos = str(lasty) + ":" + str(lastx)
                    if y > 0 and grid[y - 1][x] == 1 or y < len(grid) - 1\
                            and grid[y + 1][x] == 1:
                            if pos not in positions:
                                height += 1
                                positions.append(pos)
                    if x > 0 and grid[y][x - 1] == 1 or y < len(grid[y]) - 1\
                            and grid[y][x + 1] == 1:
                            if pos not in positions:
                                positions.append(pos)
                                width += 1
                    if height > maxh:
                        maxh = height
                    if width > maxw:
                        maxw = width
                except Exception as e:
                    pass
    for i in positions:
        if i[0] not in maxh:
            maxh += i[0]
        if i[2] not in maxw:
            maxw += i[2]
    perimeter = (len(maxw) + len(maxh)) * 2
    return (perimeter)
