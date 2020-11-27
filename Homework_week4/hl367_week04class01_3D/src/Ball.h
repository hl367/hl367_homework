
// Ball.h
//  hl367_week01class02_BouncingBalls


#pragma once		
#include "ofMain.h"		

class Ball {

public:

	Ball();

	void update();
	void draw();

	float radius;
	float x, y, z;
	float dirX, dirY;

	ofColor color;
	ofVec3f position;
};