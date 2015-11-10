#pragma once
#include "Title.h"
#include "Game.h"
#include "Result.h"


class SceneManager
{
public:

	void UpDate();
	void Draw();

private:

	Title* c_title;
	Game* c_game;
	Result* c_result;

};