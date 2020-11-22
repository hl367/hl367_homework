

//when the fish rod hooks the spaceship...

#pragma once		
#include "ofMain.h"		

class touch{

public:

	touch();


	void interaction();
	void resettime();
	void game();
	float originX, originY, time, time2;
	float x, y;
	ofImage ufo,  universe;
	ofVec2f pos;

	bool hook;
};
