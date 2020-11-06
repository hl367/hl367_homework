


#pragma once		
#include "ofMain.h"		

class rain {

public:		

	rain();				
	
	int frame;
	float sine;
	float number;
	float red;
	float green;
	float blue;
    void update(ofVec2f force = ofVec2f(0,0)); 
	void draw();	
	void changecolor();

    ofVec2f pos;
	ofVec2f dir;
	ofVec2f acc;
	ofVec2f gravity;
	
	ofColor color;
	


};
