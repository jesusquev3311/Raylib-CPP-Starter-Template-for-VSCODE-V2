#include "grid.h"
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

std::vector<Color> Grid::GetCellColors()
{
    const Color darkGrey = {26, 31, 40, 255};
    const Color green = {47, 230, 23, 255};
    const Color red = {232, 18, 18, 255};
    const Color orange = {226, 116, 17, 255};
    const Color yellow = {237, 234, 4, 255};
    const Color purple = {166, 0, 247, 255};
    const Color cyan = {21, 204, 209, 255};
    const Color blue = {13, 64, 216, 255};
    const Color lightBlue = {59, 85, 162, 255};
    const Color darkBlue = {44, 44, 127, 255};

    return {darkGrey, green, red, orange, yellow, purple, cyan, blue, lightBlue, darkBlue};
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