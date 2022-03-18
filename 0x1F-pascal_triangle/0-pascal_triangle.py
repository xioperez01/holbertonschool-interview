#!/usr/bin/python3
'''
0-pascal_triangle
'''


def pascal_triangle(n):
    ''' Returns a list of lists of integers representing the Pascal's triangle
    of n '''
    triangle = []
    for number in range(n):
        row = []
        for value in range(number + 1):
            if value == 0 or value == number:
                row.append(1)
                continue
            row.append(triangle[number - 1][value - 1] + triangle[number - 1][value])
        triangle.append(row)
    return triangle
