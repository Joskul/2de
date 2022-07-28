#include "Game.h"
#include <iostream>

Game::Game(const char* title, int setX, int setY, bool fullscreen)
	:
	gfx(title, setX, setY, fullscreen),
	input(event)
{
}

Game::~Game()
{
}

void Game::handleEvents()
{
	SDL_PollEvent(&event);
	switch (event.type) {
	case SDL_QUIT:
		gfx.terminate();
		break;

	default:
		break;
	}
}

void Game::updateModel()
{
	//game loop logic goes here
}

void Game::drawModel()
{
	gfx.renderClear();
	//draw stuff here
	gfx.putPixel(50, 50, Colors::Red);
	

	gfx.renderPresent();
}

bool Game::running()
{
	return gfx.valid();
}

