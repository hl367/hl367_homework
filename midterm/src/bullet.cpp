
//The use of hook the space ship up
#include "bullet.hpp"

bullet::bullet() {
	shootaction.x = x;
	shootaction.y = y;

	ofPushStyle();
	ofSetColor(50, 0, 200);
	ofFill();
	ofDrawRectangle(x, y - 5, 20, 20);
	ofNoFill();
	ofPopStyle();
}


bullet::bullet(glm::vec2 _pos) {

	pos = _pos;

	ofSetRectMode(OF_RECTMODE_CENTER);
	ofDrawRectangle(pos.x, pos.y - 5, 20, 20);
	ofSetRectMode(OF_RECTMODE_CORNER);


}
/*
bullet::bullet(float x, float y) {
	shootaction.x = x;
		shootaction.y = y;
}
*/

void bullet::show(glm::vec2 _pos) {
	
	pos = _pos;

	ofSetRectMode(OF_RECTMODE_CENTER);
	ofDrawRectangle(pos.x, pos.y - 5, 20, 20);
	ofSetRectMode(OF_RECTMODE_CORNER);

}
 
void bullet::interaction() {
	
	/*time = ofGetElapsedTimeMillis();

	shoottime.x = 0 + time;
	if (time >= 600) {
		ofResetElapsedTimeCounter();
	}
	*/
	




}

void bullet::shoot(float x, float y) {
	
	
	shootaction.y -= 20;
	
	
}
