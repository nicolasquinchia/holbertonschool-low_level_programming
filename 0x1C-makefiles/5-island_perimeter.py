#!/usr/bin/python3
"""This Module holds the funtion island perimeter
    that calculates the perimeter of a grid(island)
    """


def island_perimeter(grid):
    """This function Returns the perimeter of a grid(island)
    simulated as a list of list (matrix) of 1 and 0

    Args:
        grid ([list]): llist of lists that represent the grid to check

    Returns:
        [int]: perimeter of the grid 1 represents terrain 0 water
    """
    peri = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if y + 1 >= len(grid[x]) or grid[x][y + 1] == 0:
                    peri += 1
                if y - 1 < 0 or grid[x][y - 1] == 0:
                    peri += 1
                if x + 1 >= len(grid) or grid[x + 1][y] == 0:
                    peri += 1
                if x - 1 < 0 or grid[x - 1][y] == 0:
                    peri += 1
    return peri
