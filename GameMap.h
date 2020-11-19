#ifndef GAME_MAP_H
#define GAME_MAP_H

#include"BaseObject.h"
#include"CommonFunc.h"

#define MAX_TILE 20

class TileMap : public BaseObject // ke thua
{
public:
	TileMap() { ; }
	~TileMap() { ; }
};

class GameMap
{
public:
	GameMap() { ; }
	~GameMap() { ; }

	//doc map tu file txt
	void LoadMap(char* name);

	//chuuyen doi file txt theo map 
	void LoadTiles(SDL_Renderer* screen);
	
	void DrawMap(SDL_Renderer* screen);
private:
	Map game_map_;

	//so dang cua map
	TileMap tile_map[MAX_TILE];
};


#endif
