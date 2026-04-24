#include "CONFIG.h"
#include "player.h"
#include "pipes.h"
#include "raylib.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    Pipes top, down;
    struct Node *next;
}Node;

Node *head = NULL, *tail = NULL;

const int totalPipes = 5;  


void draw_pipes(){
    Node *temp = head;
    while(temp != NULL){
        DrawRectangle(temp->top.x, temp->top.y, temp->top.w, temp->top.h, RED);
        DrawRectangle(temp->down.x, temp->down.y, temp->down.w, temp->down.h, ORANGE);
        temp = temp->next;
    }
}

void init_pipes(){
    for(int i=0; i<totalPipes; i++)
        spawn_pipes();
}

void update_pipes(float dt){
    Node *temp = head;
    
    while(temp != NULL){
        temp->top.x += PIPES_SPEED_X * dt;
        if(temp->top.x <= -50)
            destroy_pipes();
        temp->down.x += PIPES_SPEED_X * dt;
        temp = temp->next;
    }
}

void spawn_pipes(){
    Node *newPipes = (Node*)malloc(sizeof(Node));
    int offset = GetRandomValue(-100, 100);
    newPipes->top  = (Pipes){PIPES_WIDTH, SCREEN_HEIGHT/2 - 90 - offset, SCREEN_WIDTH + 20, CEIL_Y};
    newPipes->down = (Pipes){PIPES_WIDTH, SCREEN_HEIGHT/2 - 90 + offset, SCREEN_WIDTH + 20, FLOOR_Y - (SCREEN_HEIGHT/2 - 90 + offset)};
    newPipes->next = NULL;
    
    int pipesGap = GetRandomValue(50, 200);
    if(head == NULL) 
        head = tail = newPipes;
    else if (head == tail){
        newPipes->top.x = newPipes->down.x = tail->top.x + 100 + pipesGap;
        head->next = tail = newPipes;
    }
    else {
        newPipes->top.x = newPipes->down.x = tail->top.x + 100 + pipesGap;
        tail->next = newPipes;
        tail = newPipes;
    }

    printf("DEBUB: PIPE SPAWNED\n");
}

void destroy_pipes(){
        Node *temp = head;
        head = head->next;
        free(temp);
        printf("DEBUB: PIPE DESTROYED\n");
        spawn_pipes();
}

int pipes_collision(Player player){
    // Collsion with top pipe
    if(((player.x + player.w >= head->top.x && player.x <= head->top.x + head->top.w) && (player.y >= head->top.y && player.y <= head->top.y + head->top.h))) 
        return 1;
     // Collsion with bottom pipe   
    else if(((player.x + player.w >= head->down.x && player.x <= head->down.x + head->down.w) && (player.y + player.h >= head->down.y && player.y <= head->down.y + head->down.h)))
        return 1;
    return 0;
}