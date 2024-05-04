#include "block.h"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
    rowOffSet = 0;
    colOffSet = 0;
    Move(0, 3);
}

void Block::Draw()
{
    std::vector<Position> tiles = GetCellPositions();
    for (Position item : tiles)
    {
        int const x = item.column * cellSize + 1;
        int const y = item.row * cellSize + 1;
        int const width = cellSize - 1;
        int const height = cellSize - 1;

        DrawRectangle(x, y, width, height, colors[id]);
    }
}

void Block::Move(int rows, int cols)
{
    rowOffSet += rows;
    colOffSet += cols;
}

std::vector<Position> Block::GetCellPositions()
{
    std::vector<Position> tiles = cells[rotationState];
    std::vector<Position> movedTiles;

    for(Position item : tiles)
    {
        Position newPos = Position(item.row + rowOffSet, item.column + colOffSet);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}

void Block::Rotate()
{
    rotationState++;

    if(rotationState == (int)cells.size())
    {
        rotationState = 0;
    }
}

void Block::UnRotate()
{
    rotationState--;
    if(rotationState == -1)
    {
        rotationState = cells.size() -1;
    }
}