#include "face.h"


face::face() {

	radius = 200;
	

	int r = 250;
	int g = 250;
	int b = 250;

	float red = ofRandom(0, r);
	float green = ofRandom(0, g);
	float blue = ofRandom(0, b);

	



	pos.x = ofGetWidth()  / 2;
	pos.y = ofGetHeight() / 2;
	
	
	


	color = ofColor(red, green, blue);


	
}


void face::update(ofVec2f force) {
	
	acc = force;
	dir += acc; 
	pos += dir;

	// check left
	if (pos.x <= radius) {
		pos.x = radius;			// set the position back to the edge of window
		dir.x = -1.0 * dir.x;		// and reverse direction
		float red = 50;
		float green = 0;
		float blue = 0;
	}
	// check right
	else if (pos.x >= ofGetWidth() - radius) {
		pos.x = ofGetWidth() - radius;			// similar to above
		dir.x = -1.0 * dir.x; // slow down
		float red = 0;
		float green = 50;
		float blue = 0;
	}

	// check top and bottom
	if (pos.y <= radius) {
		pos.y = radius;
		dir.y = -1.0 * dir.y;
		float red = 0;
		float green = 0;
		float blue = 50;
	}
	else if (pos.y >= ofGetHeight() - radius) {
		pos.y = ofGetHeight() - radius;
		dir.y = -1.0 * dir.y;
		float red = 50;
		float green = 50;
		float blue = 50;
	}

}



// draw 
void face::draw() {



	ofSetColor(color);
	ofDrawLine(pos.x, pos.y, ofGetWidth() / 2, ofGetHeight() / 2);

	ofDrawCircle(pos, radius);
	ofSetColor(0);
	ofDrawRectangle(pos.x + 40, pos.y - 100, 50, 50);
	ofDrawRectangle(pos.x - 90, pos.y - 100, 50, 50);


	if (eye = false) {
		ofDrawCircle(pos.x + 40, pos.y - 100, 50, 50);
		ofDrawCircle(pos.x - 90, pos.y - 100, 50, 50);
		
	}

	if (eye = true) {
		
		ofDrawRectangle(pos.x + 40, pos.y - 100, 50, 50);
		ofDrawRectangle(pos.x - 90, pos.y - 100, 50, 50);
	}


	ofDrawTriangle(pos.x+ 10, pos.y + 10, pos.x , pos.y -20, pos.x - 10, pos.y + 10);

	ofDrawCurve(pos.x + -60, pos.y + 30, pos.x + -80, pos.y + 60, pos.x + 50, pos.y + 60, pos.x + 50, pos.y + 30);

	// check left
	if (pos.x <= radius) {
	
		color = ofColor(ofRandom(0, 250), ofRandom(0, 250), ofRandom(0, 250));

		ofSetColor(color);
	
	}
	// check right
	else if (pos.x >= ofGetWidth() - radius) {
		
		color = ofColor(ofRandom(0, 250), ofRandom(0, 250), ofRandom(0, 250));
		ofSetColor(color);
	
	}

	// check top and bottom
	if (pos.y <= radius) {
		
		color = ofColor(ofRandom(0, 250), ofRandom(0, 250), ofRandom(0, 250));
		ofSetColor(color);
	
	}
	else if (pos.y >= ofGetHeight() - radius) {
	
		color = ofColor(ofRandom(0, 250), ofRandom(0, 250), ofRandom(0, 250));
		ofSetColor(color);
	
	}
	
}

/*
void face::keyPressed(int key) {
	
		eye = true;
	
}
void face::keyReleased(int key) {
	
		eye = false;
	
}
*/

void face:: draweye() {
	eye = true;
}

void face::drawother() {
	eye = false;
}