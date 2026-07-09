#include "CONFIG.h"
#include "player.h"
#include "raylib.h"

void draw_ground(){
    DrawLine(0, CEIL_Y, SCREEN_WIDTH, CEIL_Y, GROUND);
    DrawLine(0, FLOOR_Y, SCREEN_WIDTH, FLOOR_Y, GROUND);
}

int ground_collision(Player player){
    if(player.y >= FLOOR_Y || player.y <= CEIL_Y)
        return 1;
    return 0;
}