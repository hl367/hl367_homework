

//fishing rod

#pragma once		
#include "ofMain.h"		

class fishrod {

public:

	fishrod();

	void update();
	void draw();
	void test();
	void take(); 

	float radius;
	float x, y;
	float dirX, dirY;
	ofImage land, girl, fishingrod, hard, title, button, ufo, start;

	ofColor color;

	ofParameterGroup fishroddata;
	ofParameter<int> r;
	ofParameter<int> g;
	ofParameter<int> b;
	ofParameter<float> posX;
	ofParameter<float> posY;
	ofParameter<float> width;
	ofParameter<float> height;
};
