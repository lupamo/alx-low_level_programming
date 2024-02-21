#!/usr/bin/python3
"""island perimeter function"""

def island_perimeter(grid):
	"""
 		function that returns the perimeter of an island
		matrix manipulation
 	"""
	pm = 0

	for i in range(len(grid)):
		for j in range(len(grid[0])):
			if grid[i][j] == 1:
				pm += 4

				if i > 0 and grid[i - 1][j] == 1:
					pm -= 2

				if j > 0 and grid[i][j - 1] == 1:
					pm -= 2
	return pm

