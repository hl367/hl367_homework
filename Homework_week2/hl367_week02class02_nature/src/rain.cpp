#include "rain.h"


rain::rain() {

	
	frame = ofGetElapsedTimeMicros();
	sine = sin(frame/ 8);
	number =ofMap(sine, -1, 1,  0, ofGetWidth());
	

	int r = 250;
	int g = 250;
	int b = 250;

	red = r;
	 green = g;
	 blue =  b;

	//pos.x = ofRandom ( 0, ofGetWidth());
	pos.x = number;
	pos.y = ofRandom(0, -500);

	dir.y = 9.8;

	color = ofColor(red, green, blue);

}


void rain::update(ofVec2f force) {
    	
	dir = force;
	
	pos += dir;
	
	if (pos.y >= ofGetHeight()) {
		pos.y = ofRandom(-10, -200);
		
	}
	std::cout << "value: " << number << endl;
}



// draw 
void rain::draw() {

	ofSetColor(color);

	ofDrawRectangle(pos.x, pos.y, 2, ofRandom(5, 10));

	if (pos.y >= ofGetHeight()) {
		pos.y = ofRandom(-10, -20);
		pos.x = number;
	}
}

void rain::changecolor() {

	int r = 250;
	int g = 250;
	int b = 250;

     red = ofRandom(0, r);
	 green = ofRandom(0, g);
	 blue = ofRandom(0, b);
	 color = ofColor(red, green, blue);
	 ofSetColor(color);
	 ofDrawRectangle(pos.x, pos.y, 2, ofRandom(5, 10));
}