#include "fireray.h"


fireray::fireray() {

	
	a = ofVec2f(1, 0);
	
}


void fireray::update(ofVec2f directions) {

	
	raze.setup(currentposition, directions);
	raze.setDirection(a);
}


void fireray::changeangles(float x) {
	
	ofBackground(ofColor(0));


		b = abs((x/16)-45) ;
	
	
	c = ofDegToRad(b);

	a = ofVec2f((ofGetMouseX() - currentposition.x), (ofGetMouseY() - currentposition.y)).rotate(x/16).getNormalized()/6;
	
}

void fireray::changeanglee(ofVec2f directions) {
	raze.setup(currentposition, directions);
	raze.setDirection(a);
	//currentposition.x = ofGetMouseX();
	//currentposition.y = ofGetMouseY();
}


void fireray::draw(int x, int y) {

	
	raze.draw();

	ofPushStyle();
	ofSetColor(ofColor(255, 0, 0));
	ofDrawLine(line1A, line1B);
	ofDrawLine(line2A, line2B);
	ofDrawLine(line3A, line3B);
	ofDrawLine(line4A, line4B);


		
		glm::vec2 intersection;

		float wallsize;
		wallsize = 600;
		float theviewdistance;
		theviewdistance = 1000;

		bool hit1 = raze.intersectsSegment(line1A, line1B, distances1);
		bool hit2 = raze.intersectsSegment(line2A, line2B, distances2);
		bool hit3 = raze.intersectsSegment(line3A, line3B, distances3);
		bool hit4 = raze.intersectsSegment(line4A, line4B, distances4);

	
		//withoout fisheye effect
		if (hit1) {
			ofSetColor(ofColor(255, 255, 0));
			intersection = raze.getOrigin() + raze.getDirection() * distances1;
			if (distances1 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);
				
				float z = ofMap(distances1, 0, 1001, 255, 0);

				float removefish = distances1 *  (cos(c));
				float wl = ofMap(removefish, 0, 1001 , wallsize, 0);
				ofSetColor(ofColor(z));
				float y = ofMap(x, 1, 1440, 0, 1440);
				ofSetRectMode(OF_RECTMODE_CENTER);
				//ofDrawLine(y, 0, y, ofGetHeight());
				ofDrawRectangle(y, ofGetHeight() / 2, 1, wl);
				//std::cout << "value: " << wl << endl;
			}
		}
		if (hit2) {
			ofSetColor(ofColor(255, 255, 0));
			intersection = raze.getOrigin() + raze.getDirection() * distances2;
			if (distances2 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);

				float z = ofMap(distances2, 0, 1001, 255, 0);

				float removefish = distances2 * (cos(c));
				float wl = ofMap(removefish, 0, 1001, wallsize, 0);
				ofSetColor(ofColor(z));
				float y = ofMap(x, 1, 1440, 0, 1440);
				ofSetRectMode(OF_RECTMODE_CENTER);
				//ofDrawLine(y, 0, y, ofGetHeight());
				ofDrawRectangle(y, ofGetHeight() / 2, 1, wl);
				//std::cout << "value: " << y << endl;
			}
		}
		if (hit3) {
			ofSetColor(ofColor(255, 255, 0));
			intersection = raze.getOrigin() + raze.getDirection() * distances3;
			if (distances3 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);

				float z = ofMap(distances3, 0, 1001, 255, 0);

				float removefish = distances3 * (cos(c));
				float wl = ofMap(removefish, 0, 1001, wallsize, 0);
				ofSetColor(ofColor(z));
				float y = ofMap(x, 1, 1440, 0, 1440);
				ofSetRectMode(OF_RECTMODE_CENTER);
				//ofDrawLine(y, 0, y, ofGetHeight());
				ofDrawRectangle(y, ofGetHeight() / 2, 1, wl);
				
			}
		}
		if (hit4) {
			ofSetColor(ofColor(255, 255, 0));
			intersection = raze.getOrigin() + raze.getDirection() * distances4;
			if (distances4 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);
				float z = ofMap(distances4, 0, 1001, 255, 0);

				float removefish = distances4 * (cos(c));
				float wl = ofMap(removefish, 0, 1001, wallsize, 0);
				ofSetColor(ofColor(z));
				float y = ofMap(x, 1, 1440, 0, 1440);
				ofSetRectMode(OF_RECTMODE_CENTER);
				//ofDrawLine(y, 0, y, ofGetHeight());
				ofDrawRectangle(y, ofGetHeight() / 2, 1, wl);
			}
		}
		
	
		/*
		 //  with fish eye effect

		if (hit1) {
			ofSetColor(ofColor(255, 255, 0));
			intersection = raze.getOrigin() + raze.getDirection() * distances1;
			if (distances1 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);
				
				float z = ofMap(distances1, 0, 1001, 255, 0);
				float wl = ofMap(distances1, 0, 1001, wallsize, 0);
				ofSetColor(ofColor(z));
				float y = ofMap(x, 1, 1440, 0, 1440);
				ofSetRectMode(OF_RECTMODE_CENTER);
				//ofDrawLine(y, 0, y, ofGetHeight());
				ofDrawRectangle(y, ofGetHeight() / 2, 1, wl);
				//std::cout << "value: " << y << endl;
			}
		}
		if (hit2) {
			ofSetColor(ofColor(255, 255, 0));
			intersection = raze.getOrigin() + raze.getDirection() * distances2;
			if (distances2 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);

				float z = ofMap(distances2, 0, 1001, 255, 0);
				float wl = ofMap(distances2, 0, 1001, wallsize, 0);
				ofSetColor(ofColor(z));
				float y = ofMap(x, 1, 1440, 0, 1440);
				ofSetRectMode(OF_RECTMODE_CENTER);
				//ofDrawLine(y, 0, y, ofGetHeight());
				ofDrawRectangle(y, ofGetHeight() / 2, 1, wl);
				//std::cout << "value: " << y << endl;
			}
		}
		if (hit3) {
			ofSetColor(ofColor(255, 255, 0));
			intersection = raze.getOrigin() + raze.getDirection() * distances3;
			if (distances3 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);

				float z = ofMap(distances3, 0, 1001, 255, 0);
				float wl = ofMap(distances3, 0, 1001, wallsize, 0);
				ofSetColor(ofColor(z));
				float y = ofMap(x, 1, 1440, 0, 1440);
				ofSetRectMode(OF_RECTMODE_CENTER);
				//ofDrawLine(y, 0, y, ofGetHeight());
				ofDrawRectangle(y, ofGetHeight() / 2, 1, wl);
				
			}
		}
		if (hit4) {
			ofSetColor(ofColor(255, 255, 0));
			intersection = raze.getOrigin() + raze.getDirection() * distances4;
			if (distances4 <= theviewdistance) {
				ofDrawLine(raze.getOrigin(), intersection);
				ofDrawCircle(intersection, 3);

				float z = ofMap(distances4, 0, 1001, 255, 0);
				float wl = ofMap(distances4, 0, 1001, wallsize, 0);
				ofSetColor(ofColor(z));
				float y = ofMap(x, 1, 1440, 0, 1440);
				ofSetRectMode(OF_RECTMODE_CENTER);
				//ofDrawLine(y, 0, y, ofGetHeight());
				ofDrawRectangle(y, ofGetHeight() / 2, 1, wl);
			}
		}
		*/

	ofPopStyle();
}