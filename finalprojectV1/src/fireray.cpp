#include "fireray.h"


fireray::fireray() {

	
	a = ofVec2f(1, 1);

}


void fireray::update(ofVec2f directions) {

	currentposition = ofVec2f(400, 400);
	raze.setup(currentposition, directions);

}


void fireray::changeangles(float x) {
	
	ofBackground(col3);

	a = ofVec2f((ofGetMouseX() - currentposition.x), (ofGetMouseY() - currentposition.y)).rotate(x).getNormalized()/6;

}

void fireray::changeanglee(ofVec2f directions) {
	raze.setup(currentposition, directions);
	raze.setDirection(a);
	//currentposition.x = ofGetMouseX();
	//currentposition.y = ofGetMouseY();
}


void fireray::draw() {

	
	raze.draw();
	//rays->draw();

	ofPushStyle();
	ofSetColor(col4);
	ofDrawLine(line1A, line1B);
	ofDrawLine(line2A, line2B);
	ofDrawLine(line3A, line3B);
	ofDrawLine(line4A, line4B);

	for (int i = 1; i < 4; i++) {
		//float distance;
		
		glm::vec2 intersection;

		float theviewdistance;
		theviewdistance = 1000;
		 //hit= raze.intersectsSegment(line1A, line1B, distance);
		bool hit1 = raze.intersectsSegment(line1A, line1B, distances1);
		bool hit2 = raze.intersectsSegment(line2A, line2B, distances2);
		bool hit3 = raze.intersectsSegment(line3A, line3B, distances3);
		bool hit4 = raze.intersectsSegment(line4A, line4B, distances4);

		/*if (hit) {
			ofSetColor(col1);
			intersection = raze.getOrigin() + raze.getDirection() * distance;
			ofDrawLine(raze.getOrigin(), intersection);
			ofDrawCircle(intersection, 5);
		}*/
		
		
		if (hit1) {
			ofSetColor(col1);
			intersection = raze.getOrigin() + raze.getDirection() * distances1;
			if (distances1 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);
			}
		}
		if (hit2) {
			ofSetColor(col1);
			intersection = raze.getOrigin() + raze.getDirection() * distances2;
			if (distances2 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);
			}
		}
		if (hit3) {
			ofSetColor(col1);
			intersection = raze.getOrigin() + raze.getDirection() * distances3;
			if (distances3 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);
			}
		}
		if (hit4) {
			ofSetColor(col1);
			intersection = raze.getOrigin() + raze.getDirection() * distances4;
			if (distances4 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);
			}
		}
		
	}
	ofPopStyle();
}