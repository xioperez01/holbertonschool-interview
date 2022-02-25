#!/usr/bin/python3
'''Island Permimeter Module'''


def island_perimeter(grid):
    '''Calculates the perimieter of an island'''
    row_lenght = len(grid)
    col_lenght = len(grid[0])
    perimeter = 0
    i = 0
    while i < row_lenght:
        j = 0
        while j < col_lenght:
            cell = grid[i][j]
            if cell == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == row_lenght - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == col_lenght - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
            j += 1
        i += 1
    return perimeter
