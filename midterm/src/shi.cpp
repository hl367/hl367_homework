

#include "shi.hpp"



shi::shi(){
	
	hard.load("hook.png");
	title.load("muzikashi.png");

}



void shi::update() {

	shidata.setName("muzikashi + shi controls");
	
	shidata.add(posX.set("posX", ofGetWidth() / 2, 0, ofGetWidth()));
	shidata.add(posY.set("posY", ofGetHeight() / 2, 0, ofGetHeight()));
	shidata.add(width.set("width", 200, 0, ofGetWidth()));
	shidata.add(height.set("height", 200, 0, ofGetWidth()));
	
	shidata.add(posX2.set("posX2", ofGetWidth() / 2, -100, ofGetWidth()));
	shidata.add(posY2.set("posY2", ofGetHeight() / 2, -200, ofGetHeight()));
	shidata.add(width2.set("width2", 200, 0, ofGetWidth()));
	shidata.add(height2.set("height2", 200, 0, ofGetWidth()));


}


// draw the ball
void shi::test() {

	title.draw(posX2, posY2, width2, height2);
	hard.draw(posX, posY, width, height);
	

}

void shi::draw() {

	title.draw(261.286, 17.3, 517.224, 344.816); //不用會動
	// hard.draw(647.84, 156.735, 57.46, 99.265); //要改成可移動
}

void shi::hooktaken() {
	hard.draw( ofGetMouseX()+60, ofGetMouseY()+55, 57.46, 99.265); //要改成可移動
}

void shi::hooknottaken() {
	hard.draw(647.84, 156.735, 57.46, 99.265);
}