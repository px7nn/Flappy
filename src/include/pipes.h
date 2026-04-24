#ifndef PIPES_H
#define PIPES_H

typedef struct { // { width, height, posX, posY, velocityX}
    unsigned int w, h;
    float x, y;
}Pipes;

void draw_pipes();
void init_pipes();
void update_pipes(float);
void spawn_pipes();
void destroy_pipes();
int pipes_collision(Player player);

#endif