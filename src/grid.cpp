#include "grid.h"
#include "colors.h"
#include <iostream>

Grid::Grid()
// constructor
{
    numRows = 20;
    numCols = 10;
    cellSize = 30;
    Initialize();
    colors = GetCellColors();
}

void Grid::Initialize()
{
    for (int rows = 0; rows < numRows; rows++)
    {
        for (int cols = 0; cols < numCols; cols++)
        {
            grid[rows][cols] = 0;
        }
    }
}

void Grid::Print()
{
      for (int rows = 0; rows < numRows; rows++)
    {
        for (int cols = 0; cols < numCols; cols++)
        {
            std::cout << grid[rows][cols] << " ";
        }
        std::cout << std::endl;
    }
}

void Grid::Draw()
{
      for (int rows = 0; rows < numRows; rows++)
    {
        for (int cols = 0; cols < numCols; cols++)
        {
            int cellValue = grid[rows][cols];
            int posX = cols * cellSize + 1;
            int posY = rows * cellSize + 1;
            int width = cellSize -1;
            int height = cellSize -1;
            DrawRectangle(posX, posY, width, height, colors[cellValue]);
        }
    }
}