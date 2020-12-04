//abandoned

//no use

#include "box.h"


box::box() {

	

	boxposition = ofVec3f(0, 0, 0);
	boxposition.y = -200;
	boxposition.x = -500;
}


void box::update() {

	
	
}



void box::tower2() {

	ofDrawCylinder(ofGetWidth() / 2, boxposition.x, ofGetWidth() / 2, 30, 600);

}




void box::draw() {

	
	ofDrawCylinder(ofGetWidth() / 2, boxposition.y, ofGetWidth() / 2, 80, 300);
	
}