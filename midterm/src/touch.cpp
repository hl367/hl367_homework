
//The use of hook the space ship up
#include "touch.hpp"


touch::touch() {

	originX = 500.245;
	originY = 432;
	ufo.load("spaceship.png");
	hook = false;
	
	x = 1024;
	y = 0;
	pos.x = 1024;
	pos.y = 0;
	universe.load("universe.jpg");
}






// draw the ball
void touch::resettime() {
	ofResetElapsedTimeCounter();
}

void touch::interaction() {
	
	ufo.draw(originX, originY, 86.2, 58.78);
	time = ofGetElapsedTimeMillis() % 6000;
	time2 = ofMap(time, 0, 5999, 0, 2 * PI);


	if (originY <= 720) {
		originY += 0.9;
		originX += 2.3 * sin(time2);
	}





	if (originX - ofGetMouseX() >= 85 && originX - ofGetMouseX() <= 95 && ofGetMouseY() <= 639 && ofGetMouseY() >= 629) {
		hook = true;
	 }

	float x = 86.2;
	float y = 58.78;



}

void touch::game() {

	

	// transition
	if (hook == true) {
	
		universe.draw(pos.x, pos.y, 1100, 800);
		if (pos.x > 0) {
			pos.x -= 10;
		}
		
	}

}
