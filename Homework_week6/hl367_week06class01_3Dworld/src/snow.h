
// Ball.h
//  hl367_week01class02_BouncingBalls


#pragma once		
#include "ofMain.h"		

class snow {

public:

	snow();

	void update(ofVec3f force);
	void draw();
	void tower( float x, float y, float z);
	void blow();

	float circlesize;
	float radius, yheight;
	float x, y, z;
	float dirX, dirY, dirZ;

	ofImage snow1;

	ofColor color;
	ofVec3f position, wind;

};
