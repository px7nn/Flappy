#ifndef CONFIG_H
#define CONFIG_H

#define SCREEN_WIDTH 720
#define SCREEN_HEIGHT 480
#define FPS 120

#define CEIL_Y SCREEN_HEIGHT * 0.1
#define FLOOR_Y SCREEN_HEIGHT * 0.9

#define GRAVITY 980.0f

#define PLAYER_JUMP_POWER -350

#define PIPES_WIDTH 50
#define PIPES_SPEED_X -250
#define PIPES_MOUTH_GAP SCREEN_HEIGHT*0.20

#define BACKGROUND  (Color){0, 0, 0, 255}
#define GROUND      (Color){164, 177, 214, 255}
#define PIPES       (Color){116, 134, 196, 255}
#define PLAYER      (Color){140, 155, 207, 255}


#endif