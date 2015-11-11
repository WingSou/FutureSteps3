#include "Title.h"

Title::Title():
title_logo("res/test_img.png"),
font("res/meiryo.ttc")
{
	SetUp();
}

Title::~Title()
{

}

void Title::SetUp()
{
	scene_switch = MAIN;
	title_end = false;
	pos = Vec2f(-256, -440);
	size = Vec2f(600, 600);
	clip_size = Vec2f(1024, 1024);
	font.size(150);
}

void Title::UpDate()
{
	switch (scene_switch){
	case MUSIC_START:
		//---BGM開始処理---//

		scene_switch = FADE_IN;

		break;
	case FADE_IN:
		//---フェードイン処理---//

		scene_switch = MAIN;

		break;
	case MAIN:

		if (App::env->isPushKey(GLFW_KEY_SPACE)){
			scene_switch = FADE_OUT;
		}

		break;
	case FADE_OUT:
		//---フェードアウト処理---//

		title_end = true;

		break;
	default:
		break;
	}
}

void Title::Draw()
{
	switch (scene_switch){
	case MUSIC_START:



		break;
	case FADE_IN:



		break;
	case MAIN:

		App::env->bgColor(Color::white);
		drawTextureBox(pos.x(), pos.y(), size.x(), size.y(), 0, 0, clip_size.x(), clip_size.y(), title_logo);
		font.draw("ブッドバースト", Vec2f(-525, 512), Color::gray);

		break;
	case FADE_OUT:



		break;
	default:
		break;
	}
}