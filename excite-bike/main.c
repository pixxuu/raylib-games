#include "raylib.h"
int main(void)
{
    
    int monitor = GetCurrentMonitor();
    int width = GetMonitorWidth(monitor);
    int height = GetMonitorHeight(monitor);
    SetConfigFlags(FLAG_FULLSCREEN_MODE);
    InitWindow(width, height, "excite-bike-c");

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_F))
        {
            ToggleFullscreen();
        }
        width = GetScreenWidth();
        height = GetScreenHeight();
        
        BeginDrawing();
        ClearBackground(RAYWHITE);

        const char* text = "Bike soon";
        int fontSize = 20;
        int textWidth = MeasureText(text, fontSize);
        DrawText (text, (width -textWidth)/2, (height-fontSize)/2, fontSize, GRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}