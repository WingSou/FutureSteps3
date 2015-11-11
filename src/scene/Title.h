#pragma once
#include "SceneCommon.h"

class Title : public SceneCommon
{
public:

	Title();
	~Title();

	void UpDate();
	void Draw();
	void SetUp();

	bool title_end;

private:

	Font font;
	Texture title_logo;
	Media title_bgm;
	ProcessScene scene_switch;

	Vec2f clip_size;
};