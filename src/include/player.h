#ifndef PLAYER_H
#define PLAYER_H


typedef struct { // { width, height posX, posY, velocityY, jump_power }
    unsigned int w, h, x;
    float y, vy, jp;
}Player;

void update_player(float);
void draw_player();
int check_player_ground_collision();
int check_player_pipes_collision();


#endif