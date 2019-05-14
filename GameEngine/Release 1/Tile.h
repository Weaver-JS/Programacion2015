#pragma once
#include "Sprite.h"
#include "SDLInterface.h"
class Tile
{
private:
	/*
		Clase que guarda las capas que luego se pintar�n en el terreno, cada layer
		guarda la informaci�n de una de las capas que se ir�n pintando una a una
		con la matriz de Tiles. 
	*/
	int layer0;
	int layer1;

	//Booleano que utilizaremos para a�adir objetos.
	bool objectIn; 
		

public:
	int getLayer0();
	int getLayer1();
	
	Tile();
	~Tile();
};

