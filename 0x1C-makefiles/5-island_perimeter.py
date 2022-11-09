#!/usr/bin/python3
""" Return the perimeter of the island described in grid """


def island_perimeter(grid):
    """ Method: return the perimeter. """
    perimeter = 0

    numrows = len(grid)

    if grid != []:
        numcolumns = len(grid[0])

    for a in range(numrows):
        for b in range(numcolumns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == numrows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == numcolumns or grid[a][b + 1] == 0:
                    perimeter += 1

        return perimeter
