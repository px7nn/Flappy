#include "game.h"
#include "player.h"
#include "pipes.h"
#include "ground.h"

#include "raylib.h"

void Init(){
    init_pipes();
}

void Update(float dt){
    update_player(dt);
    update_pipes(dt);
}

void Draw(){
    draw_pipes();
    draw_ground();
    draw_player();
}

int Collision_Detected(){
    if(check_player_ground_collision() || check_player_pipes_collision()) return 1;
    return 0;
}