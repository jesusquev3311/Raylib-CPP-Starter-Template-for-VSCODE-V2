#include <raylib.h>
#include "game.h"

int main()
{
    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Game game = Game();

    while (WindowShouldClose() == false)
    {
        game.HandleInput();
        BeginDrawing();
        ClearBackground({44,44,125,255});
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}