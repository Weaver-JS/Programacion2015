#pragma once
#include "Tile.h"
class Terrain
{
private:
	// Tama�o del array
	int numberLayersX;
	int numberLayersY;
	//Coordenadas del personaje con respecto al mundo.
	int characterX;
	int characterY;
	//Esquina superior derecha de la c�mara.
	int cameraWidth;
	int cameraHeight;
	/*Posicion inicial del terreno, cambia seg�n la posici�n 
	en la que se encuentre el personaje */
	int terrainPositionX ;
	int terrainPositionY;
	/*
		Limites del mapa
	*/
	int limitX;
	int limitY;
	
	Tile** tileArray; // Array de Sprites 2D
	SDLInterface* _graphics; // puntero que apunta al graphics de la clase Game.



public:
	Terrain();
	~Terrain();
	//M�todos
	void drawSprite(Sprite & sprite); //funci�n que dibuja el mapa.
	void init(SDLInterface &graphics);//Inicializaci�n del terreno
	void allocateMatrixMemory();
	void changeCamera(int x, int y);//Movimiento de la c�mara.
	void renderTerrain(); // Dibujar el terreno.
	void actualCharacterPosition(int x,int y);// adquirir los valores actuales del jugador.
	void changePositionTerrain(int x, int y); // Mover el terreno ajustandolo a los valores del personaje y pintando solo su alrededor.
	//Gets
	int getNumberLayersX(); 
	int getNumberLayersY();
	int getTerrainPositionX();
	int getTerrainPositionY();
	int getCameraWidht();
	int getCameraHeight();
	int getLimitX();
	int getLimitY();

};

