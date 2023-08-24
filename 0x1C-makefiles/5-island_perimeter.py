#!/usr/bin/python3
""" A function that calculates the perimeter of an island """
def island_perimeter(grid):
    """
    Calculates the perimeter of an island in a grid.

    Args:
        grid (List[List[int]]): A 2D grid representing the island,
        where 1 represents land and 0 represents water.

    Returns:
        int: The perimeter of the island.
    """

    num_rows = len(grid)
    num_cols = len(grid[0])
    perimeter = 0

    STARTING_SIDES = 4
    SHARED_SIDES = 2

    visited = set()

    for row in range(num_rows):
        for col in range(num_cols):
            if grid[row][col] == 1:
                perimeter += STARTING_SIDES

                # Check left neighbor
                if col > 0 and (row, col - 1) in visited:
                    perimeter -= SHARED_SIDES

                # Check top neighbor
                if row > 0 and (row - 1, col) in visited:
                    perimeter -= SHARED_SIDES

                visited.add((row, col))

    return perimeter
