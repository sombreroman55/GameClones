/* Entry point for Tetris game.
 *
 *
 */

//Using SDL and standard IO
#include "globals.h"

//Starts up SDL and creates window
int init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;

int main (int argc, char** args)
{
    //Start up SDL and create window
    if (!init())
    {
        printf ("Failed to initialize!\n");
    }
    else
    {
        //Main loop flag
        int quit = 0;

        //Event handler
        SDL_Event e;

        //While application is running
        while (!quit)
        {
            //Handle events on queue
            while (SDL_PollEvent (&e) != 0)
            {
                //User requests quit
                if (e.type == SDL_QUIT)
                {
                    quit = 1;
                }
            }
            //Update the surface
            SDL_UpdateWindowSurface (gWindow);
        }
    }
    //Free resources and close SDL
    close();
    return 0;
}

int init()
{
    //Initialization flag
    int success = 1;

    //Initialize SDL
    if (SDL_Init (SDL_INIT_VIDEO) < 0)
    {
        printf ("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        success = 0;
    }
    else
    {
        //Create window
        gWindow = SDL_CreateWindow (TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
        if (gWindow == NULL)
        {
            printf ("Window could not be created! SDL_Error: %s\n", SDL_GetError());
            success = 0;
        }
        else
        {
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface (gWindow);
        }
    }

    return success;
}

void close()
{
    //Destroy window
    SDL_DestroyWindow (gWindow);
    gWindow = NULL;

    //Quit SDL subsystems
    SDL_Quit();
}
