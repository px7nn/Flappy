#include "CONFIG.h"

#include "raylib.h"
#include "player.h"
#include "ground.h"
#include "pipes.h"

Player player = {30, 10, 50, SCREEN_HEIGHT/2, 0, PLAYER_JUMP_POWER};

void draw_player(){
    DrawRectangle(player.x, player.y, player.w, player.h, RED);
}

void update_player(float dt){
    if(IsKeyPressed(KEY_SPACE)) player.vy = player.jp;
    
    player.vy += GRAVITY * dt;
    player.y += player.vy * dt; 
}

int check_player_ground_collision(){
    return ground_collision(player);
}

int check_player_pipes_collision(){
    return pipes_collision(player);
}