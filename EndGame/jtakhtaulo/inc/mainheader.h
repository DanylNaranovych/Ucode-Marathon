#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdbool.h>
#include <SDL2/SDL_mixer.h>
#include "player.h"
#include "timer.h"
#include "texture_object.h"
#include "music.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

#define SCREEN_FPS 60
#define SCREEN_TICK_PER_FRAME (1000 / SCREEN_FPS)


bool menu(SDL_Renderer *renderer, bool running);

#define BUTTON_SIZE_X 360
#define BUTTON_SIZE_Y 115

#define START_X 1300
#define START_Y 135

#define ABOUT_X 1300
#define ABOUT_Y 335

#define EXIT_X 1300
#define EXIT_Y 535

#define LEVEL_WIDTH 960
#define LEVEL_HEIGHT 540

bool field (SDL_Event event, SDL_Renderer *renderer, bool running);

void about (SDL_Event event, SDL_Renderer *renderer);

void camera_update (SDL_Rect *camera, SDL_Rect player);

