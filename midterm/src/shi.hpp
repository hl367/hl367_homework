

//fishing rod

#pragma once		
#include "ofMain.h"		

class shi {

public:

	shi();

	void update();
	void draw();
	void test();
	void hooktaken();
	void hooknottaken();

	float radius;
	float x, y;
	float dirX, dirY;
	ofImage land, girl, fishingrod, hard, title, button, ufo, start;

	ofColor color;

	ofParameterGroup shidata;
	
	ofParameter<float> posX;
	ofParameter<float> posY;
	ofParameter<float> width;
	ofParameter<float> height;

	ofParameter<float> posX2;
	ofParameter<float> posY2;
	ofParameter<float> width2;
	ofParameter<float> height2;

};
