//abandoned

//no use

#pragma once		
#include "ofMain.h"		

class box {

public:		

	box();
						

    void update(float x, float y);
	void draw();
    
	float radius;		

    ofVec3f boxposition;
    
	float mass = radius*radius*3.14;

	ofColor color;

};