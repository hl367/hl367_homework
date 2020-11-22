
#include "background.hpp"
background::background() {
	//thebackground.load("background.jpg");
	girl.load("squatright.png");
	land.load("land.png");

}


void background::update() {

	backgroundinfo.setName("background controls");
	
	backgroundinfo.add(posX.set("girl posX", ofGetWidth() / 2, 0, ofGetWidth()));
	backgroundinfo.add(posY.set("girl posY", ofGetHeight() / 2, 0, ofGetHeight()));
	backgroundinfo.add(width.set("girl width", 200, 0, ofGetWidth()));
	backgroundinfo.add(height.set("girl height", 200, 0, ofGetHeight()));

	backgroundinfo.add(posX2.set("land posX", ofGetWidth() / 2, 0, ofGetWidth()));
	backgroundinfo.add(posY2.set("land posY", ofGetHeight() / 2, 0, ofGetHeight()));
	backgroundinfo.add(width2.set("land width", 200, 0, ofGetWidth()));
	backgroundinfo.add(height2.set("land height", 200, 0, ofGetHeight()));
	s = ofGetElapsedTimeMillis();
	h = sin(s / 1000);
}


// draw the ball
void background::test() {

	girl.draw(posX, posY, width, height);
	land.draw(posX2, posY2, width2, height2);
	

}

void background::draw() {
	//thebackground.draw(0, 0, 1024, 768);
	girl.draw(261.22, 384, 90.1225, 129.306);
	land.draw(0, 105.8, 481.96, 530.94);
}

void background::water() {
	

	s = ofGetElapsedTimeMillis();

	h	= sin(s / 500);

	ofPushStyle();
	ofSetColor(0, 0, 220);
	ofDrawRectangle(0, 39*h + 566, 1100, 500);
	ofPopStyle();

	/*ofVec2f position;
	position.x = x;
	position.y = 566;
	position.x += 5;
	ofDrawCircle( position.x, 566, 39);
	*/
	

}