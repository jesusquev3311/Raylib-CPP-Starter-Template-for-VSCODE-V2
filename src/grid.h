#pragma once
#include <vector>
#include <raylib.h>

class Grid
{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    int grid[30][20];

private:
    std::vector<Color> GetCellColors();
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};