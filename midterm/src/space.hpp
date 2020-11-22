

//space ship

#pragma once		
#include "ofMain.h"		

class UFO {

public:

	UFO();

	void update();
	void draw();
	void test();
	void ufostay();
	void ufodrop();
	void resettime();

	float originX, originY, time, time2;
	float radius;
	float x, y;
	float dirX, dirY;
	ofImage land, girl, fishingrod, hard, title, button, ufo, start;

	ofColor color;

	ofParameterGroup UFOinfo;
	ofParameter<int> r;
	ofParameter<int> g;
	ofParameter<int> b;
	ofParameter<float> posX;
	ofParameter<float> posY;
	ofParameter<float> width;
	ofParameter<float> height;

	ofParameter<float> posX2;
	ofParameter<float> posY2;
	ofParameter<float> width2;
	ofParameter<float> height2;

};