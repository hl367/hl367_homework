// Ball.h


#pragma once		
#include "ofMain.h"		

class Ball {

public:		

	Ball();				
						

    void update(ofVec2f force = ofVec2f(0,0)); 
	void draw();
    
	float radius;		

    ofVec2f pos;
    ofVec2f dir;
    ofVec2f acc;
	float mass = radius*radius*3.14;

	ofColor color;

};