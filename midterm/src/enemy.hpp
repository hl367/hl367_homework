

//start button

#pragma once		
#include "ofMain.h"		
#include "bullet.hpp"		

#define enemynumber 15 //the number of array

class enemy{

public:

	enemy();

	

	void move();
	void show(float x, float y, float s);
	void bulletandhit(float x, float y);

	ofVec2f pos, dir;

	
	float dirX, dirY, speed, size;
	ofImage enemy1;

	ofColor color;


};
