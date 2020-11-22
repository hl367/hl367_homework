

//fishing rod

#pragma once		
#include "ofMain.h"		

class background {

public:

	background();

	void update();
	void draw();
	void test();
	void water();

	float radius;
	float x, y,s,h;
	float dirX, dirY;
	ofImage land, girl, fishingrod, hard, title, button, ufo, start, thebackground;

	ofColor color;

	ofParameterGroup backgroundinfo;
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
