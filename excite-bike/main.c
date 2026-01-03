#include "raylib.h"
int main(void)
{
    InitWindow(800, 600, "excite-bike-c");
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Bike soon", 90, 100, 20, GRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}