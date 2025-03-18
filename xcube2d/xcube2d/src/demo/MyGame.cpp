#include "MyGame.h"


MyGame::MyGame() {
	std::shared_ptr<UIEngine::Button> button = std::make_shared<UIEngine::Button>(
		[] { std::cout << "Tyler_Daniel_Haynes-CI517-2024" << std::endl; }, 
		Rectangle2f{ 30.f, 30.f, 100.f, 100.f}
	);
	uiEngine->registerButton(button);
	
}

MyGame::~MyGame() {

}

void MyGame::handleKeyEvents() {

}

void MyGame::update() {
}

void MyGame::render() {

}

void MyGame::renderUI() {
	gfx->setDrawColor(SDL_COLOR_RED);
	gfx->drawRect(Rectangle2{ 30, 30, 100, 100});
	
}