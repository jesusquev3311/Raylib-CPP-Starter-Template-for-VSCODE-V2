#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main()
{
    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    OBlock block = OBlock();

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground({44,44,125,255});
        grid.Draw();
        block.Draw();
        EndDrawing();
    }

    CloseWindow();
}