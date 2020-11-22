

//start button

#pragma once		
#include "ofMain.h"		

class start{

public:

	start();

	void update();
	void draw();
	void test();
	void word1();
	void word2();
	float radius;
	float x, y, w, h;
	float dirX, dirY;
	ofImage land, girl, fishingrod, hard, title, button, ufo, startbutton, wood, wood2;

	ofColor color;

	ofParameterGroup startbuttondata;
	ofParameter<int> r;
	ofParameter<int> g;
	ofParameter<int> b;
	ofParameter<float> posX;
	ofParameter<float> posY;
	ofParameter<float> width;
	ofParameter<float> height;
};
