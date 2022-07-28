#pragma once
#include <SDL.h>
#include "Color.h"
#include "Graphics.h"
#include "InputHandler.h"

class Game {
public:
	Game(const char* title, int setX, int setY, bool fullscreen = false);
	~Game();

	void handleEvents();
	void updateModel();
	void drawModel();

	bool running();
private:
	// define variables here

	SDL_Event event;

	Graphics gfx;
	Input input;
};