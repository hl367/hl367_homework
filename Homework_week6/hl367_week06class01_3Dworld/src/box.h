//abandoned

//no use

#pragma once		
#include "ofMain.h"		

class box {

public:		

	box();
						

    void update();
	void draw();
	void tower2();

	float radius;		

    ofVec3f boxposition;
    
	float mass = radius*radius*3.14;

	ofColor color;

};