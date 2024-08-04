#!/usr/bin/python3
""" periemter module """


def island_perimeter(grid):
    """ method that returns the perimeter of the island
    described in grid
    """
    ls = 0
    side = 0
    for height in range(len(grid)):
        for width in range(len(grid[height])):
            if grid[height][width] == 1:
                ls += 1
                if height > 0 and grid[height-1][width] == 1:
                    side += 1
                if width > 0 and grid[height][width-1] == 1:
                    side += 1
    return ls * 4 - side * 2
