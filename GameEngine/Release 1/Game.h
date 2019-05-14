#pragma once

//Third-party libraries
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>			//OpenGL Mathematics 
#include <iostream>
#include <time.h>
#include "GameConstants.h"
#include "SDLInterface.h"
#include "InputManager.h"
#include "Sprite.h"
#include "Terrain.h"
#include "MainCharacter.h"
#include "MenuButtons.h"
/*
* The Game class manages the game execution
*/
class Game {
	public:						
		Game(std::string windowTitle, int screenWidth, int screenHeight);	//Constructor
		~Game();															//Destructor
		void run();															//Game execution	

	private:
			//Attributes	
		std::string _windowTitle;		//SDLInterface Title
		int _screenWidth;				//Screen width in pixels				
		int _screenHeight;				//Screen height in pixels				
		GameState _gameState;			//It describes the game state				
		SDLInterface _graphic;			//Manage the SDL graphic library		
		Terrain _map;
		Sprite menu;
		Sprite title;
		MainCharacter mainCharacter;
		

		MenuButtons pauseMenu = MenuButtons(3);// cantidad de colliders que tendr� el men�.
		MenuButtons titleMenu = MenuButtons(2); 
			//Internal methods for the game execution
		//Inicializaciones
		void init();
		void initSprites();
		void initObjects();
		//Metodos
		void gameLoop();		
		void executePlayerCommands();
		void doPhysics();
		void renderGame();
		void drawMenu();
		void drawGame();
		void drawSprite(Sprite & e);		
		//Inputs
		void mainCharacterInputs();
		void scenesInputs();

};

