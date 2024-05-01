#include <raylib.h>
#include "grid.h"

int main()
{
    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground({44,44,125,255});
        grid.Draw();
        EndDrawing();
    }

    CloseWindow();
}