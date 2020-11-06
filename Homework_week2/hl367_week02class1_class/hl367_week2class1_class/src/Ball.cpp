#include "Ball.h"


Ball::Ball() {

	radius = ofRandom(10, 200);


	float r = ofRandom(0, 255);
	float g = ofRandom(0, 255);
	float b = ofRandom(0, 255);
	color = ofColor(r, g, b);

	

	pos.x = ofRandom(radius, ofGetWidth() - radius);
	pos.y = ofRandom(radius, ofGetHeight() - radius);


	dir.x = 0;
	dir.y = 0;
	
	acc / mass = acc;
}


void Ball::update(ofVec2f force) {

	float bounce = ofRandom(-2, -1);
	acc = force;

	acc / mass = acc;
	dir += acc;
	pos += dir;

	
	// check left
	if (pos.x <= radius) {
		pos.x = radius;			
		dir.x = bounce * dir.x;
	}
	// check right
	else if (pos.x >= ofGetWidth() - radius) {
		pos.x = ofGetWidth() - radius;			
		dir.x = bounce * dir.x;
	}

	

	if (pos.y >= ofGetHeight() - radius) {
		pos.y = ofGetHeight() - radius;
		dir.y = -0.7 * dir.y;
	}
}



// draw 
void Ball::draw() {

	ofSetColor(color);				
	ofDrawCircle(pos, radius);		
}