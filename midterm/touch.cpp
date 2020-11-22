#include "touch.h"

touch::touch() {


}

void touch::update(){

}

void touch::draw(){

}

#pragma once
#include "ofMain.h"		
class touch
{

public:

	touch();

	void update();
	void draw();


	float radius;
	float x, y;
	float dirX, dirY;
	ofImage land, girl, fishingrod, hard, title, button, ufo, startbutton;

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