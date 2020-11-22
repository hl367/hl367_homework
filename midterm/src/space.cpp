
#include "space.hpp"
UFO::UFO() {

	//original position
	originX = 500.245;
	originY = 432;
	
	
	ufo.load("spaceship.png");
	button.load("ufobutton.png");
}


void UFO::update() {

	UFOinfo.setName("UFO Button controls");

	
	UFOinfo.add(posX.set("posX", ofGetWidth() / 2, 0, ofGetWidth()));
	UFOinfo.add(posY.set("posY", ofGetHeight() / 2, 0, ofGetHeight()));
	UFOinfo.add(width.set("width", 200, 0, ofGetWidth()));
	UFOinfo.add(height.set("height", 200, 0, ofGetWidth()));

	UFOinfo.add(posX2.set("posX", ofGetWidth() / 2, 0, ofGetWidth()));
	UFOinfo.add(posY2.set("posY", ofGetHeight() / 2, 0, ofGetHeight()));
	UFOinfo.add(width2.set("width", 200, 0, ofGetWidth()));
	UFOinfo.add(height2.set("height", 200, 0, ofGetWidth()));


}


// draw the ball
void UFO::test() {

	button.draw(posX2, posY2, width2, height2);
	ufo.draw(posX, posY, width, height);



}

void UFO::draw() {

	button.draw(492.4, 352.65, 154.1, 215.67);
	// ufo.draw(500.245, 432, 86.2, 58.78); //要寫移動式
}


void UFO::ufostay() {

	ufo.draw(500.245, 432, 86.2, 58.78); 
}

void UFO::ufodrop() {
	
	ufo.draw(originX, originY, 86.2, 58.78);//要寫移動式
	time = ofGetElapsedTimeMillis() % 6000;
	time2 = ofMap(time, 0, 5999, 0, 2*PI);
	

	if (originY <= 720) {
		originY += 0.5;
		originX += 2.3 * sin(time2);
	}

}

void UFO::resettime() {
	ofResetElapsedTimeCounter();
}