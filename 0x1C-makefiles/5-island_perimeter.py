#!/usr/bin/python3
'''
Compute an island perimeter described in `grid`

grid is a list of list of integers:
    - 0 represents a water zone
    - 1 represents a land zone
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100
    - Grid is completely surrounded by water,
      and there is one island (or nothing).
    - The island doesn’t have “lakes”
      (water inside that isn’t connected to the water around the island).
'''


def island_perimeter(grid):
    '''Return the island perimeter'''

    perimeter = 0
    width = len(grid[0])
    height = len(grid)

    for h in range(height):
        for w in range(width):

            # If we find a floor cell
            if grid[h][w] == 1:

                # If there is just water above it or nothing
                # we add its lower side
                if h == 0:
                    perimeter += 1
                elif grid[h - 1][w] == 0:
                    perimeter += 1

                # Same for below:
                if h == height - 1:
                    perimeter += 1
                elif grid[h + 1][w] == 0:
                    perimeter += 1

                # Same for right:
                if w == 0:
                    perimeter += 1
                elif grid[h][w - 1] == 0:
                    perimeter += 1

                # Same for left:
                if w == width - 1:
                    perimeter += 1
                elif grid[h][w + 1] == 0:
                    perimeter += 1

    return perimeter
