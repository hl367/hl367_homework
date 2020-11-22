
#include "start.hpp"
start::start() {

	startbutton.load("start.png");
	wood.load("wood.png");
	wood2.load("wood.png");

	x = 501.55;
	y = 321;
	w = 83.6;
	h = 83.6;

}



void start::update() {

	startbuttondata.setName("start controls");
	
	startbuttondata.add(posX.set("posX shi", ofGetWidth() / 2, 0, ofGetWidth()));
	startbuttondata.add(posY.set("posY shi", ofGetHeight() / 2, 0, ofGetHeight()));
	startbuttondata.add(width.set("width shi", 200, 0, ofGetWidth()));
	startbuttondata.add(height.set("height shi", 200, 0, ofGetWidth()));

}


// draw the ball
void start::test() {

	 startbutton.draw(posX, posY, width, height);

}

void start::draw() {

	startbutton.draw(x,y,w,h);//Òªžéß[‘ò¸ÄÒÆ„ÓÊ½
	wood.draw(x-32.45, y+1, w+58.4, h-59.6);
	wood2.draw(x - 32.45, y+38, w + 58.4, h - 59.6);
}

void start::word1() {
	ofPushStyle();
	ofSetHexColor(0x00ff00);
	ofDrawBitmapString("This button is blocked", 462, 282);
	ofPopStyle();

}

void start::word2() {
	x = 501.55;
}