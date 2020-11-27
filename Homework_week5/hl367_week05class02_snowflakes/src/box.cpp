//abandoned

//no use

#include "box.h"


box::box() {

	

	boxposition = ofVec3f(0, 0, 0);
	
}


void box::update(float x, float y) {

	boxposition.x = x;
	//boxposition.y = 0;
	boxposition.y += 30;
	boxposition.z = y;
}



// draw 
void box::draw() {

	ofDrawBox(boxposition.x, boxposition.y, boxposition.z, 30);
}