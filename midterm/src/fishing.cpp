
#include "fishing.hpp"

fishrod::fishrod() {

	fishingrod.load("fishing rod.png");
}



void fishrod::update() {

	fishroddata.setName("fishrod controls");
	
	fishroddata.add(posX.set("posX shi", ofGetWidth() / 2, 0, ofGetWidth()));
	fishroddata.add(posY.set("posY shi", ofGetHeight() / 2, 0, ofGetHeight()));
	fishroddata.add(width.set("width shi", 200, 0, ofGetWidth()));
	fishroddata.add(height.set("height shi", 200, 0, ofGetWidth()));




}


// draw the ball
void fishrod::test() {

  fishingrod.draw(posX, posY, width, height);
	
	
}

void fishrod::draw() {

	fishingrod.draw(289, 329.14, 167.184, 208.98); //要改移動式
}

void fishrod::take() {

	fishingrod.draw( ofGetMouseX()-35, ofGetMouseY()-120, 167.184, 208.98); //要改移動式
}