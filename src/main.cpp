#include <raylib.h>
#include "ball.h"

int main()
{
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    Ball ball = Ball();

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "ARDONITE");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        ball.Update();
        ball.Draw();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}