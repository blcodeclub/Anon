#include <iostream>
#include <string>
#include <SDL2/SDL.h>

int main( int argc, char * argv[]) {

    //Initialise all SDL systems.
    SDL_Init(SDL_INIT_EVERYTHING);

    //get a window and renderer pointer.
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;

    //create the window and renderer.
    window = SDL_CreateWindow("SDL_Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    Uint8 green = 0;

    //while(true) {
    //if(green == 256) { green = 0; }

    SDL_SetRenderDrawColor(renderer, 255, 0, 120, 255 );
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer,0xff, 0xff, 0xff, 0xff);
    SDL_Rect rectangle={300,500,50,70};
    SDL_RenderDrawRect(renderer, &rectangle);

    SDL_RenderPresent(renderer);

    //green++;

    SDL_Delay(5000);
    //}

    //exit program.
    return 0;

}
