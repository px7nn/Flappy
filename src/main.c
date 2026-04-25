#include "CONFIG.h"

#include "raylib.h"
#include "game.h"


int main(){
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "INITITIAL");
    SetTargetFPS(FPS);

    Init();

    while(!WindowShouldClose())
    {
        // var update
        if(!Collision_Detected())
            Update(GetFrameTime());

        BeginDrawing();
            ClearBackground(BLACK);
            // drawing stuffs
            Draw();
            
        EndDrawing();
    }
    
    CloseWindow();
}