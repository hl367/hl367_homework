

//when the fish rod hooks the spaceship...

#pragma once		
#include "ofMain.h"		
#include "ship.hpp"		

class bullet{

public:

	//bullet(float x, float y);
	bullet();
	bullet(glm::vec2 _pos);

	void interaction();
	void show(glm::vec2 _pos);
	void shoot(float x, float y);
	float originX, originY, time, time2;
	float x, y;
	ofImage ufo,  universe;
	ofVec2f shootaction, pos;

	ofVec2f shoottime;
	bool hook;
};
