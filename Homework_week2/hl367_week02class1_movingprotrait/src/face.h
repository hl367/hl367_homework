


#pragma once		
#include "ofMain.h"		

class face {

public:		

	face();				
						

    void update(ofVec2f force = ofVec2f(0,0)); 
	void draw();
	void draweye();
	void drawother();
/*	
void keyPressed(32);
void keyReleased(32);
*/

	float radius;		

    ofVec2f pos;
	ofVec2f dir;
	ofVec2f acc;
	

	ofColor color;
	bool eye = false;


};
