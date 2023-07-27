#!/usr/bin/python3
"""
Module
"""


def island_perimeter(grid):
	"""
	Returns the perimeter of the island described in grid:

	grid is a list of integers:
		- 0 represents a water zone
		- 1 represents a land zone
		- One cell is a square with side length 1
		- Grid cells are connected horizontally/certically not diagonally
		- Grid is rectangular, width and height don't exceed 100
	"""
	water_zone = 0
	land_zone = 0
	for r in range(len(grid)):
		for c in range(len(grid[r])):
			if grid[r][c] == 1:
				water_zone += 1
				if r != len(grid) - 1:
					if grid[r + 1][c] == 1:
						land_zone += 1
				if c != len(grid[r]) - 1:
					if grid[r][c + 1] == 1:
						land_zone += 1
	perimeter = (water_zone * 4) - (land_zone * 2)
	return perimeter
